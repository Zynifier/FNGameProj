#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortAthenaAIRuntimeParameters.h"
#include "GameplayTagContainer.h"
#include "ItemAndCount.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIRuntimeParameters_AIBotDisguise.generated.h"

class UFortBotNameSettings;
class UFortNPCConversationParticipantComponent;
class UGameplayEffect;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaAIRuntimeParameters_AIBotDisguise : public UFortAthenaAIRuntimeParameters {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldApplyDisguise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRevealDisguiseOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRevealOnDamageExcludeAIPawnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRevealDisguiseOnPlayerProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RevealPlayerProximityDistanceSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RevealPlayerProximityMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RevealPlayerProximityMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBotNameSettings* NameSettingsAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisguisedFactionsBeforeReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisguisedFactionsAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DisguiseGameplayEffectBeforeReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DisguiseGameplayEffectAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> DisguiseInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DisguiseLootInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNPCConversationParticipantComponent> DisguiseConversationComponentOverride;
    
public:
    UFortAthenaAIRuntimeParameters_AIBotDisguise();
    
};
