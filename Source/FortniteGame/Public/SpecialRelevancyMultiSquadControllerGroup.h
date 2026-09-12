#pragma once
#include "CoreMinimal.h"
#include "SpecialRelevancyMultiSquadControllerGroup.generated.h"

class AFortPlayerControllerAthena;

USTRUCT(BlueprintType)
struct FSpecialRelevancyMultiSquadControllerGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerControllerAthena*> Controllers;
    
    FORTNITEGAME_API FSpecialRelevancyMultiSquadControllerGroup();
};
