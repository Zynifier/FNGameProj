#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortItemEntryTaggedFloatData.generated.h"

USTRUCT(BlueprintType)
struct FFortItemEntryTaggedFloatData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, float> TaggedFloatMap;
    
    FORTNITEGAME_API FFortItemEntryTaggedFloatData();
};
