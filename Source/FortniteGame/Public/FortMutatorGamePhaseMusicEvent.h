#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "FortMutatorMusicEvent.h"
#include "FortMutatorGamePhaseMusicEvent.generated.h"

USTRUCT(BlueprintType)
struct FFortMutatorGamePhaseMusicEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase Phase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorMusicEvent Event;
    
    FORTNITEGAME_API FFortMutatorGamePhaseMusicEvent();
};
