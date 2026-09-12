#include "ProjectileTrajectorySplineInfo.h"

FProjectileTrajectorySplineInfo::FProjectileTrajectorySplineInfo() {
    Instigator = NULL;
    MaxSpeed = 0.0f;
    Gravity = 0.0f;
    Friction = 0.0f;
    Bounciness = 0.0f;
    TimeStep = 0.0f;
    TraceExtent = 0.0f;
    TraceChannel = ECC_WorldStatic;
    MaxBounces = 0;
    MaxSteps = 0;
    MaxDistanceBetweenSplinePoints = 0.0f;
    InitialDistance = 0.0f;
    LinearDamping = 0.0f;
}
