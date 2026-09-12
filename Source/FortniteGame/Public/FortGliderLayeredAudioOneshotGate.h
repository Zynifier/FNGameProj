#pragma once
#include "CoreMinimal.h"
#include "ELayeredAudioTriggerDir.h"
#include "FortGliderLayeredAudioOneshotGate.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortGliderLayeredAudioOneshotGate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> SoundRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GateValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayeredAudioTriggerDir Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FadeWhenOutsideGate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeSinceTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InterruptFadeTime;
    
    FORTNITEGAME_API FFortGliderLayeredAudioOneshotGate();
};
