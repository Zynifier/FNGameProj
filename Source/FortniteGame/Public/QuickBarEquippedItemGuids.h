#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "QuickBarEquippedItemGuids.generated.h"

USTRUCT(BlueprintType)
struct FQuickBarEquippedItemGuids {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid EquippedItemGuids[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumEnabledSlots;
    
public:
    FORTNITEGAME_API FQuickBarEquippedItemGuids();
};
