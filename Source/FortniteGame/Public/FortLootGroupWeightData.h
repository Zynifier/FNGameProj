#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortLootGroupWeightData.generated.h"

USTRUCT(BlueprintType)
struct FFortLootGroupWeightData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootRowRequiredTag;
    
    FORTNITEGAME_API FFortLootGroupWeightData();
};
