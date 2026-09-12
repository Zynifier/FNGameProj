#include "PhysicsObjectMovementStateData.h"

FPhysicsObjectMovementStateData::FPhysicsObjectMovementStateData() {
    MovementState = EFortPhysicsObjectMovementState::None;
    PreviousMovementState = EFortPhysicsObjectMovementState::None;
    TimeMovementStateUpdated = 0.0f;
    MovingStopTime = 0.0f;
}
