#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "TeamPerformanceMessageData.h"
#include "TeamPerformanceMessageReplication.h"
#include "FortAthenaMutator_TeamPerformanceMessage.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_TeamPerformanceMessage : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamPerformanceMessageData> MessageDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MessageTriggerReplicated, meta=(AllowPrivateAccess=true))
    FTeamPerformanceMessageReplication MessageTriggerReplicated;
    
public:
    AFortAthenaMutator_TeamPerformanceMessage();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGoalScoreChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MessageTriggerReplicated();
    
    UFUNCTION(BlueprintCallable)
    void OnTeamScoreChanged(const uint8 TeamId, const int32 NewScore);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMessageEnabled(const FName NameIdentifier, const bool bEnabled);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastTriggerMessage_Reliable(const FTeamPerformanceMessageReplication& InMessageTrigger);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void MulticastTriggerMessage_Unreliable(const FTeamPerformanceMessageReplication& InMessageTrigger);
    
};
