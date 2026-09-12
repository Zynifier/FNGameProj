#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "EQSActorSpawnerData.h"
#include "EQSActorSpawner.generated.h"

class AActor;
class AFortAthenaMutator_EQSActorSpawner;
class UEQSActorSpawnerHelperDestroyActorsInArea;
class UEnvQueryInstanceBlueprintWrapper;

UCLASS(Blueprintable)
class FORTNITEGAME_API UEQSActorSpawner : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_EQSActorSpawner* OwningActorSpawnerMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEQSActorSpawnerHelperDestroyActorsInArea*> SpawnerHelperDestroyActorsInAreaList;
    
public:
    UEQSActorSpawner();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnFindActorSpawnLocationQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEQSActorSpawnerData GetSpawnerData();
    
};
