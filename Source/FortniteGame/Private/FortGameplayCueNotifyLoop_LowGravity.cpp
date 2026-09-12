#include "FortGameplayCueNotifyLoop_LowGravity.h"

AFortGameplayCueNotifyLoop_LowGravity::AFortGameplayCueNotifyLoop_LowGravity() {
    InterpDelta = 0.0f;
    TargetDelta = 0.0f;
    PlayerPawn = NULL;
    StartTime = 0.0f;
    Duration = 0.0f;
    ExpirationTellDuration = 0.0f;
    TargetDelta_FallingRangeInput_Start = 0.0f;
    TargetDelta_FallingRangeInput_End = 0.0f;
    TargetDelta_FallingRangeOutput_Start = 0.0f;
    TargetDelta_FallingRangeOutput_End = 0.0f;
    InterpSpeedHigh = 0.0f;
    InterpSpeedLow = 0.0f;
    SoundMultiplier_RangeOutput_Start = 0.0f;
    SoundMultiplier_RangeOutput_End = 0.0f;
}
