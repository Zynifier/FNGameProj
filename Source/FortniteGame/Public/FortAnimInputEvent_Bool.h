#pragma once
#include "CoreMinimal.h"
#include "FortAnimInputEvent.h"
#include "FortAnimInputEvent_Bool.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent_Bool : public UFortAnimInputEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValue;
    
    UFortAnimInputEvent_Bool();
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent_Bool* CreateAnimInputEvent_Bool(FName InEventName, bool bInValue);
    
};
