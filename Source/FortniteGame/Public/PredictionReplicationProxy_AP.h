#pragma once
#include "CoreMinimal.h"
#include "PredictionReplicationProxy_AP.generated.h"

USTRUCT(BlueprintType)
struct FPredictionReplicationProxy_AP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClientFrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ServerFrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    FORTNITEGAME_API FPredictionReplicationProxy_AP();
};
