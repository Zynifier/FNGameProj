#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "FortAthenaLoadout.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.generated.h"

class UAthenaDanceItemDefinition;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_CosmeticBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFallbackTag(FGameplayTag& OutFallbackTag);
    
};

