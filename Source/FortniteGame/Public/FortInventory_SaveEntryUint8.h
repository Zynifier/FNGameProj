#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_SaveEntryUint8.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryUint8 : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Value;
    
    FORTNITEGAME_API FFortInventory_SaveEntryUint8();
};
