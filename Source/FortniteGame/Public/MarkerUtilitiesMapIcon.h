#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Styling/SlateBrush.h"
#include "MarkerUtilitiesMapIcon.generated.h"

USTRUCT(BlueprintType)
struct FMarkerUtilitiesMapIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush MapIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MapIconScale;
    
    FORTNITEGAME_API FMarkerUtilitiesMapIcon();
};
