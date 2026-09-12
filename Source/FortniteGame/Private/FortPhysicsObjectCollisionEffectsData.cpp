#include "FortPhysicsObjectCollisionEffectsData.h"

UFortPhysicsObjectCollisionEffectsData::UFortPhysicsObjectCollisionEffectsData() {
    MinRetriggerTime = 1;
    MinRetriggerDistance = 1;
    MinImpulseMagnitude = 1;
    MinMediumImpulseMagnitude = 1;
    MinLargeImpulseMagnitude = 1;
    MaxLargeImpulseMagnitude = 1;
    LinearVelocityThresholdForRolling = 1;
    AngularVelocityThresholdForRolling = 1;
    RollingCosThreshold = 1;
    MinWaterVelocityThreshold = 0.0f;
    MinMediumWaterVelocityThreshold = 0.0f;
    MinLargeWaterVelocityThreshold = 0.0f;
    MaxLargeWaterVelocityThreshold = 0.0f;
    LinearVelocityThreshold = 0.0f;
    AngularVelocityThreshold = 0.0f;
    MovingBufferTime = 0.0f;
}

