#include "HUDNavArrow.h"

void AHUDNavArrow::InitializeTrackerComponent(UDestinationTrackerPawnComponent* InDestinationComponent) {
}

void AHUDNavArrow::SetApproachRadius(const float InApproachRadius) {
}

void AHUDNavArrow::SetDepartRadius(const float InDepartRadius) {
}

AHUDNavArrow::AHUDNavArrow() {
    ScaleCurve = NULL;
    ArrowComponent = NULL;
}
