#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryBase.h"
#include "FortInventory_SaveEntryAttributeBase.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryAttributeBase : public FFortInventory_SaveEntryBase {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortInventory_SaveEntryAttributeBase();
};
