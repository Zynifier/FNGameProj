#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueNotify_Loop.h"
#include "GameplayEffectTypes.h"
#include "FortGameplayCueNotifyLoop_ZiplineTravel.generated.h"

class AFortPlayerPawn;
class UFortLayeredAudioComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotifyLoop_ZiplineTravel : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLayeredAudioComponent* LayeredAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters CachedGCParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    AFortGameplayCueNotifyLoop_ZiplineTravel();
    
};
