#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "ApplyWrapVariantDef.h"
#include "FortCosmeticVariantApplyWrap.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCosmeticVariantApplyWrap : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplyWrapVariantDef WrapVariant;
    
public:
    UFortCosmeticVariantApplyWrap();
    
};
