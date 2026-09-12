#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMediaUCPInView.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMediaUCPInView : public UObject {
    GENERATED_BODY()
public:
    UFortMediaUCPInView();
    
    UFUNCTION(BlueprintCallable)
    static void FireUCPInViewCallback(bool bInView);
    
};
