#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaAIBotEvaluator.h"
#include "FortAthenaAIBotEvaluator_DormantUntilPhase.generated.h"

class IFortSafeZoneInterface;
class UFortSafeZoneInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_DormantUntilPhase : public UFortAthenaAIBotEvaluator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bIsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhaseStep RequiredGamePhaseStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayAfterPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RandomDeviationAfterPhase;
    
public:
    UFortAthenaAIBotEvaluator_DormantUntilPhase();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
};
