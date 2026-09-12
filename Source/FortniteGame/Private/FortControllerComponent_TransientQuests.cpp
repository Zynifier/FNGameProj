#include "FortControllerComponent_TransientQuests.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_TransientQuests::CleanupCompletedQuest(const UFortQuestItemDefinition* CompletedQuestDef) {
}

void UFortControllerComponent_TransientQuests::ClientBroadcastOnUrgentQuestEnded_Implementation(const FGameplayTag& EventTag) {
}

void UFortControllerComponent_TransientQuests::ClientGrantTransientQuest_Implementation(const UFortQuestItemDefinition* QuestItemDef, const UFortQuestItemDefinition* PreceedingQuestDef) {
}

void UFortControllerComponent_TransientQuests::ClientHandleSharedQuestGranted_Implementation(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef) {
}

void UFortControllerComponent_TransientQuests::ClientHandleSharedQuestRemoved_Implementation(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef) {
}

void UFortControllerComponent_TransientQuests::ClientHandleSharedQuestUpdated_Implementation(const FUniqueNetIdRepl PlayerID, const UFortQuestItemDefinition* QuestDef, const FName BackendName, int32 StatValue, int32 Delta) {
}

void UFortControllerComponent_TransientQuests::ClientRemoveThreatLevelBind_Implementation() {
}

void UFortControllerComponent_TransientQuests::ClientRemoveTransientQuest_Implementation(const UFortQuestItemDefinition* QuestItemDef) {
}

void UFortControllerComponent_TransientQuests::ClientSetBountyHunterNPCIcon_Implementation(const TSoftObjectPtr<UTexture2D>& NPCIcon) {
}

void UFortControllerComponent_TransientQuests::ClientSetBountyTargetNPCIcon_Implementation(const TSoftObjectPtr<UTexture2D>& NPCIcon) {
}

void UFortControllerComponent_TransientQuests::GrantTransientQuest(const UFortQuestItemDefinition* QuestDefToGrant, const UFortQuestItemDefinition* PreceedingQuestDef) {
}

void UFortControllerComponent_TransientQuests::OnRep_TrackedHunterBountyTargetDistance() {
}

void UFortControllerComponent_TransientQuests::RemoveSharedQuest(const UFortQuestItemDefinition* QuestDefToRemove) {
}

void UFortControllerComponent_TransientQuests::StopPlayerBountyThreatLevelUpdates() {
}

int32 UFortControllerComponent_TransientQuests::GetTrackedHunterBountyTargetDistance() const {
    return 0;
}

int32 UFortControllerComponent_TransientQuests::GetTrackedHunterBountyTargetPrice() const {
    return 0;
}

void UFortControllerComponent_TransientQuests::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_TransientQuests, TrackedHunterBountyTargetDistance);
}

void UFortControllerComponent_TransientQuests::ClientBroadcastOnPlayerBountyThreatLevelUpdated_Implementation(EPlayerBountyThreatLevel NewPlayerBountyThreatLevel) {
}

void UFortControllerComponent_TransientQuests::ClientBroadcastOnUrgentQuestStarted_Implementation(const FUrgentQuestData& UrgentQuestData, float EventTimeRemaining) {
}

UFortControllerComponent_TransientQuests::UFortControllerComponent_TransientQuests() {
    TrackedHunterBountyTarget = NULL;
    TrackedHunterBountyTargetDistance = 0;
    TrackedHunterBountyTargetPrice = 0;
    TrackedProtectorBountyTarget = NULL;
    TrackedPrimaryHunter = NULL;
    ProtectorQuestToGrant = NULL;
    TargetQuestToGrant = NULL;
}
