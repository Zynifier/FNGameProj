#pragma once
#include "CoreMinimal.h"
#include "FortAudioShapeComponent.h"
#include "OnSphereEdgeAudioComponentInsideStateChangedDelegate.h"
#include "FortAudioShapePrimitiveComponent.generated.h"

class UAudioComponent;
class USoundBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAudioShapePrimitiveComponent : public UFortAudioShapeComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnEdge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* SoundOnInside;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSphereEdgeAudioComponentInsideStateChanged OnInsideStateChanged;
    
    UFortAudioShapePrimitiveComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetEdgeAudioComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAudioComponent* GetInsideAudioComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsPlayerInside() const;
    
};
