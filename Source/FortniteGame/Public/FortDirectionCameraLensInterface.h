#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "FortDirectionCameraLensInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UFortDirectionCameraLensInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortDirectionCameraLensInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SetStrength(float InStrength) PURE_VIRTUAL(SetStrength,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SetTint(const FLinearColor& Color) PURE_VIRTUAL(SetTint,);
    
};
