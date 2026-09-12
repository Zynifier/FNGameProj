#include "FortInteriorAudioSettings.h"

UFortInteriorAudioSettings::UFortInteriorAudioSettings() {
    HorizontalScanDistance = 0;
    VerticalScanDistance = 0;
    TraceCollisionChannel = ECC_WorldStatic;
    TotalBuildingCountRequiredForInterior = 0;
    TotalNonPartialBuildingCountRequiredForInterior = 0;
    InteriorSoundMix = NULL;
    PartialInteriorSoundMix = NULL;
    AmbientEntryPriority = 0;
    SourceBusAsset = NULL;
    SourceBusFadeInTime = 1;
    SourceBusFadeOutTime = 1;
    SourceBusCrossfadeTime = 1;
    TotalBuildingCountRequiredForPartialExterior = 0;
    TotalCeilingCountRequiredAlongHorizontalScan = 0;
    HorizontalLineTraceDistance = 0;
    VerticalLineTraceDistance = 0;
    PartialExteriorSoundMix = NULL;
}

