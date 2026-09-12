#pragma once
#include "CoreMinimal.h"
#include "FortMiniMapIndicator.h"
#include "Styling/SlateBrush.h"
#include "FortMiniMapRadiusTrackerIndicator.generated.h"

class AFortPlayerController;
class UFortControllerComponent_RadiusTracker;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMiniMapRadiusTrackerIndicator : public UFortMiniMapIndicator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortControllerComponent_RadiusTracker* RadiusTrackerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PlatformScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FSlateBrush> MinimapRadiusTrackerCircleBrushes;
    
public:
    UFortMiniMapRadiusTrackerIndicator();
    
};
