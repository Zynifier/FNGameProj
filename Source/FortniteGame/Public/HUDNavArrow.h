#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "NavArrow.h"
#include "HUDNavArrow.generated.h"

class UCurveFloat;
class UDestinationTrackerPawnComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AHUDNavArrow : public ANavArrow {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationRelativeToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PitchRelativeToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ArrowSizeRelativeToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ArrowPlacementHeightRelativeToScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultApproachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DefaultDepartRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ArrowComponent;
    
public:
    AHUDNavArrow();
    
    UFUNCTION(BlueprintCallable)
    void InitializeTrackerComponent(UDestinationTrackerPawnComponent* InDestinationComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetApproachRadius(const float InApproachRadius);
    
    UFUNCTION(BlueprintCallable)
    void SetDepartRadius(const float InDepartRadius);
    
};
