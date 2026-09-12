#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_VehicleBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_Vehicle.generated.h"

class AFortAthenaVehicle;
class UFortAthenaAIBotSkillSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_Vehicle : public UFortAthenaAISpawnerDataComponent_VehicleBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortAthenaVehicle> VehicleToSpawnAndEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetInfiniteFuel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UFortAthenaAIBotSkillSet>> VehicleSkillSets;
    
public:
    UFortAthenaAISpawnerDataComponent_Vehicle();
    
};
