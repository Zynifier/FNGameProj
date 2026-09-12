#pragma once
#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "OnReadyDelegate.h"
#include "FortAbilityTask_WaitForCustomCharacterParts.generated.h"

class AFortPlayerPawn;
class UCustomCharacterPart;
class UGameplayAbility;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAbilityTask_WaitForCustomCharacterParts : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReady OnReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCustomCharacterPart>> CustomCharacterPartsToWaitFor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* FortPlayerPawn;
    
    UFortAbilityTask_WaitForCustomCharacterParts();
    
    UFUNCTION(BlueprintCallable)
    static UFortAbilityTask_WaitForCustomCharacterParts* WaitForCustomCharacterPartsReady(UGameplayAbility* OwningAbility, TArray<TSoftObjectPtr<UCustomCharacterPart>> CustomCharacterParts);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishedCharacterCustomizationCallback(AFortPlayerPawn* InPawn);
    
};
