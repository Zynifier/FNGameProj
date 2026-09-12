#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InputEventBinding.generated.h"

USTRUCT(BlueprintType)
struct FInputEventBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInputEvent> InputEvent;
    
    FORTNITEGAME_API FInputEventBinding();
};
