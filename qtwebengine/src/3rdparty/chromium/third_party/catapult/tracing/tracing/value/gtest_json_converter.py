# Copyright 2018 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

import json

from tracing.value import histogram
from tracing.value import histogram_set
from tracing.value.diagnostics import generic_set
from tracing.value.diagnostics import reserved_infos


def ConvertGtestJson(gtest_json):
  """Convert JSON from a gtest perf test to Histograms.

  Incoming data is in the following format:
  {
    'metric1': {
      'units': 'unit1',
      'traces': {
        'story1': ['mean', 'std_dev'],
        'story2': ['mean', 'std_dev'],
      },
      'important': ['testcase1', 'testcase2'],
    },
    'metric2': {
      'units': 'unit2',
      'traces': {
        'story1': ['mean', 'std_dev'],
        'story2': ['mean', 'std_dev'],
      },
      'important': ['testcase1', 'testcase2'],
    },
    ...
  }
  We ignore the 'important' fields and just assume everything should be
  considered important.

  We also don't bother adding any reserved diagnostics like mastername in this
  script since that should be handled by the upload script.

  Args:
    gtest_json: A JSON dict containing perf output from a gtest

  Returns:
    A HistogramSet containing equivalent histograms and diagnostics
  """

  hs = histogram_set.HistogramSet()

  for metric, metric_data in gtest_json.iteritems():
    # Maintain the same unit if we're able to find an exact match, converting
    # time units if possible. Otherwise use 'unitless'.
    unit, multiplier = _ConvertUnit(metric_data.get('units'))

    for story, story_data in metric_data['traces'].iteritems():
      # We should only ever have the mean and standard deviation here.
      assert len(story_data) == 2
      h = histogram.Histogram(metric, unit)
      h.diagnostics[reserved_infos.STORIES.name] = generic_set.GenericSet(
          [story])
      mean = float(story_data[0]) * multiplier
      std_dev = float(story_data[1]) * multiplier
      h.AddSample(mean)

      # Synthesize the running statistics since we only have the mean + standard
      # deviation instead of the actual data points.
      h._running = histogram.RunningStatistics.FromDict([
          2, # count, we need this to be >1 in order for variance to work
          mean, # max
          0, # meanlogs
          mean, # mean
          mean, # min
          2 * mean, # sum, this must be count * mean otherwise the reported mean
                    # is incorrect after merging statistics when reserved
                    # diagnostics are added.
          std_dev * std_dev, # variance
      ])

      hs.AddHistogram(h)

  return hs

def ConvertGtestJsonFile(filepath):
  """Convert JSON in a file from a gtest perf test to Histograms.

  Contents of the given file will be overwritten with the new Histograms data.

  Args:
    filepath: The filepath to the JSON file to read/write from/to.
  """
  with open(filepath, 'r') as f:
    data = json.load(f)
  histograms = ConvertGtestJson(data)
  with open(filepath, 'w') as f:
    json.dump(histograms.AsDicts(), f)


def _ConvertUnit(unit):
  # We assume that smaller is better since we don't have an actual way to
  # determine what the improvement direction is and most or all metrics from
  # gtest perf tests have a downward improvement direction.
  if unit in histogram.UNIT_NAMES:
    return unit + '_smallerIsBetter', 1
  # A number of existing gtest perf tests report time in units like
  # microseconds, but histograms only support milliseconds. So, convert here if
  # we can.
  if unit == 'us':
    return 'msBestFitFormat_smallerIsBetter', 0.001
  if unit == 'ns':
    return 'msBestFitFormat_smallerIsBetter', 0.000001
  return 'unitless_smallerIsBetter', 1
