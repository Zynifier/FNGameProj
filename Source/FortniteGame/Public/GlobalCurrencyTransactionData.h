#pragma once
#include "CoreMinimal.h"
#include "GlobalCurrencyTransactionData.generated.h"

USTRUCT(BlueprintType)
struct FGlobalCurrencyTransactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    float ServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FString SourceType;
    
    FORTNITEGAME_API FGlobalCurrencyTransactionData();
};
