#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortMutatorMusicEvent.h"
#include "FortMutatorGamePhaseStepMusicEvent.generated.h"

USTRUCT(BlueprintType)
struct FFortMutatorGamePhaseStepMusicEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhaseStep Step;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorMusicEvent Event;
    
    FORTNITEGAME_API FFortMutatorGamePhaseStepMusicEvent();
};
