#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ReroutePlayerEventDefinition.generated.h"

USTRUCT(BlueprintType)
struct FReroutePlayerEventDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncomingEventTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IncludeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExcludeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ImmediateOutgoingEventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MergedOutgoingEventTag;
    
    FORTNITEGAME_API FReroutePlayerEventDefinition();
};
