#pragma once
#include "CoreMinimal.h"
#include "GameplayMessageRouterBool.generated.h"

USTRUCT(BlueprintType)
struct FGameplayMessageRouterBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    FORTNITEGAME_API FGameplayMessageRouterBool();
};
