#pragma once
#include "CoreMinimal.h"
#include "FortBotDigestedHealingItemsList.h"
#include "GameplayTagContainer.h"
#include "FortBotDigestedHealingItemsSpec.generated.h"

USTRUCT(BlueprintType)
struct FFortBotDigestedHealingItemsSpec {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortBotDigestedHealingItemsList HealthItemsList;
    
public:
    FORTNITEGAME_API FFortBotDigestedHealingItemsSpec();
};
