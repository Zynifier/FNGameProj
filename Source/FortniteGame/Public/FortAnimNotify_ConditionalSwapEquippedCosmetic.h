#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "FortCosmeticDependentSwapData.h"
#include "FortAnimNotify_ConditionalSwapEquippedCosmetic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimNotify_ConditionalSwapEquippedCosmetic : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckBaseLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCosmeticDependentSwapData> Swaps;
    
    UFortAnimNotify_ConditionalSwapEquippedCosmetic();
    
};
