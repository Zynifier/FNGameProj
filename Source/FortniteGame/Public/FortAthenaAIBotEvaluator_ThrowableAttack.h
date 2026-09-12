#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotEvaluator_Attack.h"
#include "FortAthenaAIBotEvaluator_ThrowableAttack.generated.h"

class AFortPawn;
class UFortAthenaAIBotAimingDigestedSkillSet;
class UFortAthenaAIBotAttackingDigestedSkillSet;
class UFortAthenaAIBotRangeAttackDigestedSkillSet;
class UFortWorldItem;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTriggerThrowableName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetActorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAttackingDigestedSkillSet* AttackingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotRangeAttackDigestedSkillSet* RangeAttackSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotAimingDigestedSkillSet* AimingSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* BestWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* CachedFortPawn;
    
public:
    UFortAthenaAIBotEvaluator_ThrowableAttack();
    
};
