#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAnimInputEvent.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAnimInputEvent : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UFortAnimInputEvent();
    
    UFUNCTION(BlueprintCallable)
    static UFortAnimInputEvent* CreateAnimInputEvent(FName InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNamed(FName InEventName) const;
    
};
