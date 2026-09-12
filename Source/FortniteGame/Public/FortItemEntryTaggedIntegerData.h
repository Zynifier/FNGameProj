#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortItemEntryTaggedIntegerData.generated.h"

USTRUCT(BlueprintType)
struct FFortItemEntryTaggedIntegerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TaggedIntegerMap;
    
    FORTNITEGAME_API FFortItemEntryTaggedIntegerData();
};
