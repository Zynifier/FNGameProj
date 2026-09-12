#pragma once
#include "CoreMinimal.h"
#include "GlobalCurrencyTransactionData.h"
#include "GlobalCurrencyTrackedData.generated.h"

USTRUCT(BlueprintType)
struct FGlobalCurrencyTrackedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalCurrencyEarnedInMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PhaseStartCurrencyBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 PhaseEndCurrencyBalance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TArray<FGlobalCurrencyTransactionData> TransactionData;
    
    FORTNITEGAME_API FGlobalCurrencyTrackedData();
};
