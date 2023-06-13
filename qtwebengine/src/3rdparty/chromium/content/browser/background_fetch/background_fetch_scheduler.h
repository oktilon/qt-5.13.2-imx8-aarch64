// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_SCHEDULER_H_
#define CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_SCHEDULER_H_

#include <map>
#include <string>
#include <utility>
#include <vector>

#include "base/callback.h"
#include "base/containers/circular_deque.h"
#include "base/macros.h"
#include "base/memory/weak_ptr.h"
#include "content/browser/background_fetch/background_fetch_data_manager_observer.h"
#include "content/browser/background_fetch/background_fetch_event_dispatcher.h"
#include "content/browser/background_fetch/background_fetch_registration_id.h"
#include "content/browser/service_worker/service_worker_context_core_observer.h"
#include "content/common/content_export.h"
#include "third_party/blink/public/mojom/background_fetch/background_fetch.mojom.h"

namespace content {

class BackgroundFetchDataManager;
class BackgroundFetchDelegateProxy;
class BackgroundFetchJobController;
class BackgroundFetchRegistrationId;
class BackgroundFetchRegistrationNotifier;
class BackgroundFetchRequestInfo;

// Maintains a list of Controllers and chooses which ones should launch new
// downloads.
class CONTENT_EXPORT BackgroundFetchScheduler
    : public BackgroundFetchDataManagerObserver,
      public ServiceWorkerContextCoreObserver {
 public:
  BackgroundFetchScheduler(
      BackgroundFetchDataManager* data_manager,
      BackgroundFetchRegistrationNotifier* registration_notifier,
      BackgroundFetchDelegateProxy* delegate_proxy,
      scoped_refptr<ServiceWorkerContextWrapper> service_worker_context);
  ~BackgroundFetchScheduler() override;

  // Aborts the background fetch identified by |registration_id|.
  // Must only be used for background fetches aborted by the developer,
  // other cases are handled elsewhere.
  void Abort(const BackgroundFetchRegistrationId& registration_id,
             blink::mojom::BackgroundFetchFailureReason failure_reason,
             blink::mojom::BackgroundFetchService::AbortCallback callback);

  // BackgroundFetchDataManagerObserver implementation.
  void OnRegistrationCreated(
      const BackgroundFetchRegistrationId& registration_id,
      const blink::mojom::BackgroundFetchRegistration& registration,
      blink::mojom::BackgroundFetchOptionsPtr options,
      const SkBitmap& icon,
      int num_requests,
      bool start_paused) override;
  void OnRegistrationLoadedAtStartup(
      const BackgroundFetchRegistrationId& registration_id,
      const blink::mojom::BackgroundFetchRegistration& registration,
      blink::mojom::BackgroundFetchOptionsPtr options,
      const SkBitmap& icon,
      int num_completed_requests,
      int num_requests,
      std::vector<scoped_refptr<BackgroundFetchRequestInfo>>
          active_fetch_requests) override;
  void OnServiceWorkerDatabaseCorrupted(
      int64_t service_worker_registration_id) override;
  void OnRegistrationQueried(
      blink::mojom::BackgroundFetchRegistration* registration) override;
  void OnRequestCompleted(const std::string& unique_id,
                          blink::mojom::FetchAPIRequestPtr request,
                          blink::mojom::FetchAPIResponsePtr response) override;

  // ServiceWorkerContextCoreObserver implementation.
  void OnRegistrationDeleted(int64_t registration_id,
                             const GURL& pattern) override;
  void OnStorageWiped() override;

 private:
  friend class BackgroundFetchJobControllerTest;
  friend class BackgroundFetchSchedulerTest;

  void ScheduleDownload();

  // Helper method to abandon ongoing fetches for a given service worker.
  // Abandons all of them if |service_worker_registration_id| is set to
  // blink::mojom::kInvalidServiceWorkerRegistrationId.
  void AbortFetches(int64_t service_worker_registration_id);

  std::unique_ptr<BackgroundFetchJobController> CreateInitializedController(
      const BackgroundFetchRegistrationId& registration_id,
      const blink::mojom::BackgroundFetchRegistration& registration,
      blink::mojom::BackgroundFetchOptionsPtr options,
      const SkBitmap& icon,
      int num_completed_requests,
      int num_requests,
      std::vector<scoped_refptr<BackgroundFetchRequestInfo>>
          active_fetch_requests,
      bool start_paused);

  void FinishJob(
      const BackgroundFetchRegistrationId& registration_id,
      blink::mojom::BackgroundFetchFailureReason failure_reason,
      base::OnceCallback<void(blink::mojom::BackgroundFetchError)> callback);

  void DidMarkForDeletion(
      const BackgroundFetchRegistrationId& registration_id,
      bool job_started,
      base::OnceCallback<void(blink::mojom::BackgroundFetchError)> callback,
      blink::mojom::BackgroundFetchError error,
      blink::mojom::BackgroundFetchFailureReason failure_reason);

  void CleanupRegistration(
      const BackgroundFetchRegistrationId& registration_id);

  void DispatchClickEvent(const std::string& unique_id);

  // Owned by BackgroundFetchContext.
  BackgroundFetchDataManager* data_manager_;
  BackgroundFetchRegistrationNotifier* registration_notifier_;
  BackgroundFetchDelegateProxy* delegate_proxy_;

  BackgroundFetchEventDispatcher event_dispatcher_;

  // The order in which to process the job controllers.
  base::circular_deque<std::string> controller_ids_;

  // Map from background fetch registration |unique_id|s to active job
  // controllers. Must be destroyed before |data_manager_|, |scheduler_| and
  // |registration_notifier_|.
  std::map<std::string, std::unique_ptr<BackgroundFetchJobController>>
      job_controllers_;

  // The current fetch jo controller that is being processed.
  BackgroundFetchJobController* active_controller_ = nullptr;

  // Map from |unique_id|s to {|registration_id|, |registration|}.
  // An entry in here means the fetch has completed. This information is needed
  // after the fetch has completed to dispatch the backgroundfetchclick event.
  // TODO(crbug.com/857122): Clean this up when the UI is no longer showing.
  std::map<std::string,
           std::pair<BackgroundFetchRegistrationId,
                     blink::mojom::BackgroundFetchRegistrationPtr>>
      completed_fetches_;

  base::WeakPtrFactory<BackgroundFetchScheduler> weak_ptr_factory_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundFetchScheduler);
};

}  // namespace content

#endif  // CONTENT_BROWSER_BACKGROUND_FETCH_BACKGROUND_FETCH_SCHEDULER_H_