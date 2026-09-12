#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortInventory_MinigameStats.h"
#include "FortInventory_SaveEntryCheckpoints.h"
#include "FortInventory_SaveEntryFloat.h"
#include "FortInventory_SaveEntryItems.h"
#include "FortInventory_SaveEntryTransform.h"
#include "FortInventory_SaveEntryUint8.h"
#include "FortInventory_SaveEntry.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime MostRecentUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryFloat Health;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryFloat Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryUint8 ClassSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryUint8 TeamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryItems Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryItems Resources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryItems Gold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryCheckpoints Checkpoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_SaveEntryTransform PlayerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortInventory_MinigameStats MinigameStats;
    
    FORTNITEGAME_API FFortInventory_SaveEntry();
};
