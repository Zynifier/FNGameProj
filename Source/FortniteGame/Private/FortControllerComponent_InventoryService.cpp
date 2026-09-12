#include "FortControllerComponent_InventoryService.h"
#include "Net/UnrealNetwork.h"

UCurveTable* UFortControllerComponent_InventoryService::GetDefaultCurrencyPayoutTable() {
    return NULL;
}

UFortResourceItemDefinition* UFortControllerComponent_InventoryService::GetDefaultGlobalCurrencyItemDefinition() {
    return NULL;
}

UFortControllerComponent_InventoryService* UFortControllerComponent_InventoryService::GetInventoryServiceComponent(AFortPlayerControllerGameplay* FortPC) {
    return NULL;
}

bool UFortControllerComponent_InventoryService::IsGlobalCurrencyWidgetEnabled() {
    return false;
}

void UFortControllerComponent_InventoryService::HandleOnItemCountChanged(TScriptInterface<IFortInventoryOwnerInterface> InventoryOwner, UFortItemDefinition* Definition, int32 Delta) {
}

void UFortControllerComponent_InventoryService::HandlePlacementChanged(AFortPlayerStateAthena* FortPlayerState, int32 NewPlacement) {
}

void UFortControllerComponent_InventoryService::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void UFortControllerComponent_InventoryService::OnPlaylistDataReady(AFortGameStateAthena* GameState, const UFortPlaylist* Playlist, const FGameplayTagContainer& PlaylistContextTags) {
}

void UFortControllerComponent_InventoryService::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_InventoryService, TotalCurrencyEarnedData);
}

UFortControllerComponent_InventoryService::UFortControllerComponent_InventoryService() {
    bBoundToRegisteredPlayerInfo = false;
}
