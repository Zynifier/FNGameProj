#pragma once
#include "CoreMinimal.h"
#include "JsonObjectWrapper.h"
#include "FortInventorySnapshot.generated.h"

USTRUCT(BlueprintType)
struct FFortInventorySnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJsonObjectWrapper Stash;
    
    FORTNITEGAME_API FFortInventorySnapshot();
};
