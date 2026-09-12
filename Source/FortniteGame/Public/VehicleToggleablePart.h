#pragma once
#include "CoreMinimal.h"
#include "VehicleToggleablePart.generated.h"

USTRUCT(BlueprintType)
struct FVehicleToggleablePart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ShapeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FORTNITEGAME_API FVehicleToggleablePart();
};
