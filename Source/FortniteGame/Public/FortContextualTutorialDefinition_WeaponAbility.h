#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorialDefinition.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition_WeaponAbility.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortContextualTutorialDefinition_WeaponAbility : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeaponTags;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerOnAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccessOnAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SuccessAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockedByTags;
    
public:
    UFortContextualTutorialDefinition_WeaponAbility();
    
};
