#pragma once
#include "CoreMinimal.h"
#include "NameStringGameplayMessage.generated.h"

USTRUCT(BlueprintType)
struct FNameStringGameplayMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString String;
    
    FORTNITEGAME_API FNameStringGameplayMessage();
};
