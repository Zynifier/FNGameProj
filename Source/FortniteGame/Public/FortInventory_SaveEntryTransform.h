#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortInventory_SaveEntryAttributeBase.h"
#include "FortInventory_SaveEntryTransform.generated.h"

USTRUCT(BlueprintType)
struct FFortInventory_SaveEntryTransform : public FFortInventory_SaveEntryAttributeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat RotationValue;
    
    FORTNITEGAME_API FFortInventory_SaveEntryTransform();
};
