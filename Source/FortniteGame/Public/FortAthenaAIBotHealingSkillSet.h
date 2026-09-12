#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIBotSkillSet.h"
#include "FortBotHealingItems.h"
#include "FortBotHealingItemsList.h"
#include "FortBotHealingItemsSpec.h"
#include "FortAthenaAIBotHealingSkillSet.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBotHealingItemsList HealthItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItemsSpec> HealthItemsSpecializations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBotHealingItemsList ShieldItemsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItemsSpec> ShieldItemsSpecializations;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItems> HealthItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBotHealingItems> ShieldItems;
    
public:
    UFortAthenaAIBotHealingSkillSet();
};

