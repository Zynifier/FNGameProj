#pragma once
#include "CoreMinimal.h"
#include "UserOptionValueDescription.generated.h"

USTRUCT(BlueprintType)
struct FUserOptionValueDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FORTNITEGAME_API FUserOptionValueDescription();
};
