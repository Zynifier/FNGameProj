#pragma once
#include "CoreMinimal.h"
#include "RadiusTrackingInitializer.h"
#include "RadiusTrackingInfo.generated.h"

USTRUCT(BlueprintType)
struct FRadiusTrackingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRadiusTrackingInitializer RadiusTrackingStaticValues;
    
    FORTNITEGAME_API FRadiusTrackingInfo();
};
