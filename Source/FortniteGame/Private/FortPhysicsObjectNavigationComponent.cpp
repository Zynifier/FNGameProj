#include "FortPhysicsObjectNavigationComponent.h"

void UFortPhysicsObjectNavigationComponent::OnSleepStateChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake) {
}

UFortPhysicsObjectNavigationComponent::UFortPhysicsObjectNavigationComponent() {
    LowSpeedSquareThreshold = 0.0f;
    LowSpeedSquareDistanceThreshold = 0.0f;
    LowSpeedRotationThreshold = 0.0f;
    LowSpeedScaleThreshold = 0.0f;
    ComponentAffectingNavMesh = NULL;
    PhysicsObjectComponent = NULL;
}
