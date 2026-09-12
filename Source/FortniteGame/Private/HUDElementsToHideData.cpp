#include "HUDElementsToHideData.h"

FHUDElementsToHideData::FHUDElementsToHideData() {
    StartHidingGamePhase = EAthenaGamePhase::None;
    StartHidingSafeZonePhase = 0;
    StopHidingGamePhase = EAthenaGamePhase::None;
    StopHidingSafeZonePhase = 0;
}
