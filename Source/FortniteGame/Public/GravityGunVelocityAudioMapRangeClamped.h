#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GravityGunVelocityAudioMapRangeClamped.generated.h"

USTRUCT(BlueprintType)
struct FGravityGunVelocityAudioMapRangeClamped {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D InRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutRange;
    
    FORTNITEGAME_API FGravityGunVelocityAudioMapRangeClamped();
};
