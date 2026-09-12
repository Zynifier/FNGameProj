#pragma once
#include "CoreMinimal.h"
#include "ControllerComponentAdHocSquads_NearbySquadInviteUpdateDelegate.h"
#include "ControllerComponentAdHocSquads_SquadInviteUpdateDelegate.h"
#include "ControllerComponentAdHocSquads_SquadJoinedDelegate.h"
#include "FortControllerComponent.h"
#include "AdHocSquad_InviteData.h"
#include "ControllerComponentAdHocSquads_FailedToJoinSquadDelegate.h"
#include "ControllerComponentAdHocSquads_OtherPlayerLeftSquadDelegate.h"
#include "ControllerComponentAdHocSquads_OwningPlayerLeftSquadDelegate.h"
#include "ControllerComponentAdHocSquads_SquadInviteInitiationFailedDelegate.h"
#include "EAdHocSquads_LeaveSquadReason.h"
#include "EAdHocSquads_SquadUpResult.h"
#include "FortControllerComponent_AdHocSquads.generated.h"

class AFortAthenaMutator_AdHocSquads;
class AFortPlayerStateAthena;
class UAdHocSquadData;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_AdHocSquads : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_SquadJoined DelegateOwningPlayerJoinedSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_SquadJoined DelegateOtherPlayerJoinedSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_FailedToJoinSquad DelegateFailedToJoinSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_OwningPlayerLeftSquad DelegateOwningPlayerLeftSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_OtherPlayerLeftSquad DelegateOtherPlayerLeftSquad;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_SquadInviteUpdate DelegatePlayerInitiatedSquadInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_SquadInviteUpdate DelegatePlayerEndedSquadInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_SquadInviteInitiationFailed DelegateSquadInviteInitiationFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_NearbySquadInviteUpdate DelegatePlayerHasNearedSquadInvitingPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControllerComponentAdHocSquads_NearbySquadInviteUpdate DelegatePlayerIsNoLongerNearSquadInvitingPlayer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdHocSquadsMutator, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_AdHocSquads* AdHocSquadsMutator;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAdHocSquadData* AdHocSquadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> NearbySquadInvitingPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* ClosestNearbySquadInvitingPlayerState;
    
public:
    UFortControllerComponent_AdHocSquads();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnLeaveParty();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOtherPlayerJoinedSquad(const AFortPlayerStateAthena* JoiningPlayer, const bool bInviteInstigatedByThisPlayer);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOwningPlayerJoinedSquad(const AFortPlayerStateAthena* PlayerTheOwningPlayerIsJoining, const bool bInviteInstigatedByThisPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleServerSquadChange(AFortPlayerStateAthena* PlayerState, const uint8 OldSquadIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleServerTeamChange();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtherPlayerJoinedSquad(const AFortPlayerStateAthena* JoiningPlayer, const bool bInviteInstigatedByThisPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwningPlayerJoinedSquad(const AFortPlayerStateAthena* PlayerTheOwningPlayerIsJoining, const bool bInviteInstigatedByThisPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInitiatedSquadInvite(const AFortPlayerStateAthena* PlayerInitiatingInvite);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdHocSquadsMutator(AFortAthenaMutator_AdHocSquads* OldAdHocSquadsMutator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAdHocSquadData* GetAdHocSquadData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerStateAthena*> GetNearbySquadInvitingPlayers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumberOfPlayersInSquad(const AFortPlayerStateAthena* InPlayerState) const;
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnFailedToJoinSquad(const AFortPlayerStateAthena* PlayerFromSquad, const EAdHocSquads_SquadUpResult FailureReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOtherPlayerLeftSquad(const AFortPlayerStateAthena* LeavingPlayer, const EAdHocSquads_LeaveSquadReason LeaveReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnOwningPlayerLeftSquad(const EAdHocSquads_LeaveSquadReason LeaveReason);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientOnSquadInviteInitiationFailed(const EAdHocSquads_SquadUpResult FailureReason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFailedToJoinSquad(const AFortPlayerStateAthena* PlayerFromSquad, const EAdHocSquads_SquadUpResult FailureReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOtherPlayerLeftSquad(const AFortPlayerStateAthena* LeavingPlayer, const EAdHocSquads_LeaveSquadReason LeaveReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwningPlayerLeftSquad(const EAdHocSquads_LeaveSquadReason LeaveReason);
    
    UFUNCTION(BlueprintCallable)
    void OnSquadInviteDataChanged(const FAdHocSquad_InviteData& InviteData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSquadInviteInitiationFailed(const EAdHocSquads_SquadUpResult FailureReason);
    
};
