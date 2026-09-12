#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent.h"
#include "SpawnerDataComponentAffiliationSharedBBConfiguration.h"
#include "FortAthenaAISpawnerDataComponent_AffiliationBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer FactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpawnerDataComponentAffiliationSharedBBConfiguration> FactionSharedBBConfigurations;
    
public:
    UFortAthenaAISpawnerDataComponent_AffiliationBase();
};

