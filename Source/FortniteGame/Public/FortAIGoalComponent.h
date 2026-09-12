#pragma once
#include "CoreMinimal.h"
#include "AIGoalComponent.h"
#include "AttributeSet.h"
#include "EFortAILODLevel.h"
#include "FortAIGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAIGoalComponent : public UAIGoalComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TMap<EFortAILODLevel, FScalableFloat> AssignmentUpdatePeriods;
    
    UFortAIGoalComponent();
};

