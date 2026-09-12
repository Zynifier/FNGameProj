#include "FortAthenaMutator_Rounds.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Rounds::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_Rounds::OnRep_CurrentRoundNum() {
}

int32 AFortAthenaMutator_Rounds::GetLastCompletedRoundNum() const {
    return 0;
}

int32 AFortAthenaMutator_Rounds::GetRoundNum() const {
    return 0;
}

void AFortAthenaMutator_Rounds::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Rounds, CurrentRoundNum);
    DOREPLIFETIME(AFortAthenaMutator_Rounds, RoundPhase);
}

void AFortAthenaMutator_Rounds::OnMatchConditionTimingSatisfied(const EMatchConditionMutatorTimingType TimingType) {
}

void AFortAthenaMutator_Rounds::OnRep_RoundPhase(const EAthenaRoundsMutatorPhase OldRoundPhase) {
}

EAthenaRoundsMutatorPhase AFortAthenaMutator_Rounds::GetPhase() const {
    return EAthenaRoundsMutatorPhase::GamePhase_Setup;
}

AFortAthenaMutator_Rounds::AFortAthenaMutator_Rounds() {
    CurrentRoundNum = 0;
    MatchConditionManager = NULL;
    RoundPhase = EAthenaRoundsMutatorPhase::GamePhase_Setup;
}
