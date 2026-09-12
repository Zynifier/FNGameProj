#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TimeOfDayInhibitor.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UTimeOfDayInhibitor : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API ITimeOfDayInhibitor : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInhibitionEnabled() const;
    
};
