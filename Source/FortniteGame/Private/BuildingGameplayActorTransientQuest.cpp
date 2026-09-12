#include "BuildingGameplayActorTransientQuest.h"

void ABuildingGameplayActorTransientQuest::MulticastSetInteractionText_Implementation(const AFortPlayerPawn* PawnInTriggerVolume, bool bBountyAvailable, bool bBountyInProgress) {
}

void ABuildingGameplayActorTransientQuest::ServerUpdateInteractionText_Implementation() {
}

void ABuildingGameplayActorTransientQuest::StartUpdatingInteractionText(const AActor* TriggeredActor) {
}

void ABuildingGameplayActorTransientQuest::StopUpdatingInteractionText(const AActor* TriggeredActor) {
}

ABuildingGameplayActorTransientQuest::ABuildingGameplayActorTransientQuest() {
    InteractionTextRefreshRate = 0.0f;
}
