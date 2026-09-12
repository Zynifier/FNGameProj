#pragma once
#include "CoreMinimal.h"
#include "EStashInventoryServiceSyncState.h"
#include "FortGlobalCurrencyStash.h"
#include "RepGlobalCurrencyStash.generated.h"

USTRUCT(BlueprintType)
struct FRepGlobalCurrencyStash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStashInventoryServiceSyncState SyncState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGlobalCurrencyStash Currency;
    
    FORTNITEGAME_API FRepGlobalCurrencyStash();
};
