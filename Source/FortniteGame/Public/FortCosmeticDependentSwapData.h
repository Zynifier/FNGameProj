#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortAppliedSwapItemAndVariantState.h"
#include "FortCosmeticSwapRequirement.h"
#include "FortSwapItemAndVariantData.h"
#include "FortCosmeticDependentSwapData.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticDependentSwapData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticSwapRequirement> SwapRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortSwapItemAndVariantData> SwapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAppliedSwapItemAndVariantState ForcedSwapState;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SwapId;
    
    FORTNITEGAME_API FFortCosmeticDependentSwapData();
};
