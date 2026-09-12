#include "GlobalWeatherData.h"

FGlobalWeatherData::FGlobalWeatherData() {
    BotVisibilityScale = NULL;
    PostProcessBlendWeight = NULL;
    TimeForNextAttempt = 1;
    Frequency = NULL;
    Chance = NULL;
    bIsEnabled = false;
}

