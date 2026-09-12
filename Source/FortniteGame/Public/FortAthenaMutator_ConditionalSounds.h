#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_ConditionalSounds.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_ConditionalSounds : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayDeathSoundEffects: 1;
    
public:
    AFortAthenaMutator_ConditionalSounds();
    
};
