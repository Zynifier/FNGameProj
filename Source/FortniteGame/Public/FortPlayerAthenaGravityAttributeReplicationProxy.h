#pragma once
#include "CoreMinimal.h"
#include "FortPlayerAthenaGravityAttributeReplicationProxy.generated.h"

USTRUCT(BlueprintType)
struct FFortPlayerAthenaGravityAttributeReplicationProxy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpHorizontalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpHorizontalVelocity;
    
    FORTNITEGAME_API FFortPlayerAthenaGravityAttributeReplicationProxy();
};
