#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ItemAndCount.h"
#include "WeightedAIInventoryLoadout.generated.h"

USTRUCT(BlueprintType)
struct FWeightedAIInventoryLoadout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> Items;
    
    FORTNITEGAME_API FWeightedAIInventoryLoadout();
};
