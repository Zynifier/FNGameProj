#pragma once
#include "CoreMinimal.h"
#include "EAlertLevel.h"
#include "FortAthenaAIBotEvaluator_TagQuery.h"
#include "GameplayTagContainer.h"
#include "FortAthenaAIBotEvaluator_SandTunnel.generated.h"

class AFortAthenaAIBotController;
class UFortAthenaAIBotMovementDigestedSkillSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpExecutionStatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootInteractionExecutionStatusName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponTriggerMeleeName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponFireName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BuriedTagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CacheMovementDigestedSkillSet;
    
public:
    UFortAthenaAIBotEvaluator_SandTunnel();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Jump();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel);
    
};
