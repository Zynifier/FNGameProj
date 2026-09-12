#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CreativeIgnoreEnabledInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UCreativeIgnoreEnabledInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ICreativeIgnoreEnabledInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldIgnoreEnabledState();
    
};
