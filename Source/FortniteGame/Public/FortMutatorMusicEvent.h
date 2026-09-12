#pragma once
#include "CoreMinimal.h"
#include "FortMutatorMusicEvent.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FFortMutatorMusicEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    FORTNITEGAME_API FFortMutatorMusicEvent();
};
