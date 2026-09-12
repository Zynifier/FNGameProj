#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_DBNO.generated.h"

class AFortPlayerPawnAthena;
class UFortAthenaAIBotDBNODigestedSkillSet;

class AFortPawn;
class UFortAthenaAIRuntimeParameters_DBNOBehavior;

UCLASS(Blueprintable)
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DBNODestinationKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReachSquadmates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowReachSameFactionNPCs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerPawnAthena*> AllyPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedCurrentDestination;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotDBNODigestedSkillSet* DBNOSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_DBNOBehavior* DBNOBehaviorRuntimeParameters;
    
public:
    UFortAthenaAIBotEvaluator_DBNO();
private:
    UFUNCTION(BlueprintCallable)
    void OnAllyPawnDBNOStateChanged(AFortPawn* InPlayer, bool bInIsDBNO);
    
};

