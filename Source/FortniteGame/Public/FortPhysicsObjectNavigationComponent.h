#pragma once
#include "CoreMinimal.h"
#include "NavModifierComponent.h"
#include "FortPhysicsObjectNavigationComponent.generated.h"

class UFortPhysicsObjectComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPhysicsObjectNavigationComponent : public UNavModifierComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpeedSquareThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpeedSquareDistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpeedRotationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowSpeedScaleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* ComponentAffectingNavMesh;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortPhysicsObjectComponent* PhysicsObjectComponent;
    
public:
    UFortPhysicsObjectNavigationComponent();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSleepStateChanged(UPrimitiveComponent* SimulatingComponent, bool bIsAwake);
    
};
