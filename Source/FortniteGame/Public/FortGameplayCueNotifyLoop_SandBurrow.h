#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayCueNotify_Loop.h"
#include "GameplayEffectTypes.h"
#include "FortGameplayCueNotifyLoop_SandBurrow.generated.h"

class AFortPlayerPawn;
class UFXSystemComponent;
class UFortLayeredAudioComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortGameplayCueNotifyLoop_SandBurrow : public AFortGameplayCueNotify_Loop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLayeredAudioComponent* LayeredAudioComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCueParameters CachedGCParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* FXSpeedLinesComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldShowTrailFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldShowSpeedLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumSpeedToDamageBuildings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumSpeedToShowTrailFX;
    
    AFortGameplayCueNotifyLoop_SandBurrow();
    
};
