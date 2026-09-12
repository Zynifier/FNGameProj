#include "FortReplayMovableSpotLightPilotController.h"

void AFortReplayMovableSpotLightPilotController::DestroyAllReplaySpotLights() {
}

void AFortReplayMovableSpotLightPilotController::DestroyReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::DuplicateReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::GamepadLightColorSelectX(float Amt) {
}

void AFortReplayMovableSpotLightPilotController::GamepadLightColorSelectY(float Amt) {
}

void AFortReplayMovableSpotLightPilotController::LockAllReplaySpotLights() {
}

void AFortReplayMovableSpotLightPilotController::PilotReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::ReAimReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SelectNextSpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SelectPrevSpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SelectSpotLightByNumber(uint32 Number) {
}

void AFortReplayMovableSpotLightPilotController::SetSpotLightGroupMoveLockByNumber(uint32 Number, bool bLocked) {
}

void AFortReplayMovableSpotLightPilotController::SpawnReplaySpotLight() {
}

void AFortReplayMovableSpotLightPilotController::SpawnReplaySpotLightEx(float X, float Y, float Z, float Yaw, float Pitch, int32 R, int32 G, int32 B, float InnerAngle, float OuterAngle, float Intensity, float Radius, float Temp) {
}

void AFortReplayMovableSpotLightPilotController::ToggleLockReplaySpotLight() {
}

AFortReplayMovableSpotLightPilotController::AFortReplayMovableSpotLightPilotController() {
    bMovingAllLights = false;
    bColorSelectMode = false;
    Hue = 0.0f;
    Saturation = 0.0f;
    Value = 0.0f;
    ColorInputX = 0.0f;
    ColorInputY = 0.0f;
    LightColorSelectComponent = NULL;
    PendingCurrentSpotLight = NULL;
    OriginalControllerRef = NULL;
    OriginalPlayer = NULL;
    TimeAccumulator = 0.0f;
    InitialMaxSpeed = 0.0f;
    InitialAccel = 0.0f;
    InitialDecel = 0.0f;
}
