#pragma once
#include "CoreMinimal.h"
#include "EffectUIParameters.generated.h"

USTRUCT(BlueprintType)
struct FEffectUIParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ParameterKeyValuePairs;
    
    FORTNITEGAME_API FEffectUIParameters();
};
