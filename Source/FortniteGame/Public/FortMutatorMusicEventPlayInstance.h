#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortMutatorMusicEventPlayInstance.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FFortMutatorMusicEventPlayInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* AudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle LoopTimerHandle;
    
    FORTNITEGAME_API FFortMutatorMusicEventPlayInstance();
};
