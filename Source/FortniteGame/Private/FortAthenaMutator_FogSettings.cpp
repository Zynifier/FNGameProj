#include "FortAthenaMutator_FogSettings.h"

void AFortAthenaMutator_FogSettings::SetFogColorIndexOverride(FLinearColor NewValue) {
}

void AFortAthenaMutator_FogSettings::SetFogDensityOverride(EAthenaFogDensityOverride NewValue) {
}

void AFortAthenaMutator_FogSettings::UnsetFogOverrides() {
}

FLinearColor AFortAthenaMutator_FogSettings::GetFogColorOverride() const {
    return FLinearColor{};
}

EAthenaFogDensityOverride AFortAthenaMutator_FogSettings::GetFogDensityOverride() const {
    return EAthenaFogDensityOverride::NoOverride;
}

AFortAthenaMutator_FogSettings::AFortAthenaMutator_FogSettings() {
    FogDensityOverride = EAthenaFogDensityOverride::NoOverride;
}
