#include "FortControllerAIBotComponentTelemetryData_Disguise.h"

FFortControllerAIBotComponentTelemetryData_Disguise::FFortControllerAIBotComponentTelemetryData_Disguise() {
    bWasDisguised = false;
    bWasRevealed = false;
    RevealReason = EFortPawnComponent_DisguiseRevealReason::ByDamage;
}
