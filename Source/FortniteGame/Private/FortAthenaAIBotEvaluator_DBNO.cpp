#include "FortAthenaAIBotEvaluator_DBNO.h"

void UFortAthenaAIBotEvaluator_DBNO::OnAllyPawnDBNOStateChanged(AFortPawn* InPlayer, bool bInIsDBNO) {
}

UFortAthenaAIBotEvaluator_DBNO::UFortAthenaAIBotEvaluator_DBNO() {
    DBNODestinationKeyName = TEXT("AIEvaluator_DBNO_Destination");
    bAllowReachSquadmates = true;
    bAllowReachSameFactionNPCs = false;
    DBNOSkillSet = NULL;
    DBNOBehaviorRuntimeParameters = NULL;
}

