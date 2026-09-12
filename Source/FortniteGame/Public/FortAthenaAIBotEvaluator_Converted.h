#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaAIBotEvaluator_Movement.h"
#include "FortAthenaAIBotEvaluator_Converted.generated.h"

class AFortPawn;
class UFortAthenaAIRuntimeParameters_AIBotConvert;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShouldMoveTowardsConverterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShouldTeleportTowardsConverterName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConvertedAllowPatrolAroundName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConvertedAllowScanAroundWhenWaitingName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConvertedDestinationName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CrouchExecutionStatusName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SprintExecutionStatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TeleportLocationProjectionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPawn* ConverterPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_AIBotConvert* CachedAIBotConvertParameters;
    
public:
    UFortAthenaAIBotEvaluator_Converted();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnConvertedEvent(AFortPawn* InstigatorPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnUnconvertedEvent();
    
};
