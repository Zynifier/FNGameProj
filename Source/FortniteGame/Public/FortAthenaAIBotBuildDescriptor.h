#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOrientedConstructionBuildingType.h"
#include "FortAthenaAIBotBuildDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaAIBotBuildDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientedConstructionBuildingType::Type> BuildingType;
    
    FORTNITEGAME_API FFortAthenaAIBotBuildDescriptor();
};
