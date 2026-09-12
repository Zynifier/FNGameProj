#include "LightOverrideSettings.h"

FLightOverrideSettings::FLightOverrideSettings() {
    OverrideLevel = FLightOverrideLevel::Default;
    Intensity = 0.0f;
    AttenuationRadius = 0.0f;
    CastsShadows = false;
    UseInverseSquaredFalloff = false;
    LightFalloffExponent = 0.0f;
    ShadowResolutionScale = 0.0f;
    ShadowBias = 0.0f;
}
