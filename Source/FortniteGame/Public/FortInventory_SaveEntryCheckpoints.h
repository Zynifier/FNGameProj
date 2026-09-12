#pragma once
#include "CoreMinimal.h"
#include "FortInventory_CheckpointEntry.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_SaveEntryCheckpoints.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryCheckpoints : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortInventory_CheckpointEntry> CheckpointsList;
    
    FORTNITEGAME_API FFortInventory_SaveEntryCheckpoints();
};
