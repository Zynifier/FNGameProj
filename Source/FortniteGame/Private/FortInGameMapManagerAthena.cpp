#include "FortInGameMapManagerAthena.h"

void AFortInGameMapManagerAthena::HandleLocalPlayerStateSet() {
}

void AFortInGameMapManagerAthena::HandlePlayerTeamIndexChanged() {
}

void AFortInGameMapManagerAthena::OnAthenaPlayerControllerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void AFortInGameMapManagerAthena::OnBeginSkydivingFromBus(AFortPlayerControllerZone* FortPC) {
}

void AFortInGameMapManagerAthena::OnEndSkydivingFromBus(AFortPlayerControllerZone* FortPC) {
}

AFortInGameMapManagerAthena::AFortInGameMapManagerAthena() {
    MapMaskMaterial = NULL;
    MapMaskMaterialMID = NULL;
    bDrawMapLocationsIfFogged = false;
    bDrawSpecialActorIconsIfFogged = false;
    bDrawSquadPinsIfFogged = false;
    bDrawMapIndicatorsIfFogged = false;
    bDrawEliminationsIfFogged = false;
}

