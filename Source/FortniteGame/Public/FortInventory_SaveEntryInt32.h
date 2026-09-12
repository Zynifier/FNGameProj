#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_SaveEntryInt32.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryInt32 : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    FORTNITEGAME_API FFortInventory_SaveEntryInt32();
};
