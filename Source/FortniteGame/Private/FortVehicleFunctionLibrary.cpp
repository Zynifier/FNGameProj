#include "FortVehicleFunctionLibrary.h"

FVector UFortVehicleFunctionLibrary::ComputeAngularDrag(const FVector& BodyUp, const FVector& BodyRight, const FVector& BodyForward, const FVector& AngularVelocity, const float PitchAngularDrag, const float YawAngularDrag, const float RollAngularDrag, const float DragMultiplier) {
    return FVector{};
}

FVector UFortVehicleFunctionLibrary::ComputeLinearAccel(const FVector& CurrentLinearVelocity, const FVector& TargetDirection, const float MaxLinearVelocity, const float AccelForce) {
    return FVector{};
}

FVector UFortVehicleFunctionLibrary::ComputeLinearDrag(const FVector& LinearVelocity, const float MaxDragSpeed, const float FirstOrderDragCoef, const float SecondOrderDragCoef) {
    return FVector{};
}

FVector UFortVehicleFunctionLibrary::ComputeSpringDampedAngularAccel(const FVector& Target, const FVector& Current, const FVector& AngVelocityWorld, const float Stiffness, const float Damping, const float MaxAccel) {
    return FVector{};
}

FVector UFortVehicleFunctionLibrary::ComputeTurningAngularAccel(const FVector& TargetForward, const FVector& BodyForward, const FVector& BodyRight, const float YawForce) {
    return FVector{};
}

FVector UFortVehicleFunctionLibrary::GetDesiredLateralMoveDirectionFromInput(const FVector& DriverCameraForward, const float ForwardAlpha, const float RightAlpha) {
    return FVector{};
}

UFortVehicleFunctionLibrary::UFortVehicleFunctionLibrary() {
}
