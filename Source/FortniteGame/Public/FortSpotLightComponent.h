#pragma once
#include "CoreMinimal.h"
#include "Components/SpotLightComponent.h"
#include "LightOverrideSettings.h"
#include "FortSpotLightComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortSpotLightComponent : public USpotLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FLightOverrideSettings> OverrideSettings;
    
    UFortSpotLightComponent();
    
};
