#include "FortAthenaMutator_MatchConditionManager.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_MatchConditionManager::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_MatchConditionManager::OnSatisfied(const AFortAthenaMutator_MatchCondition* MatchConditionMutator, const bool bSatisfied) {
}

void AFortAthenaMutator_MatchConditionManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_MatchConditionManager, TeamNums);
    DOREPLIFETIME(AFortAthenaMutator_MatchConditionManager, MatchConditionMutators);
}

AFortAthenaMutator_MatchConditionManager::AFortAthenaMutator_MatchConditionManager() {
}
