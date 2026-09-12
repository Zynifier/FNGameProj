#include "TurretCosmeticData.h"

FTurretCosmeticData::FTurretCosmeticData() {
    OverheatSmoke = NULL;
    OverheatScreenL = NULL;
    OverheatScreenR = NULL;
    OverheatAudio = NULL;
    OnOverheatAudio = NULL;
    OverheatAudioCurve = NULL;
    ServoAudio = NULL;
    AimingWeaponComponent = NULL;
    OverheatParamOnOverheatValue = 0.0f;
    RotatationAudioRangeInA = 0.0f;
    RotatationAudioRangeInB = 0.0f;
    RotatationAudioRangeOutA = 0.0f;
    RotatationAudioRangeOutB = 0.0f;
    HotThreshold = 0.0f;
    WarmThreshold = 0.0f;
    AudioFadeinDuration = 0.0f;
    AudioFadeoutDuration = 0.0f;
    OverheatColorExponent = 0.0f;
    ReplicateOverheatMax = 0.0f;
}
