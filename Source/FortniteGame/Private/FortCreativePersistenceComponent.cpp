#include "FortCreativePersistenceComponent.h"

float UFortCreativePersistenceComponent::GetAutoSaveInterval() {
    return 0.0f;
}

void UFortCreativePersistenceComponent::ClearAllPlayersSpecificData(AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerDataNeededAfterSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerDataNeededBeforeSpawn(AFortPlayerState* FortPlayerState, AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayersDataNeededAfterSpawn(AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::LoadPlayersDataNeededBeforeSpawn(AFortMinigame* Minigame) {
}

void UFortCreativePersistenceComponent::OnPlayerPawnFinishedTeleported(AFortPlayerPawn* FortPlayerPawn) {
}

void UFortCreativePersistenceComponent::RemovePendingToApplyData(AFortPlayerState* FortPlayerState, bool bShowsLog) {
}

void UFortCreativePersistenceComponent::StoreAllMinigamePlayersData(const AFortMinigame* Minigame) {
}

bool UFortCreativePersistenceComponent::StorePlayerRelatedData(APlayerState* PlayerState, const AFortMinigame* Minigame) {
    return false;
}

void UFortCreativePersistenceComponent::ClearPlayerRelatedData(APlayerState* PlayerState, AFortMinigame* Minigame) const {
}

void UFortCreativePersistenceComponent::ClearPlayerSpecificData(APlayerState* PlayerState, AFortMinigame* Minigame) const {
}

UFortCreativePersistenceComponent::UFortCreativePersistenceComponent() {
}
