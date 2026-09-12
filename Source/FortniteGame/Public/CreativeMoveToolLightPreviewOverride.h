#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeMoveToolLightPreviewOverride.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UCreativeMoveToolLightPreviewOverride : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ICreativeMoveToolLightPreviewOverride : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldOverrideMoveToolLightPreviewVisibility();
    
};
