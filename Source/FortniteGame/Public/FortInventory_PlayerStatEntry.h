#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FortInventory_PlayerStatEntry.generated.h"

class UFortMinigameStatFilter;

USTRUCT(BlueprintType)
struct FFortInventory_PlayerStatEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMinigameStatFilter> StatFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FFortInventory_PlayerStatEntry();
};
