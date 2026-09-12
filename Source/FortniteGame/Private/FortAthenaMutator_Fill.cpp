#include "FortAthenaMutator_Fill.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Fill::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

void AFortAthenaMutator_Fill::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_Fill::OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void AFortAthenaMutator_Fill::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Fill, LavaFloor);
}

AAthenaFillFloor* AFortAthenaMutator_Fill::GetLavaFloor() const {
    return NULL;
}

float AFortAthenaMutator_Fill::GetLavaSupportLevel() const {
    return 0.0f;
}

AFortAthenaMutator_Fill::AFortAthenaMutator_Fill() {
    FloorActorClass = NULL;
    LavaFloor = NULL;
}

