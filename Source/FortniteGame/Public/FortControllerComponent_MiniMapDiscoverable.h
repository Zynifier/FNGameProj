#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ControllerComponentMiniMapDiscoverableVisibilitiesMapUpdatedDelegate.h"
#include "FortControllerComponent.h"
#include "FortControllerMiniMapComponentVisibilitiesArray.h"
#include "FortControllerMiniMapComponentVisibility.h"
#include "FortControllerComponent_MiniMapDiscoverable.generated.h"

class AFortPlayerStateAthena;

class UFortMiniMapComponent_Discoverable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_MiniMapDiscoverable : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentMiniMapDiscoverableVisibilitiesMapUpdated OnClientVisibilitiesMapUpdated;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bShareMiniMapComponentVisibilityWithAllySquadmates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FortControllerMiniMapComponentVisibilities, meta=(AllowPrivateAccess=true))
    FFortControllerMiniMapComponentVisibilitiesArray FortControllerMiniMapComponentVisibilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UFortMiniMapComponent_Discoverable*, FFortControllerMiniMapComponentVisibility> FortControllerMiniMapComponentVisibilitiesMap;
    
public:
    UFortControllerComponent_MiniMapDiscoverable();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSendOnSquadAlliesSharedMiniMapVisibilityMessage();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleServerSquadChange(AFortPlayerStateAthena* InPlayerState, const uint8 PreviousSquadId);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FortControllerMiniMapComponentVisibilities();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
