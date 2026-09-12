#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortPhysicsSimSize.h"
#include "FortPhysicsSimulationLibrary.generated.h"

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class UFortPhysicsSimulationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortPhysicsSimulationLibrary();
    
    UFUNCTION(BlueprintCallable)
    static void ActivateSimulation(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void AddPhysicsAngularImpulse(AActor* PhysicsObject, FVector AngularImpulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    static void AddPhysicsForce(AActor* PhysicsObject, FVector Force, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    static void AddPhysicsImpulse(AActor* PhysicsObject, FVector Impulse, FName BoneName, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    static void AddPhysicsImpulseAtLocation(AActor* PhysicsObject, FVector Impulse, FVector Location, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void AddPhysicsTorque(AActor* PhysicsObject, FVector Torque, FName BoneName, bool bAccelChange);
    
    UFUNCTION(BlueprintCallable)
    static bool CanActorSimulatePhysics(const AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void ClearPhysicsReplicationErrorCorrection(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeTorqueForTargetRotation(AActor* PhysicsObject, const FRotator& TargetRotation, float Stiffness, float Damping, float MaxAccel);
    
    UFUNCTION(BlueprintCallable)
    static void DeactivateSimulation(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPhysicsObjectActiveInSimulation(const AActor* PhysicsObject);
    
    UFUNCTION()
    static void OverridePhysicsReplicationErrorCorrection(AActor* PhysicsObject, FRigidBodyErrorCorrection NewErrorCorrection);
    
    UFUNCTION(BlueprintCallable)
    static void PutToSleep(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetPhysicsAngularVelocity(AActor* PhysicsObject, FVector NewAngVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void SetPhysicsLinearVelocity(AActor* PhysicsObject, FVector NewVel, bool bAddToCurrent, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void WakeUp(AActor* PhysicsObject);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPhysicsObjectMeetSizeRequirement(const AActor* PhysicsObject, const EFortPhysicsSimSize SizeRequirement);
    
    UFUNCTION(BlueprintCallable)
    static EFortPhysicsSimSize GetPhysicsObjectSimSize(const AActor* PhysicsObject);
    
};
