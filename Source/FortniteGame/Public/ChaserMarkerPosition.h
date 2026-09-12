#pragma once
#include "CoreMinimal.h"
#include "ChaserMarkerPosition.generated.h"

USTRUCT(BlueprintType)
struct FChaserMarkerPosition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MarkerPosition;
    
    FORTNITEGAME_API FChaserMarkerPosition();
};
