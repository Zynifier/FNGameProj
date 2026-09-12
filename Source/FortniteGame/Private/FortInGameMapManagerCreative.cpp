#include "FortInGameMapManagerCreative.h"

void AFortInGameMapManagerCreative::SetCreativeMapMaterial(UMaterialInterface* NewCreativeMapMaterial) {
}

void AFortInGameMapManagerCreative::OnPlayModeChanged(AFortMinigame* Minigame, bool bIsInPlayMode) {
}

void AFortInGameMapManagerCreative::SetCurrentVolume(AFortVolume* InVolume) {
}

AFortInGameMapManagerCreative::AFortInGameMapManagerCreative() {
    HeatmapEnabledMapMaterial = NULL;
    HeatmapDisabledMapMaterial = NULL;
    CreativeMapMaterial = NULL;
}

