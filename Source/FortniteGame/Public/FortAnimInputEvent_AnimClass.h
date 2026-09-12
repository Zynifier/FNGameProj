#pragma once
#include "CoreMinimal.h"
#include "FortAnimInputEvent.h"
#include "Templates/SubclassOf.h"
#include "FortAnimInputEvent_AnimClass.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent_AnimClass : public UFortAnimInputEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> Value;
    
    UFortAnimInputEvent_AnimClass();
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent_AnimClass* CreateAnimInputEvent_AnimClass(FName InEventName, TSubclassOf<UAnimInstance> InValue);
    
};
