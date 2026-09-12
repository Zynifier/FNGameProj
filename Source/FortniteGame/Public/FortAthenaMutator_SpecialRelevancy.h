#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RelevantPawnArray.h"
#include "SpecialActorSpawnData.h"
#include "SpecialRelevancyModeData.h"
#include "SpecialRelevancyMultiSquadControllerGroupsContainer.h"
#include "FortAthenaMutator_SpecialRelevancy.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortProjectileBase;
class UFortReplicationGraphNode_SpecialRelevancy;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_SpecialRelevancy : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortReplicationGraphNode_SpecialRelevancy> RootGridNodeClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialRelevancyMultiSquadControllerGroupsContainer> MultiSquadControllerGroupsContainers;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSpecialRelevancyModeData CurrentRelevancyModeData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPlayerPawn> PlayerPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AFortProjectileBase>> ProjectileClasses;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToHideOnRelevancyMode[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortReplicationGraphNode_SpecialRelevancy* SpecialRelevancyNode;
    
public:
    AFortAthenaMutator_SpecialRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetClientAuthoritativePhysics(bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartMultiSquadRelevancy(int32 NumOfSquadsInRelevancyGroup);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartNormalRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartSoloRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartSquadRelevancy();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool AreActorsInSameRelvancyGroup(const AActor* Actor0, const AActor* Actor1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetActors(TArray<AActor*>& OutActors, const int32 RelevancyGroupIndex, TSubclassOf<AActor> ActorClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSquadSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumRelevancyGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerPawns(TArray<AFortPlayerPawn*>& OutPawns, const int32 RelevancyGroupIndex) const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentRelevancyMode(FSpecialRelevancyModeData PrevMode);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SpawnActorPerRelevancyGroup(const FSpecialActorSpawnData& NewSpawnData, TArray<AActor*>& SpawnedActors);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void GetRelevantPawnGroups(TArray<FRelevantPawnArray>& RelevantPawns) const;
    
};
