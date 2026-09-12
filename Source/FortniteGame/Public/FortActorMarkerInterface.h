#pragma once
#include "CoreMinimal.h"
#include "FortWorldMarkerData.h"
#include "MarkedActorDisplayInfo.h"
#include "UObject/Interface.h"
#include "FortActorMarkerInterface.generated.h"

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UFortActorMarkerInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortActorMarkerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMarkerData(const FFortWorldMarkerData& MarkerData, const FMarkedActorDisplayInfo& DisplayInfo);
    
};
