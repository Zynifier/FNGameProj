#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortVehicleFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortVehicleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortVehicleFunctionLibrary();
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeAngularDrag(const FVector& BodyUp, const FVector& BodyRight, const FVector& BodyForward, const FVector& AngularVelocity, const float PitchAngularDrag, const float YawAngularDrag, const float RollAngularDrag, const float DragMultiplier);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeLinearAccel(const FVector& CurrentLinearVelocity, const FVector& TargetDirection, const float MaxLinearVelocity, const float AccelForce);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeLinearDrag(const FVector& LinearVelocity, const float MaxDragSpeed, const float FirstOrderDragCoef, const float SecondOrderDragCoef);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeSpringDampedAngularAccel(const FVector& Target, const FVector& Current, const FVector& AngVelocityWorld, const float Stiffness, const float Damping, const float MaxAccel);
    
    UFUNCTION(BlueprintCallable)
    static FVector ComputeTurningAngularAccel(const FVector& TargetForward, const FVector& BodyForward, const FVector& BodyRight, const float YawForce);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetDesiredLateralMoveDirectionFromInput(const FVector& DriverCameraForward, const float ForwardAlpha, const float RightAlpha);
    
};
