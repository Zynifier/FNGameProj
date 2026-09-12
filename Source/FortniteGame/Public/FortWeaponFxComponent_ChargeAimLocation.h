#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortWeaponFxComponent.h"
#include "FortWeaponFxComponent_ChargeAimLocation.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortWeaponFxComponent_ChargeAimLocation : public UFortWeaponFxComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSmoothingSpeed;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ReplicatedAimOffset;
    
public:
    UFortWeaponFxComponent_ChargeAimLocation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetReplicatedAimOffset(FVector AimOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCachedDamageStartAndAim(FVector& OutDamageStartLocation, FVector& OutAimDirection) const;
    
};
