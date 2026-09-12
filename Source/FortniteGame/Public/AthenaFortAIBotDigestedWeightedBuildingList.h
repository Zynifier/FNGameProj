#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotBuildDescriptor.h"
#include "AthenaFortAIBotDigestedWeightedBuildingList.generated.h"

USTRUCT(BlueprintType)
struct FAthenaFortAIBotDigestedWeightedBuildingList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaAIBotBuildDescriptor> BuildDescriptors;
    
    FORTNITEGAME_API FAthenaFortAIBotDigestedWeightedBuildingList();
};
