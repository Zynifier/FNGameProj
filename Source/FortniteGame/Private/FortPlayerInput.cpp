#include "FortPlayerInput.h"

void UFortPlayerInput::HandleDesiredGamepadInputSettingsReloadConfig(UFortPlayerInputSettings* GamepadSettings) {
}

void UFortPlayerInput::HandleDesiredKBMInputSettingsReloadConfig(UFortPlayerInputSettings* KBMSettings) {
}

UFortPlayerInput::UFortPlayerInput() {
    CampaignDefaultKBMPresetName = TEXT("ConfigKBM_Campaign");
    AthenaDefaultKBMPresetName = TEXT("ConfigKBM_Athena");
    CampaignKBMResetToDefaultPresetNames.AddDefaulted(2);
    AthenaKBMResetToDefaultPresetNames.AddDefaulted(2);
    DefaultGamepadPresetName = TEXT("ConfigG");
    DefaultGamepadPresetNameAthena = TEXT("ConfigG_Athena");
    DefaultGamepadPresetNameAthenaMobile = TEXT("ConfigG_Athena");
    CustomGamepadPresetNameAthena = TEXT("ConfigCustom_Athena");
    FortPlayerInputSettingsNames.AddDefaulted(16);
    TouchLookAccelerationMultiplier = 1;
    TouchBuildingMultiplier = 1;
    TouchEditModeMultiplier = 1;
    MotionYawAxis = EFortMotionYawAxis::Yaw;
    TargetingMultiplier = 1;
    ScopedMultiplier = 1;
    GamepadTargetingMultiplier = 1;
    GamepadScopedMultiplier = 1;
    GamepadBuildingMultiplier = 1;
    GamepadEditModeMultiplier = 1;
    bInvertedPitchForMotion = false;
    bInvertedYawMobile = false;
    MotionTargetingMultiplier = 1;
    MotionScopedMultiplier = 1;
    MotionHarvestingToolMultiplier = 1;
    GamepadMoveStickDeadZone = 1;
    GamepadLookStickDeadZone = 1;
    DesiredKBMPlayerInputSettings = NULL;
    DesiredGamepadPlayerInputSettings = NULL;
    InputActionTypeFriendlyNames.AddDefaulted(4);
    InputActionGroupContexts.AddDefaulted(447);
    InputActionGroupExemptFromAllModesCheck.AddDefaulted(45);
    GyroV2Sensitivity = 0.0f;
    GyroV2DetachedYawAxis = EFortMotionYawAxis::Yaw;
    GyroV2AttachedYawAxis = EFortMotionYawAxis::Yaw;
    bGyroV2LookStickDisables = false;
    bGyroV2AimAssist = false;
    GyroV2AccelMultiplier = 0.0f;
    GyroV2AccelMinThreshold = 0.0f;
    GyroV2AccelMaxThreshold = 0.0f;
    GyroV2VerticalMultiplier = 0.0f;
    GyroV2DeadZone = 0.0f;
    GyroV2Smoothing = 0.0f;
    GyroV2Tightening = 0.0f;
    GyroV2TrackballDecay = 0.0f;
    GyroV2ButtonHoldTime = 0.0f;
    bGyroV2DisabledWhileDriving = false;
    bFlickStickEnabled = false;
    FlickTime = 0.0f;
    FlickSmoothingThreshold = 0.0f;
    FlickDeadZone = 0.0f;
    GyroV2ActiveMode = EGyroActiveMode::ScopeOnly;
    GyroV2AccelerationMode = EGyroAcceleration::Off;
    GyroV2ButtonX = EGyroButtonResponse::NoChange;
    GyroV2ButtonY = EGyroButtonResponse::NoChange;
}

