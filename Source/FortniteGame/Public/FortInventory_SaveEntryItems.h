#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortItemEntry.h"
#include "FortInventory_SaveEntryItems.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryItems : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> FortItemEntries;
    
    FORTNITEGAME_API FFortInventory_SaveEntryItems();
};
