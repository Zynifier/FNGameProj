#include "AthenaAIServicePlayerBots.h"

bool UAthenaAIServicePlayerBots::IsWeaponSupported(AFortWeapon* FortWeapon) {
    return false;
}

void UAthenaAIServicePlayerBots::JoinTeam(const AController* SourceTeamController, AController* DestinationTeamController) {
}

void UAthenaAIServicePlayerBots::KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, AActor* BotOwner) {
}

void UAthenaAIServicePlayerBots::OnAgentGameOver(AFortAthenaAIBotController* AIBotController, AFortPawn* Pawn) {
}

void UAthenaAIServicePlayerBots::OnAISpawned(APawn* Pawn, const int32 RequestID) {
}

void UAthenaAIServicePlayerBots::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

void UAthenaAIServicePlayerBots::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS) {
}

APawn* UAthenaAIServicePlayerBots::SpawnAI(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList) {
    return NULL;
}

UAthenaAIServicePlayerBots::UAthenaAIServicePlayerBots() {
    CachedBotMutator = NULL;
    bBotHostileToHumanPlayersOnly = false;
    TagQueryWeightChance = NULL;
    BotItemDataTable = NULL;
    MaxAroundBotDistanceToSearchPOIToLand = 0.0f;
    LastTeamPlayerStart = NULL;
    DeadBotCleanupMinDelay = 0.0f;
    CurrentFillingTeam = NULL;
    CurrentBotControllerUID = 0;
    CachedAIPopulationTracker = NULL;
    CachedServerBotManager = NULL;
}
