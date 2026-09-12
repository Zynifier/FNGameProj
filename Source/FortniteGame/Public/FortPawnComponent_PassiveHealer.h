#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "Engine/DataTable.h"
#include "FortPawnComponent.h"
#include "ItemAndCount.h"
#include "Templates/SubclassOf.h"
#include "FortPassiveHealerPawnInfo.h"
#include "FortPawnComponent_PassiveHealer.generated.h"

class AFortPawn;
class UBoxComponent;
class UDataTable;
class UFortGameStateComponent_AffiliationManager;
class UFortItemDefinition;
class UFortWorldItem;
class UGameplayEffect;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortPawnComponent_PassiveHealer : public UFortPawnComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PassiveHealerGreetingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PassiveHealerGreetingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> PassiveHealerActivitiesTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffectsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemAndCount HealItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealingIntervalDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealItemEquipDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealItemThrowHoldDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealItemWaitAfterThrowDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName PassiveHealerInteractionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector PassiveHealerInteractionBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector PassiveHealerInteractionBoxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UWidgetComponent> GreetingTextWidgetComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle OverrideLootInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_AffiliationManager* AffiliationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PassiveHealingRunning, meta=(AllowPrivateAccess=true))
    uint8 bPassiveHealingRunning: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId SelectedEmotePrimaryAssetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FText SelectedInteractText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FText SelectedGreetingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float GreetingDistanceSqr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortPassiveHealerPawnInfo> HealingPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetComponent* GreetingTextWidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* FortWorldHealItem;
    
public:
    UFortPawnComponent_PassiveHealer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHealedPlayerStartedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting);
    
    UFUNCTION(BlueprintCallable)
    void OnHealedPlayerStoppedEmote(UFortItemDefinition* MontageItemDef, AFortPawn* PawnEmoting);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PassiveHealingRunning();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Start();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetGreetingPassiveHealingText() const;
    
};
