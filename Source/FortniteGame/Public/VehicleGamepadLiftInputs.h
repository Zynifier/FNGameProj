#pragma once
#include "CoreMinimal.h"
#include "VehicleGamepadLiftInputs.generated.h"

USTRUCT(BlueprintType)
struct FVehicleGamepadLiftInputs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveUpPressTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MoveDownPressTime;
    
    FORTNITEGAME_API FVehicleGamepadLiftInputs();
};
