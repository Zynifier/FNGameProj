#pragma once
#include "CoreMinimal.h"
#include "SynchronizedTeleportFadeOutReplicationData.generated.h"

USTRUCT(BlueprintType)
struct FSynchronizedTeleportFadeOutReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HUDReasonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFadeAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ReplicationIndex;
    
    FORTNITEGAME_API FSynchronizedTeleportFadeOutReplicationData();
};
