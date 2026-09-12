#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "MarkerUtilitiesMapIcon.h"
#include "MarkerUtilitiesMapPlacementIcon.generated.h"

USTRUCT(BlueprintType)
struct FMarkerUtilitiesMapPlacementIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerUtilitiesMapIcon PlacementMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerUtilitiesMapIcon SquadmatePlacementMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumTeamScoreToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimumTeamScoreToShowIsPercent;
    
    FORTNITEGAME_API FMarkerUtilitiesMapPlacementIcon();
};
