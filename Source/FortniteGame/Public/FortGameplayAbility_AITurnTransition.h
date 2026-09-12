#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility.h"
#include "TurnTransitionData.h"
#include "FortGameplayAbility_AITurnTransition.generated.h"

UCLASS(Blueprintable)
class UFortGameplayAbility_AITurnTransition : public UFortGameplayAbility {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredWeaponTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTurnTransitionYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTurnTransitionData> TransitionPriorityList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickedTurnTransitionUsesMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PickedMontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickedTurnYawRotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDesiredRotationYawDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickedTurnTime;
    
public:
    UFortGameplayAbility_AITurnTransition();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTurnTransitionMontageSectionNameAndYawRotationRate(FName& MontageSectionName, float& TurnYawRotationRate, float& DesiredRotationYawDelta, float& TurnTime, bool& bTurnTransitionUsesMontage) const;
    
};

