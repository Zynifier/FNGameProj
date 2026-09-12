#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantBackedByArray.h"
#include "TagDrivenVariantDef.h"
#include "FortCosmeticLoadoutTagDrivenVariant.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCosmeticLoadoutTagDrivenVariant : public UFortCosmeticVariantBackedByArray {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTagDrivenVariantDef> Variants;
    
public:
    UFortCosmeticLoadoutTagDrivenVariant();
    
};
