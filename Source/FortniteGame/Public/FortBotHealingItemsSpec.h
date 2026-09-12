#pragma once
#include "CoreMinimal.h"
#include "FortBotHealingItemsList.h"
#include "GameplayTagContainer.h"
#include "FortBotHealingItemsSpec.generated.h"

USTRUCT(BlueprintType)
struct FFortBotHealingItemsSpec {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBotHealingItemsList HealthItemsList;
    
public:
    FORTNITEGAME_API FFortBotHealingItemsSpec();
};
