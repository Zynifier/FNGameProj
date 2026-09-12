#include "FortAthenaAIRuntimeParameters_AIBotDisguise.h"

UFortAthenaAIRuntimeParameters_AIBotDisguise::UFortAthenaAIRuntimeParameters_AIBotDisguise() {
    bShouldApplyDisguise = false;
    bRevealDisguiseOnDamage = false;
    bRevealOnDamageExcludeAIPawnDamage = false;
    bRevealDisguiseOnPlayerProximity = false;
    RevealPlayerProximityDistanceSqr = 0.0f;
    RevealPlayerProximityMinDuration = 0.0f;
    RevealPlayerProximityMaxDuration = 0.0f;
    NameSettingsAfterReveal = NULL;
    DisguiseConversationComponentOverride = NULL;
}
