#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "OnWatchedHitPointsChangedDelegate.h"
#include "FortAsyncAction_CosmeticHitPointsStateWatcher.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAsyncAction_CosmeticHitPointsStateWatcher : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWatchedHitPointsChanged OnHitPointsChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* MyPlayerState;
    
public:
    UFortAsyncAction_CosmeticHitPointsStateWatcher();
    
    UFUNCTION(BlueprintCallable)
    static UFortAsyncAction_CosmeticHitPointsStateWatcher* WatchPlayerHealth(AFortPlayerStateAthena* PlayerState);
    
};
