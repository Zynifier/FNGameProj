#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortCurieMaterialElementIntensityDecayMultiplier.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieMaterialElementIntensityDecayMultiplier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Element;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayMultiplier;
    
    FORTNITEGAME_API FFortCurieMaterialElementIntensityDecayMultiplier();
};
