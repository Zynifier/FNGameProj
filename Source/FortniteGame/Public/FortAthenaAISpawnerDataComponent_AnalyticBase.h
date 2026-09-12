#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_AnalyticBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AnalyticBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer OnDeathGameplayTags;
    
public:
    UFortAthenaAISpawnerDataComponent_AnalyticBase();
};

