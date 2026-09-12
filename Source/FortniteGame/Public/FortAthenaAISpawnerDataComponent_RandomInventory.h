#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_InventoryBase.h"
#include "WeightedAIInventoryLoadout.h"
#include "FortAthenaAISpawnerDataComponent_RandomInventory.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_RandomInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedAIInventoryLoadout> Loadouts;
    
public:
    UFortAthenaAISpawnerDataComponent_RandomInventory();
    
};
