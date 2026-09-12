#pragma once
#include "CoreMinimal.h"
#include "PredictionReplicationProxy_SP.generated.h"

USTRUCT(BlueprintType)
struct FPredictionReplicationProxy_SP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerFrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FORTNITEGAME_API FPredictionReplicationProxy_SP();
};
