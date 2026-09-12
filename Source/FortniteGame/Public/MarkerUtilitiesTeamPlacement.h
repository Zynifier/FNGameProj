#pragma once
#include "CoreMinimal.h"
#include "MarkerUtilitiesTeamPlacement.generated.h"

USTRUCT(BlueprintType)
struct FMarkerUtilitiesTeamPlacement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Placement;
    
    FORTNITEGAME_API FMarkerUtilitiesTeamPlacement();
};
