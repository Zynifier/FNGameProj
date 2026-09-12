#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAudioShapePrimitiveComponent.h"
#include "FortAudioShapeLineComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortAudioShapeLineComponent : public UFortAudioShapePrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EndPoint;
    
    UFortAudioShapeLineComponent();
    
    UFUNCTION(BlueprintCallable)
    void SetEndPoint(const FVector& InEndPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetStartPoint(const FVector& InStartPoint);
    
};
