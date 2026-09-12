#pragma once
#include "CoreMinimal.h"
#include "EFortCustomPartType.h"
#include "VariantSwapMontagePartRequirement.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FVariantSwapMontagePartRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomPartType> PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCustomCharacterPart> Part;
    
    FORTNITEGAME_API FVariantSwapMontagePartRequirement();
};
