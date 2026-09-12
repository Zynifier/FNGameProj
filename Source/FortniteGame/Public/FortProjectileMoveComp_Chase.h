#pragma once
#include "CoreMinimal.h"
#include "FortProjectileMovementComponent.h"
#include "OnChaseTargetReachedDelegateDelegate.h"
#include "ChaseExternalForce.h"
#include "FortProjectileMoveComp_Chase.generated.h"

class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortProjectileMoveComp_Chase : public UFortProjectileMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChaseTargetReachedDelegate OnChaseTargetReached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* InternalChaseTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName ChaseTargetSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ChaseTargetReachedDistance;
    
public:
    UFortProjectileMoveComp_Chase();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClearChaseTarget();
    
    UFUNCTION(BlueprintCallable)
    void ClearExternalForces();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void SetChaseTarget(USceneComponent* InChaseTarget, FName InSocketName, float InTargetReachedDistance, bool bInHomeOnChaseTarget);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddExternalForce(const FChaseExternalForce& ExternalForce);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastAddExternalForce(const FChaseExternalForce& ExternalForce);
    
};
