#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ReroutePlayerEventQueueEntry.generated.h"

USTRUCT(BlueprintType)
struct FReroutePlayerEventQueueEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEventData GameplayEventData;
    
    FORTNITEGAME_API FReroutePlayerEventQueueEntry();
};
