#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_VoiceBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_Voice.generated.h"

class UFortAIComponent_Voice;
class UFortTaggedSoundBank;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_Voice : public UFortAthenaAISpawnerDataComponent_VoiceBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAIComponent_Voice> VoiceComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTaggedSoundBank* SoundBank;
    
public:
    UFortAthenaAISpawnerDataComponent_Voice();
    
};
