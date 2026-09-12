#pragma once
#include "CoreMinimal.h"
#include "TeamPerformanceMessageReplication.generated.h"

USTRUCT(BlueprintType)
struct FTeamPerformanceMessageReplication {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MessageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReplicationTriggerIndex;
    
    FORTNITEGAME_API FTeamPerformanceMessageReplication();
};
