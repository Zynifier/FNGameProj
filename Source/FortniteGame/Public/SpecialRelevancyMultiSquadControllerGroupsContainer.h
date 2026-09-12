#pragma once
#include "CoreMinimal.h"
#include "SpecialRelevancyMultiSquadControllerGroup.h"
#include "SpecialRelevancyMultiSquadControllerGroupsContainer.generated.h"

USTRUCT(BlueprintType)
struct FSpecialRelevancyMultiSquadControllerGroupsContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialRelevancyMultiSquadControllerGroup> ControllerGroups;
    
    FORTNITEGAME_API FSpecialRelevancyMultiSquadControllerGroupsContainer();
};
