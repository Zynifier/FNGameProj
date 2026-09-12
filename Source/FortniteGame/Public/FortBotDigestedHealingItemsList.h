#pragma once
#include "CoreMinimal.h"
#include "FortBotDigestedHealingItems.h"
#include "FortBotDigestedHealingItemsList.generated.h"

USTRUCT(BlueprintType)
struct FFortBotDigestedHealingItemsList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortBotDigestedHealingItems> HealthItems;
    
public:
    FORTNITEGAME_API FFortBotDigestedHealingItemsList();
};
