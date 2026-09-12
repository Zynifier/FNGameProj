#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTargetTypes.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "FortAbilityTask_WaitPerformTargeting.generated.h"

class AActor;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAbilityTask_WaitPerformTargeting : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InitialTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceTargetingOnServer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAsyncTargeting: 1;
    
public:
    UFortAbilityTask_WaitPerformTargeting();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag);
    
};
