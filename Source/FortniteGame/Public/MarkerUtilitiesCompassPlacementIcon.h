#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaCompassIcon.h"
#include "MarkerUtilitiesCompassPlacementIcon.generated.h"

USTRUCT(BlueprintType)
struct FMarkerUtilitiesCompassPlacementIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon PlacementCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon SquadmatePlacementCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinimumTeamScoreToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimumTeamScoreToShowIsPercent;
    
    FORTNITEGAME_API FMarkerUtilitiesCompassPlacementIcon();
};
