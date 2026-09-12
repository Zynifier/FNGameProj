#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "FortAudioShapeCylinderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAudioShapeCylinderComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UFortAudioShapeCylinderComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetHalfHeight(float InHalfHeight);
    
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
};
