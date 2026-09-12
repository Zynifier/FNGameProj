#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_HitAndRun.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AttackDurationBeforeEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MeleeAttackMaxDistToEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ClampEvadeDistanceEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinDistanceToEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDistanceToEvade;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvadeKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvadeMovementStateKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EvadeDestinationKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTriggerMeleeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MeleeAttackMaxDistToEvadeSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MaxDistanceToEvadeSqr;
    
public:
    UFortAthenaAIBotEvaluator_HitAndRun();
    
};
