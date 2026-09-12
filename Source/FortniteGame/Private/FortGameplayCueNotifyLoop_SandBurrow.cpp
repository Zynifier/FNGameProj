#include "FortGameplayCueNotifyLoop_SandBurrow.h"

AFortGameplayCueNotifyLoop_SandBurrow::AFortGameplayCueNotifyLoop_SandBurrow() {
    LayeredAudioComp = NULL;
    FXSpeedLinesComp = NULL;
    PlayerPawn = NULL;
    CurrentSpeed = 0.0f;
    bShouldShowTrailFX = false;
    bShouldShowSpeedLines = false;
}
