#include "FortControllerComponent_MiniMapDiscoverable.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_MiniMapDiscoverable::ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage_Implementation() {
}

void UFortControllerComponent_MiniMapDiscoverable::HandleServerSquadChange(AFortPlayerStateAthena* InPlayerState, const uint8 PreviousSquadId) {
}

void UFortControllerComponent_MiniMapDiscoverable::OnRep_FortControllerMiniMapComponentVisibilities() {
}

void UFortControllerComponent_MiniMapDiscoverable::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_MiniMapDiscoverable, FortControllerMiniMapComponentVisibilities);
}

UFortControllerComponent_MiniMapDiscoverable::UFortControllerComponent_MiniMapDiscoverable() {
}
