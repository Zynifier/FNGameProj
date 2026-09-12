#include "FortPlayerBountyGameplayAbility.h"

void UFortPlayerBountyGameplayAbility::BountyPoached() {
}

void UFortPlayerBountyGameplayAbility::CleanupBountyHunter() const {
}

void UFortPlayerBountyGameplayAbility::CleanupBountyProtector() const {
}

void UFortPlayerBountyGameplayAbility::CleanupBountyTarget() const {
}

bool UFortPlayerBountyGameplayAbility::GetIsPrimaryHunter() const {
    return false;
}

TArray<AFortPlayerStateAthena*> UFortPlayerBountyGameplayAbility::GetTrackedBountyHunters() const {
    return TArray<AFortPlayerStateAthena*>();
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedHunterBountyTarget() const {
    return NULL;
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedPrimaryHunter() const {
    return NULL;
}

AFortPlayerStateAthena* UFortPlayerBountyGameplayAbility::GetTrackedProtectorBountyTarget() const {
    return NULL;
}

void UFortPlayerBountyGameplayAbility::SpectatorCompleteUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& CompletedEventTag) {
}

void UFortPlayerBountyGameplayAbility::SpectatorFailUrgentQuest(const FUrgentQuestData& UrgentQuestData, const FGameplayTag& FailedEventTag) {
}

void UFortPlayerBountyGameplayAbility::SpectatorShowUrgentQuestMessage(const FUrgentQuestData& UrgentQuestData) {
}

UFortPlayerBountyGameplayAbility::UFortPlayerBountyGameplayAbility() {
}
