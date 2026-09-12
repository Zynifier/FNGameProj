#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAISpawnerDataComponent_AffiliationBase.h"
#include "AttributeSet.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "ItemAndCount.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAISpawnerDataComponent_AIBotAffiliation.generated.h"

class UFortBotNameSettings;
class UFortNPCConversationParticipantComponent;
class UGameplayEffect;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEGAME_API UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAddToCollectionOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideIsAnAthenaGameParticipant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsAnAthenaGameParticipant: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SupportsMarkerWithFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MarkerPropagationMaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisguiseProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealDisguiseOnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealOnDamageExcludeAIPawnDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealDisguiseOnPlayerProximity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealPlayerProximityDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealPlayerProximityMinDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RevealPlayerProximityMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortBotNameSettings* NameSettingsAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisguisedFactionsBeforeReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DisguisedFactionsAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DisguiseGameplayEffectBeforeReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DisguiseGameplayEffectAfterReveal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemAndCount> DisguiseInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DisguiseLootInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortNPCConversationParticipantComponent> DisguiseConversationComponent;
    
public:
    UFortAthenaAISpawnerDataComponent_AIBotAffiliation();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSquadID(int32& OutSquadId);
    
};

