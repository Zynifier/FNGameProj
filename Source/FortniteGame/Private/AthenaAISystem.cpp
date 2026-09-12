#include "AthenaAISystem.h"

void UAthenaAISystem::AIProfiling_OnGamePhaseChanged(EAthenaGamePhase GamePhase) {
}

void UAthenaAISystem::AIProfiling_OnSafeZoneUpdated() {
}

UAthenaAISystem::UAthenaAISystem() {
    PerceptionManager = NULL;
    AIDropper = NULL;
    AISpawner = NULL;
    AIServiceManager = NULL;
    AIPopulationTracker = NULL;
    PlayerBotManager = NULL;
}

