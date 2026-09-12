#include "FortActiveSubscription.h"

FFortActiveSubscription::FFortActiveSubscription() {
    IsRetryingRenewal = false;
    WillAutoRenew = false;
    AppStore = EAppStore::DebugStore;
}
