#pragma once
#include "CoreMinimal.h"
#include "EFortCosmeticSwapRequirementPart.h"
#include "GameplayTagContainer.h"
#include "FortCosmeticSwapRequirement.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticSwapRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCosmeticSwapRequirementPart ItemCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredMetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedMetaTags;
    
    FORTNITEGAME_API FFortCosmeticSwapRequirement();
};
