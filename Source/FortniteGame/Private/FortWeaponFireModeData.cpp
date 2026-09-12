#include "FortWeaponFireModeData.h"

UFortWeaponFireModeData::UFortWeaponFireModeData() {
    FireModeDataDelay = 1;
    TracerTemplate = NULL;
    bOverrideImpactSurfaceEffects = false;
    BeamParticleSystem = NULL;
    BeamNiagaraSystemAsset = NULL;
    bOverrideImpactSurfaceSounds = false;
    MuzzleParticleSystem = NULL;
    MuzzleNiagaraSystem = NULL;
    PrimaryFireSound1P = NULL;
    bOverridePrimaryFireSoundArray = false;
    PrimaryFireSound[0] = NULL;
    PrimaryFireSound[1] = NULL;
    PrimaryFireSound[2] = NULL;
}

