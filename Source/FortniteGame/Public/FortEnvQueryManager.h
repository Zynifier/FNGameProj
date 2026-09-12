#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhase.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "FortEnvQueryManager.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortEnvQueryManager : public UEnvQueryManager {
    GENERATED_BODY()
public:
    UFortEnvQueryManager();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase GamePhase);
    
};
