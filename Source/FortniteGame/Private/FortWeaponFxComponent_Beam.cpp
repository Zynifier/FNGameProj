#include "FortWeaponFxComponent_Beam.h"

UFortWeaponFxComponent_Beam::UFortWeaponFxComponent_Beam() {
    bAttachBeamToMuzzle = false;
    bUseBeamSmoothing = false;
    bSpawnImpactFXAtInterpedBeamEndpoints = false;
    ImpactFxPerSecond = 0.0f;
}
