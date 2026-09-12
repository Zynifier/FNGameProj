#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapeComponent.h"
#include "OnSphereEdgeAudioComponentInsideStateChangedDelegate.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "FortSphereEdgeAudioComponent.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSphereEdgeAudioComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSphereEdgeAudioComponentInsideStateChanged OnInsideSphereStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SphereEdgeAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* SphereInsideAudioComponent;
    
public:
    UFortSphereEdgeAudioComponent();
    UFUNCTION(BlueprintCallable)
    void SetRadius(float InRadius);
    
};

