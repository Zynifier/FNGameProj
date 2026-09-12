#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortWeakPointProviderInterface.generated.h"

class AFortPlayerController;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortWeakPointProviderInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortWeakPointProviderInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetWeakSpotEnabledTimeout(AFortPlayerController* Controller) const;
    
};
