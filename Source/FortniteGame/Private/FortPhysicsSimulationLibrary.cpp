#include "FortPhysicsSimulationLibrary.h"

void UFortPhysicsSimulationLibrary::ActivateSimulation(AActor* PhysicsObject) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsAngularImpulse(AActor* PhysicsObject, FVector AngularImpulse, FName BoneName, bool bVelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsForce(AActor* PhysicsObject, FVector Force, FName BoneName, bool bAccelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsImpulse(AActor* PhysicsObject, FVector Impulse, FName BoneName, bool bVelChange) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsImpulseAtLocation(AActor* PhysicsObject, FVector Impulse, FVector Location, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::AddPhysicsTorque(AActor* PhysicsObject, FVector Torque, FName BoneName, bool bAccelChange) {
}

bool UFortPhysicsSimulationLibrary::CanActorSimulatePhysics(const AActor* Actor) {
    return false;
}

void UFortPhysicsSimulationLibrary::ClearPhysicsReplicationErrorCorrection(AActor* PhysicsObject) {
}

FVector UFortPhysicsSimulationLibrary::ComputeTorqueForTargetRotation(AActor* PhysicsObject, const FRotator& TargetRotation, float Stiffness, float Damping, float MaxAccel) {
    return FVector{};
}

void UFortPhysicsSimulationLibrary::DeactivateSimulation(AActor* PhysicsObject) {
}

bool UFortPhysicsSimulationLibrary::IsPhysicsObjectActiveInSimulation(const AActor* PhysicsObject) {
    return false;
}

void UFortPhysicsSimulationLibrary::OverridePhysicsReplicationErrorCorrection(AActor* PhysicsObject, FRigidBodyErrorCorrection NewErrorCorrection) {
}

void UFortPhysicsSimulationLibrary::PutToSleep(AActor* PhysicsObject) {
}

void UFortPhysicsSimulationLibrary::SetPhysicsAngularVelocity(AActor* PhysicsObject, FVector NewAngVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::SetPhysicsLinearVelocity(AActor* PhysicsObject, FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsSimulationLibrary::WakeUp(AActor* PhysicsObject) {
}

bool UFortPhysicsSimulationLibrary::DoesPhysicsObjectMeetSizeRequirement(const AActor* PhysicsObject, const EFortPhysicsSimSize SizeRequirement) {
    return false;
}

EFortPhysicsSimSize UFortPhysicsSimulationLibrary::GetPhysicsObjectSimSize(const AActor* PhysicsObject) {
    return EFortPhysicsSimSize::Small;
}

UFortPhysicsSimulationLibrary::UFortPhysicsSimulationLibrary() {
}
