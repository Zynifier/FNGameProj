#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EEQSActorSpawnerSpawnType.h"
#include "Templates/SubclassOf.h"
#include "EQSActorSpawnerClassToSpawnData.generated.h"

class AActor;
class AFortPickup;
class UFortAthenaAISpawnerData;
class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FEQSActorSpawnerClassToSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SharedAssetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEQSActorSpawnerSpawnType SpawnActorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdjustSpawnedActorToGroundLocationTraceZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaAISpawnerData> AISpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortPickup> PickupClassToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* PickupItemDefinition;
    
    FORTNITEGAME_API FEQSActorSpawnerClassToSpawnData();
};
