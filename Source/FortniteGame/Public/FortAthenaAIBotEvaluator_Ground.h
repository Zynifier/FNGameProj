#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_Ground.generated.h"

class UFortAthenaAIRuntimeParameters_Behavior;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SurfaceTypeRaycastDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_Behavior* CachedBehaviorRuntimeParameters;
    
public:
    UFortAthenaAIBotEvaluator_Ground();
    
};
