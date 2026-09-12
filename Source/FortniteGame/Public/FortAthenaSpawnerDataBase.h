#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "FortAthenaSpawnerDataBase.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaSpawnerDataBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DescriptorTag;
    
    UFortAthenaSpawnerDataBase();
    
};
