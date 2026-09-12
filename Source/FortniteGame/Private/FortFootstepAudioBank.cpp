#include "FortFootstepAudioBank.h"

void UFortFootstepAudioBank::GetSurfaceInfo(FFortFootstepSurfaceInfo& OutInfo, TEnumAsByte<EFortFootstepSurfaceType::Type> InSurfaceType, bool bUse1PFootsteps) const {
}

USoundBase* UFortFootstepAudioBank::GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepSurfaceType::Type> SurfaceType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition) {
    return NULL;
}

float UFortFootstepAudioBank::GetFootstepVolumeMultiplier(bool bIsLocal, bool bApplyTeammateVolume, TEnumAsByte<EFortFootstepAudioType::Type> StepType) {
    return 0.0f;
}

USoundAttenuation* UFortFootstepAudioBank::GetAttenuationAsset(bool bIsLocal, TEnumAsByte<EFortFootstepAudioType::Type> StepType, TEnumAsByte<EFortFootstepPosition::Type> StepPosition) {
    return NULL;
}

UFortFootstepAudioBank::UFortFootstepAudioBank() {
    TeammateVolumeMultiplier = 1;
    MaxFootstepDistance = 1;
    VerticalPitchMaxBelow = 1;
    VerticalPitchMaxAbove = 1;
    VerticalPitchTileRange = 1;
    VersionNumber = 0;
}

