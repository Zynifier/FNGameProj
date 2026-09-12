#pragma once
#include "CoreMinimal.h"
#include "ApplyWrapVariant.h"
#include "BaseVariantDef.h"
#include "CosmeticMetaTagContainer.h"
#include "GameplayTagContainer.h"
#include "ApplyWrapVariantDef.generated.h"

USTRUCT(BlueprintType)
struct FApplyWrapVariantDef : public FBaseVariantDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyWrapVariant InnerDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCosmeticMetaTagContainer MetaTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FilterOutItemsWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClear;
    
    FORTNITEGAME_API FApplyWrapVariantDef();
};
