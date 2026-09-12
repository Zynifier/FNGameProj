#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TagModificationRequest.generated.h"

USTRUCT(BlueprintType)
struct FTagModificationRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FiniteLifetime;
    
    FORTNITEGAME_API FTagModificationRequest();
};
