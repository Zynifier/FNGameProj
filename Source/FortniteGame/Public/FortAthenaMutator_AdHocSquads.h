#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "Templates/SubclassOf.h"
#include "AdHocSquad_InviteData.h"
#include "AdHocSquad_InviteDataArray.h"
#include "EAdHocSquads_InviteStatus.h"
#include "EAdHocSquads_LeaveSquadReason.h"
#include "EAdHocSquads_SquadUpResult.h"
#include "FortAthenaMutator_AdHocSquads.generated.h"

class AFortPlayerControllerAthena;
class AFortPlayerPawn;
class UAdHocSquadData;
class UFortControllerComponent_AdHocSquads;

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_AdHocSquads : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAdHocSquadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bVoiceChatSquaddingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDistInviteNotificationCanBeReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumDistInviteNotificationIsLost;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortControllerComponent_AdHocSquads> AdHocSquadsControllerComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAdHocSquadData> AdHocSquadDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainSquadDataForNonAdHocSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bForceAllPlayersOntoIndividualTeams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bFollowingPlayerAutomaticallyLeavesCurrentSquadWhenSquadingUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bSquadingUpMergesSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnsureOnOutsideTeamOrSquadChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, UAdHocSquadData*> AdHocSquadDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FAdHocSquad_InviteDataArray InviteDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdHocSquad_InviteData> LocalClientInviteDataArray;
    
public:
    AFortAthenaMutator_AdHocSquads();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool PlayerInitiatedSquadInvite(const AFortPlayerPawn* InFortPlayerPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayersSquadFull(const AFortPlayerControllerAthena* PlayerController) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HavePlayerLeaveAdHocSquad(AFortPlayerControllerAthena* LeavingPlayerController, const EAdHocSquads_LeaveSquadReason LeaveReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayerSquadInviteEnded(AFortPlayerStateAthena* PlayerStateInviting, const EAdHocSquads_InviteStatus InviteEndedReason);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SquadUpPlayers(EAdHocSquads_SquadUpResult& OutSquadUpResult, uint8& OutNewSharedSquad, AFortPlayerControllerAthena* SquadUpInstigatorPlayerController, AFortPlayerControllerAthena* SquadUpFollowerPlayerController);
    
};
