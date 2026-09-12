#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticBase.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAISpawnerDataComponent_CosmeticLoadout.generated.h"

class UCustomCharacterPart;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CosmeticLoadout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> CustomCharacterParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanShowDefaultSkin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallbackTag;
    
public:
    UFortAthenaAISpawnerDataComponent_CosmeticLoadout();
};

