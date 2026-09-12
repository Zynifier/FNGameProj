#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "BuildingGameplayActorConversationCompatible.h"
#include "GameplayTagContainer.h"
#include "BuildingGameplayActorTransientQuest.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API ABuildingGameplayActorTransientQuest : public ABuildingGameplayActorConversationCompatible {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InteractionTextRefreshRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumberOfPlayersToSelectFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TargetFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoBountiesAvailableInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BountyInProgressInteractionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FailedInteractionTextToUse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InteractSubTextColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawn*> PawnsInTriggerVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerStateAthena*> PlayersGrantedBounty;
    
public:
    ABuildingGameplayActorTransientQuest();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSetInteractionText(const AFortPlayerPawn* PawnInTriggerVolume, bool bBountyAvailable, bool bBountyInProgress);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBountyStarted(const TArray<AFortPlayerStateAthena*>& HunterPlayerStates);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateInteractionText();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartUpdatingInteractionText(const AActor* TriggeredActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopUpdatingInteractionText(const AActor* TriggeredActor);
    
};
