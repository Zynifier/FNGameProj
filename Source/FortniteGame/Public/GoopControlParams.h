#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GoopControlParams.generated.h"

USTRUCT(BlueprintType)
struct FGoopControlParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DragHorizontalPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DragVerticalPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DragHorizontalFlat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DragVerticalFlat;
    
    FORTNITEGAME_API FGoopControlParams();
};
