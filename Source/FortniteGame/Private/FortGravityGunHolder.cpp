#include "FortGravityGunHolder.h"

void AFortGravityGunHolder::CalculateLaunchVelocity(const bool bDropped, float& OutThrowSpeed, FVector& OutVelocity) {
}

void AFortGravityGunHolder::HandleThrowHeldObject() {
}

void AFortGravityGunHolder::HeldObjectHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AFortGravityGunHolder::SetHeldObject(AActor* InHeldObject) {
}

void AFortGravityGunHolder::UpdateAudio_Implementation(const float DeltaSeconds) {
}

AActor* AFortGravityGunHolder::AttemptCloneActorToHold(AActor* InActor) const {
    return NULL;
}

AFortGravityGunHolder::AFortGravityGunHolder() {
    OwningPlayer = NULL;
    HeldObject = NULL;
    HeldObjectProjectileClass = NULL;
    CachedLayeredAudioComponent = NULL;
    PivotComponent = NULL;
    RingPivotComponent = NULL;
    RingSMComponent = NULL;
    Ring1SMComponent = NULL;
    Ring2SMComponent = NULL;
    Ring3SMComponent = NULL;
    bAimingDownSights = false;
    MaxAxisLength = 0.0f;
    CurrentRingSizeInUnits = 0.0f;
    TimeWhenStartedHolding = 0.0f;
    LaunchSpeedMultiplier = 0.0f;
    VehicleLaunchSpeedMultiplier = 0.0f;
    bUseCameraRightAsReference = false;
    bAllowRotation = false;
    TrajectorIndicator = NULL;
    TrajectorySplineTraceChannel = ECC_WorldStatic;
    CachedHoldForwardDistance = 0.0f;
    CachedHoldUpDistance = 0.0f;
    CachedHoldUpDistanceWhileADS = 0.0f;
    CachedTargetRotationTorqueDeltaTimeScalar = 0.0f;
    CurrentState = EGravityGunHolderState::Invalid;
    ObjectTypeHeld = EGravityGunHolderObjectType::Invalid;
    CurrentRotationAxisIndex = EGravityGunHolderRotationAxis::XZ;
}
