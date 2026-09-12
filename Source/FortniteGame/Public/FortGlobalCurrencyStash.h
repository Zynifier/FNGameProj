#pragma once
#include "CoreMinimal.h"
#include "FortGlobalCurrencyStash.generated.h"

USTRUCT(BlueprintType)
struct FFortGlobalCurrencyStash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    FORTNITEGAME_API FFortGlobalCurrencyStash();
};
