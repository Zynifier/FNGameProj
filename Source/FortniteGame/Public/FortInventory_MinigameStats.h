#pragma once
#include "CoreMinimal.h"
#include "FortInventory_PlayerStatEntry.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_MinigameStats.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_MinigameStats : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInventory_PlayerStatEntry> PlayerStatsList;
    
    FORTNITEGAME_API FFortInventory_MinigameStats();
};
