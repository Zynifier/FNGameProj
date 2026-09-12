#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaMutator.h"
#include "FortMutatorGamePhaseMusicEvent.h"
#include "FortMutatorGamePhaseStepMusicEvent.h"
#include "FortMutatorMusicEvent.h"
#include "FortAthenaMutator_MusicEvents.generated.h"

class AFortPlayerStateAthena;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_MusicEvents : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMutatorGamePhaseMusicEvent> GamePhaseEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMutatorGamePhaseStepMusicEvent> GamePhaseStepEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorMusicEvent MatchEndWinEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorMusicEvent MatchEndLoseEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMutatorMusicEvent MatchEndNeutralEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrossfadeTime;
    
public:
    AFortAthenaMutator_MusicEvents();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleWaitingOnPlacement_Local(AFortPlayerStateAthena* Sender, int32 NewPlace);
    
    UFUNCTION(BlueprintCallable)
    void HandleWaitingOnPlacement_Spectate();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep NewStep);
    
};
