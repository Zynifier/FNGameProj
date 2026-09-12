#pragma once
#include "CoreMinimal.h"
#include "SmartBuildingActor.generated.h"

class UBuildingEditModeMetadata;

USTRUCT(BlueprintType)
struct FSmartBuildingActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingEditModeMetadata> BuildingMetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RotationIterations;
    
    FORTNITEGAME_API FSmartBuildingActor();
};
