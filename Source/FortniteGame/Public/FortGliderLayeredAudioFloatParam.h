#pragma once
#include "CoreMinimal.h"
#include "ELayeredAudioInterpolationType.h"
#include "FortGliderLayeredAudioOneshotGate.h"
#include "FortGliderLayeredAudioFloatParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FFortGliderLayeredAudioFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELayeredAudioInterpolationType InterpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortGliderLayeredAudioOneshotGate> Oneshots;
    
    FORTNITEGAME_API FFortGliderLayeredAudioFloatParam();
};
