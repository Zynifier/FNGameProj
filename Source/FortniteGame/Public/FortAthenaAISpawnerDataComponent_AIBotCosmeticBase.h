#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.generated.h"

class UAthenaDanceItemDefinition;
class UCustomCharacterPart;

UCLASS(Blueprintable, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase {
    GENERATED_BODY()
public:
    UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetCustomCharacterParts(TArray<UCustomCharacterPart*>& OutCustomCharacterParts);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetDances(TArray<UAthenaDanceItemDefinition*>& Dances);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLoadout(FFortAthenaLoadout& OutLoadout);
    
};
