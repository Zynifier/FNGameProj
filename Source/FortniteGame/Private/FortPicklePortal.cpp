#include "FortPicklePortal.h"

AFortPicklePortal::AFortPicklePortal() {
    RangeCollisionComponent = NULL;
    PortalParticleSystem = NULL;
    SMPortalInner = NULL;
    SMPortalOuter = NULL;
    SpotLightComponent = NULL;
    AudioComponent = NULL;
    EffectPreset = NULL;
    MaterialParameterCollection = NULL;
    OpenCurve = NULL;
    OpenInterpSpeed = 0.0f;
    MaxDistance = 0.0f;
    NearDistance = 0.0f;
    FadeRadius = 0.0f;
}
