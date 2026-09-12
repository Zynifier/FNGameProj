#pragma once
#include "CoreMinimal.h"
#include "FortPossessedPropInputComponent.h"
#include "InputEventBinding.h"
#include "FortDataDrivenPossessedPropInputComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortDataDrivenPossessedPropInputComponent : public UFortPossessedPropInputComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputEventBinding> PossessedPropPlaceBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputEventBinding> PossessedPropMakeNoiseBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputEventBinding> PossessedPropCancelBindings;
    
public:
    UFortDataDrivenPossessedPropInputComponent();
    
};
