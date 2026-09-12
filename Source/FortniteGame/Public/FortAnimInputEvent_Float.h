#pragma once
#include "CoreMinimal.h"
#include "FortAnimInputEvent.h"
#include "FortAnimInputEvent_Float.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent_Float : public UFortAnimInputEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UFortAnimInputEvent_Float();
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent_Float* CreateAnimInputEvent_Float(FName InEventName, float InValue);
    
};
