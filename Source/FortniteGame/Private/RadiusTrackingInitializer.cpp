#include "RadiusTrackingInitializer.h"

FRadiusTrackingInitializer::FRadiusTrackingInitializer() {
    MaxCenterOffset = 0.0f;
    MinimumRadius = 0.0f;
    MaximumRadius = 0.0f;
    CircleDrawingMaterial = NULL;
    TimeBetweenUpdatesInSeconds = 0.0f;
    RadiusAmountToShrinkEachUpdate = 0.0f;
    GroupingType = ERadiusTrackingGroupingType::Global;
}
