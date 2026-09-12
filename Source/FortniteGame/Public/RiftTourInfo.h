#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RiftTourInfo.generated.h"

USTRUCT(BlueprintType)
struct FRiftTourInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotId;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime StartsAtUTC;
    
    FORTNITEGAME_API FRiftTourInfo();
};
