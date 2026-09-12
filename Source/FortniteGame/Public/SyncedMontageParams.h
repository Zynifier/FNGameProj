#pragma once
#include "CoreMinimal.h"
#include "EFortCustomPartType.h"
#include "EMontageSyncTargetType.h"
#include "SyncedMontageParams.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSyncedMontageParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SyncedMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMontageSyncTargetType MontageTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomPartType> PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageStopBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncMontage;
    
    FORTNITEGAME_API FSyncedMontageParams();
};
