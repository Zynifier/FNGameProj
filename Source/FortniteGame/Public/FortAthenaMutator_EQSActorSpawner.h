#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "OnEQSActorSpawnerAISpawnedDelegate.h"
#include "OnEQSActorSpawnerActorSpawnedDelegate.h"
#include "OnEQSActorSpawnerPrepareEQSDelegate.h"
#include "OnEQSActorSpawningPhaseEndedDelegate.h"
#include "OnEQSActorSpawningPhaseStartedDelegate.h"
#include "EQSActorSpawnerClassToSpawnData.h"
#include "EQSActorSpawnerData.h"
#include "FortAthenaMutator_EQSActorSpawner.generated.h"

class UEQSActorSpawner;
class UEnvQuery;
class UEnvQueryInstanceBlueprintWrapper;

class AActor;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_EQSActorSpawner : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEQSActorSpawningPhaseStarted OnEQSActorSpawningPhaseStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEQSActorSpawningPhaseEnded OnEQSActorSpawningPhaseEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEQSActorSpawnerActorSpawned OnActorSpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEQSActorSpawnerAISpawned OnAISpawnedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEQSActorSpawnerPrepareEQS OnPrepareEQS;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* MutatorBasePlacementQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MutatorBaseQueryingAttemptIntervalTimeSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEQSActorSpawnerData> ActorSpawningDatas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEQSActorSpawner*> ActorSpawners;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UEQSActorSpawner*> AIPawnSpawnRequestIdToEQSActorSpawnerMap;
    
public:
    AFortAthenaMutator_EQSActorSpawner();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UEQSActorSpawner* GetEQSActorSpawnerByNameId(const FName NameId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPrepareEQSRequest(const UEQSActorSpawner* EQSActorSpawner, UEnvQueryInstanceBlueprintWrapper* EQSInstanceWrapper);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartSpawningManually(const FName NameId, int32 OptionalActivationId);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorSpawned(AActor* SpawnedActor, const FEQSActorSpawnerData& EQSActorSpawnerData, const UEQSActorSpawner* EQSActorSpawner);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorSpawnPhaseEnded(const FEQSActorSpawnerData& EQSActorSpawnerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorSpawnPhaseStarted(const FEQSActorSpawnerData& EQSActorSpawnerData, int32 ActivationIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideClassesToSpawn(TArray<FEQSActorSpawnerClassToSpawnData>& OutOverrideClassesToSpawn, const FEQSActorSpawnerData& SpawnerData);
    
};
