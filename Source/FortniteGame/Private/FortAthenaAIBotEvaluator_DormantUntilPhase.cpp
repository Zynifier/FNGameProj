#include "FortAthenaAIBotEvaluator_DormantUntilPhase.h"

void UFortAthenaAIBotEvaluator_DormantUntilPhase::HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

UFortAthenaAIBotEvaluator_DormantUntilPhase::UFortAthenaAIBotEvaluator_DormantUntilPhase() {
    RequiredGamePhaseStep = EAthenaGamePhaseStep::None;
}
