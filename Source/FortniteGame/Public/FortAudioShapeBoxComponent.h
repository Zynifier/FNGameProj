#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "FortAudioShapeBoxComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAudioShapeBoxComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform BoxTransform;
    
    UFortAudioShapeBoxComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetBoxTransform(const FTransform& InTransform);
    
};
