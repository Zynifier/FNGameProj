#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "McpLootEntry.h"
#include "BattlePassOfferPurchaseRecord.generated.h"

USTRUCT(BlueprintType)
struct FBattlePassOfferPurchaseRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime PurchaseDate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMcpLootEntry> LootResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId CurrencyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCurrencyPaid;
    
    FORTNITEGAME_API FBattlePassOfferPurchaseRecord();
};
