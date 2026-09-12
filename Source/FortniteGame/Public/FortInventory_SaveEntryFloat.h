#pragma once
#include "CoreMinimal.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_SaveEntryFloat.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryFloat : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FORTNITEGAME_API FFortInventory_SaveEntryFloat();
};
