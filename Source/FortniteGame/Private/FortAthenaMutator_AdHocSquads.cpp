#include "FortAthenaMutator_AdHocSquads.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_AdHocSquads::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

bool AFortAthenaMutator_AdHocSquads::PlayerInitiatedSquadInvite(const AFortPlayerPawn* InFortPlayerPawn) {
    return false;
}

bool AFortAthenaMutator_AdHocSquads::IsPlayersSquadFull(const AFortPlayerControllerAthena* PlayerController) const {
    return false;
}

void AFortAthenaMutator_AdHocSquads::HavePlayerLeaveAdHocSquad(AFortPlayerControllerAthena* LeavingPlayerController, const EAdHocSquads_LeaveSquadReason LeaveReason) {
}

void AFortAthenaMutator_AdHocSquads::PlayerSquadInviteEnded(AFortPlayerStateAthena* PlayerStateInviting, const EAdHocSquads_InviteStatus InviteEndedReason) {
}

bool AFortAthenaMutator_AdHocSquads::SquadUpPlayers(EAdHocSquads_SquadUpResult& OutSquadUpResult, uint8& OutNewSharedSquad, AFortPlayerControllerAthena* SquadUpInstigatorPlayerController, AFortPlayerControllerAthena* SquadUpFollowerPlayerController) {
    return false;
}

void AFortAthenaMutator_AdHocSquads::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AdHocSquads, InviteDataArray);
}

AFortAthenaMutator_AdHocSquads::AFortAthenaMutator_AdHocSquads() {
    MaxAdHocSquadSize = 0;
    AdHocSquadsControllerComponentClass = NULL;
    AdHocSquadDataClass = NULL;
    bMaintainSquadDataForNonAdHocSquads = false;
}
