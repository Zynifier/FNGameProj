#include "FortControllerComponent_AdHocSquads.h"
#include "Net/UnrealNetwork.h"

void UFortControllerComponent_AdHocSquads::ClientOnLeaveParty_Implementation() {
}

void UFortControllerComponent_AdHocSquads::ClientOnOtherPlayerJoinedSquad_Implementation(const AFortPlayerStateAthena* JoiningPlayer, const bool bInviteInstigatedByThisPlayer) {
}

void UFortControllerComponent_AdHocSquads::ClientOnOwningPlayerJoinedSquad_Implementation(const AFortPlayerStateAthena* PlayerTheOwningPlayerIsJoining, const bool bInviteInstigatedByThisPlayer) {
}

void UFortControllerComponent_AdHocSquads::HandleServerSquadChange(AFortPlayerStateAthena* PlayerState, const uint8 OldSquadIndex) {
}

void UFortControllerComponent_AdHocSquads::HandleServerTeamChange() {
}

void UFortControllerComponent_AdHocSquads::OnRep_AdHocSquadsMutator(AFortAthenaMutator_AdHocSquads* OldAdHocSquadsMutator) {
}

UAdHocSquadData* UFortControllerComponent_AdHocSquads::GetAdHocSquadData() const {
    return NULL;
}

TArray<AFortPlayerStateAthena*> UFortControllerComponent_AdHocSquads::GetNearbySquadInvitingPlayers() const {
    return TArray<AFortPlayerStateAthena*>();
}

int32 UFortControllerComponent_AdHocSquads::GetNumberOfPlayersInSquad(const AFortPlayerStateAthena* InPlayerState) const {
    return 0;
}

void UFortControllerComponent_AdHocSquads::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortControllerComponent_AdHocSquads, AdHocSquadsMutator);
}

void UFortControllerComponent_AdHocSquads::ClientOnFailedToJoinSquad_Implementation(const AFortPlayerStateAthena* PlayerFromSquad, const EAdHocSquads_SquadUpResult FailureReason) {
}

void UFortControllerComponent_AdHocSquads::ClientOnOtherPlayerLeftSquad_Implementation(const AFortPlayerStateAthena* LeavingPlayer, const EAdHocSquads_LeaveSquadReason LeaveReason) {
}

void UFortControllerComponent_AdHocSquads::ClientOnOwningPlayerLeftSquad_Implementation(const EAdHocSquads_LeaveSquadReason LeaveReason) {
}

void UFortControllerComponent_AdHocSquads::ClientOnSquadInviteInitiationFailed_Implementation(const EAdHocSquads_SquadUpResult FailureReason) {
}

void UFortControllerComponent_AdHocSquads::OnSquadInviteDataChanged(const FAdHocSquad_InviteData& InviteData) {
}

UFortControllerComponent_AdHocSquads::UFortControllerComponent_AdHocSquads() {
    AdHocSquadsMutator = NULL;
    AdHocSquadData = NULL;
    ClosestNearbySquadInvitingPlayerState = NULL;
}
