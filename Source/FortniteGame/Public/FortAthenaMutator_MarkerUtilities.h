#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaCompassIcon.h"
#include "FortAthenaMutator.h"
#include "GameplayTagContainer.h"
#include "MarkerUtilitiesCompassPlacementIcon.h"
#include "MarkerUtilitiesMapIcon.h"
#include "MarkerUtilitiesMapPlacementIcon.h"
#include "MarkerUtilitiesTeamPlacement.h"
#include "FortAthenaMutator_MarkerUtilities.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_MarkerUtilities : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bMarkIndicatedPlayersOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaCompassIcon IndicatedPlayerCompassIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bMarkIndicatedPlayersOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkerUtilitiesMapIcon IndicatedPlayerMapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumTopScoringTeamsToShowOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDisplayLocalPlayerAsTopScoringTeamsOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOverlayTopScoringTeamIndicatorOnLocalPlayerOnMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkerUtilitiesMapPlacementIcon> PlacementBasedMapIcons;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TopScoringPlayerSpecialActorTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat TopScoringPlayerSpecialActorRepInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumTopScoringTeamsToShowOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMarkerUtilitiesCompassPlacementIcon> PlacementBasedCompassIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDrawLocalPlayerTopScoringTeamOnCompass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WorldIndicator_IndicatorZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bWorldIndicator_IndicatorClampToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDrawMarkedActorStencils;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StencilName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FMarkerUtilitiesTeamPlacement> ReplicatedTeamPlacements;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUseAthenaTeamScoreForRanking;
    
public:
    AFortAthenaMutator_MarkerUtilities();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};
