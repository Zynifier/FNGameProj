#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryBase.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenStored;
    
public:
    FORTNITEGAME_API FFortInventory_SaveEntryBase();
};
