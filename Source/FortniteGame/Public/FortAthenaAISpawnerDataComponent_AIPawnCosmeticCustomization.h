#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization.generated.h"

class UFortAIPawnCustomizationDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization : public UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallbackTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIPawnCustomizationDefinition* CustomizationDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanUnloadCustomization;
    
public:
    UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization();
    
};
