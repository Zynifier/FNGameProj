#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "FortWeaponFxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortWeaponFxComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UFortWeaponFxComponent();
    
};
