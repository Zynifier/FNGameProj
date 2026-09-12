#include "FortAthenaAISpawnerDataComponent_AIBotBehavior.h"

UFortAthenaAISpawnerDataComponent_AIBotBehavior::UFortAthenaAISpawnerDataComponent_AIBotBehavior() {
    bCanUseFallbackPatrolAround = true;
    bAllowReviveSquadmates = false;
    bAllowReviveSameFactionNPCs = false;
    bUseReviveToken = false;
    MaxDistanceToRevive = 0.0f;
}

