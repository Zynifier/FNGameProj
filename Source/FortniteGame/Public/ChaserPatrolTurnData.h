#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ChaserPatrolTurnData.generated.h"

USTRUCT(BlueprintType)
struct FChaserPatrolTurnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPatrolTurning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PatrolTurnStartDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PatrolTurnEndDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PatrolMoveSpeed;
    
    FORTNITEGAME_API FChaserPatrolTurnData();
};
