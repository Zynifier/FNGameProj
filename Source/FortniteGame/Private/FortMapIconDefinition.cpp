#include "FortMapIconDefinition.h"

FFortMapIconDefinition::FFortMapIconDefinition() {
    MapIcon = NULL;
    bUseIconSize = false;
    MinimapIndicatorClass = NULL;
    bIsVisibleOnMiniMap = false;
    bIsVisibleOnMap = false;
    bStartVisible = false;
    bIncludeZOffsetInDistanceChecks = false;
    Priority = 0;
}
