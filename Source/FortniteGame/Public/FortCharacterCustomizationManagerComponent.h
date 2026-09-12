#pragma once
#include "CoreMinimal.h"
#include "FortPlayerStateComponent.h"
#include "FortCharacterCustomizationManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortCharacterCustomizationManagerComponent : public UFortPlayerStateComponent {
    GENERATED_BODY()
public:
    UFortCharacterCustomizationManagerComponent();
    
};
