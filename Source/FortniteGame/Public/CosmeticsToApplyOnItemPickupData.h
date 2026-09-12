#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "CosmeticsToApplyOnItemPickupData.generated.h"

class UAthenaPickaxeItemDefinition;
class UFortGadgetItemDefinition;

USTRUCT(BlueprintType)
struct FCosmeticsToApplyOnItemPickupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGadgetItemDefinition* GadgetItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPickaxeItemDefinition* PickaxeItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag GameplayCueTag;
    
    FORTNITEGAME_API FCosmeticsToApplyOnItemPickupData();
};
