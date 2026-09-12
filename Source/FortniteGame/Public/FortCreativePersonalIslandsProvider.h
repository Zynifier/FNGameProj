#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandData.h"
#include "FortGameActivityProvider.h"
#include "FortCreativePersonalIslandsProvider.generated.h"

class AFortPlayerController;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativePersonalIslandsProvider : public UFortGameActivityProvider {
    GENERATED_BODY()
public:
    UFortCreativePersonalIslandsProvider();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FCreativeIslandData> GetPersonalIslands(AFortPlayerController* OwningFortPC);
    
};
