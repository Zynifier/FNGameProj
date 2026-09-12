#pragma once
#include "CoreMinimal.h"
#include "SmartBuildingActor.h"
#include "SmartBuildSelection.generated.h"

USTRUCT(BlueprintType)
struct FSmartBuildSelection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdealViewPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSmartBuildingActor> BuildingActors;
    
    FORTNITEGAME_API FSmartBuildSelection();
};
