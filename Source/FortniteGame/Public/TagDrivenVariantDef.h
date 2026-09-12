#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "PartVariantDef.h"
#include "TagDrivenVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FTagDrivenVariantDef : public FPartVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredMetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludedMetaTags;
    
    FORTNITEGAME_API FTagDrivenVariantDef();
};
