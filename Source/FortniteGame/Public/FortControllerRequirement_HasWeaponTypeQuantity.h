#pragma once
#include "CoreMinimal.h"
#include "EFortWeaponType.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_HasWeaponTypeQuantity.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasWeaponTypeQuantity : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig ThresholdTestConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortWeaponType WeaponTypeFilter;
    
public:
    UFortControllerRequirement_HasWeaponTypeQuantity();
    
};
