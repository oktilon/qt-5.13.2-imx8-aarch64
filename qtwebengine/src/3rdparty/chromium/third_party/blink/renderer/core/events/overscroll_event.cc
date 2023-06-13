// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/events/overscroll_event.h"

namespace blink {
OverscrollEvent::OverscrollEvent(const AtomicString& type,
                                 double delta_x,
                                 double delta_y)
    : Event(type, Bubbles::kNo, Cancelable::kNo),
      delta_x_(delta_x),
      delta_y_(delta_y) {}

OverscrollEvent::OverscrollEvent(const AtomicString& type,
                                 const OverscrollEventInit* initializer)
    : Event(type, Bubbles::kNo, Cancelable::kNo),
      delta_x_(initializer->deltaX()),
      delta_y_(initializer->deltaY()) {}

void OverscrollEvent::Trace(blink::Visitor* visitor) {
  Event::Trace(visitor);
}

}  // namespace blink