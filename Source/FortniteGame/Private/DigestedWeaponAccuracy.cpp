#include "DigestedWeaponAccuracy.h"

FDigestedWeaponAccuracy::FDigestedWeaponAccuracy() {
    IdealAttackRange = 1;
    TargetingIdealAttackRange = 1;
    MaxAttackRange = 1;
    ChanceToAimAtTargetsFeet = 1;
    bKeepAimingOnSameSideWhileFiring = false;
    MaxTrackingHeightOffsetError = 0.0f;
    MinRotationInterpSpeed = 0.0f;
    MaxRotationInterpSpeed = 0.0f;
}

