#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAttachableProjectileBase.h"
#include "FortTowHookAttachableProjectile.generated.h"

class AFortPhysicsTowHook;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortTowHookAttachableProjectile : public AFortAttachableProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RopeAttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CollisionProfileNameOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AFortPhysicsTowHook* OwningTowHook;
    
public:
    AFortTowHookAttachableProjectile();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void DestroyProjectile();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRopeAttachLocation() const;
    
};
