#pragma once
#include "CoreMinimal.h"
#include "Components/PointLightComponent.h"
#include "LightOverrideSettings.h"
#include "FortPointLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPointLightComponent : public UPointLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLightOverrideSettings> OverrideSettings;
    
    UFortPointLightComponent();
    
};
