#pragma once
#include "CoreMinimal.h"
#include "FortBotHealingItems.h"
#include "FortBotHealingItemsList.generated.h"

USTRUCT(BlueprintType)
struct FFortBotHealingItemsList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItems> HealthItems;
    
public:
    FORTNITEGAME_API FFortBotHealingItemsList();
};
