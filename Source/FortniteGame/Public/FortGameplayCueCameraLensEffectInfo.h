#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAOEInfo.h"
#include "Templates/SubclassOf.h"
#include "FortGameplayCueCameraLensEffectInfo.generated.h"

class AEmitterCameraLensEffectBase;

class AActor;

USTRUCT(BlueprintType)
struct FFortGameplayCueCameraLensEffectInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> CameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGameplayCueAOEInfo Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysPlayOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCancelOnRemove;
    
    FORTNITEGAME_API FFortGameplayCueCameraLensEffectInfo();
};

