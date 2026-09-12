#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMiniMapInterface.generated.h"

class UMaterialInterface;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UFortMiniMapInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortMiniMapInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UMaterialInterface* GetMapMaterial() const PURE_VIRTUAL(GetMapMaterial, return NULL;);
    
};

