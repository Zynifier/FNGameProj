#include "AthenaAIBlueprintLibrary.h"

UAthenaAIPopulationTracker* UAthenaAIBlueprintLibrary::GetAIPopulationTracker(UObject* WorldContextObject) {
    return NULL;
}

UAthenaAIServicePlayerBots* UAthenaAIBlueprintLibrary::GetAIServicePlayerBots(UObject* WorldContextObject) {
    return NULL;
}

bool UAthenaAIBlueprintLibrary::IsWeaponSupported(UObject* WorldContextObject, AFortWeapon* FortWeapon) {
    return false;
}

void UAthenaAIBlueprintLibrary::JoinTeam(UObject* WorldContextObject, const AController* SourceTeamController, AController* DestinationTeamController) {
}

void UAthenaAIBlueprintLibrary::KillBots(UObject* WorldContextObject, const bool bKillPlayers, const bool bKillNoneParticipants, const uint8 TeamIndex, AActor* BotOwner) {
}

UAthenaAIBlueprintLibrary::UAthenaAIBlueprintLibrary() {
}
