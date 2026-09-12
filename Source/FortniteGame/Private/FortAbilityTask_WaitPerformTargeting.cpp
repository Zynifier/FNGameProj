#include "FortAbilityTask_WaitPerformTargeting.h"

void UFortAbilityTask_WaitPerformTargeting::OnTargetDataCancelledCallback() {
}

void UFortAbilityTask_WaitPerformTargeting::OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag) {
}

UFortAbilityTask_WaitPerformTargeting::UFortAbilityTask_WaitPerformTargeting() {
    bForceTargetingOnServer = false;
    bUseAsyncTargeting = false;
}
