#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAnimInputEvent.h"
#include "FortAnimInputEvent_Vector.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent_Vector : public UFortAnimInputEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Value;
    
    UFortAnimInputEvent_Vector();
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent_Vector* CreateAnimInputEvent_Vector(FName InEventName, FVector InValue);
    
};
