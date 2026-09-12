#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FortMarkableActorInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortMarkableActorInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortMarkableActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetMarkerDetailsId() const;
    
};

