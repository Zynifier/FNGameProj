#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EAlertLevel.h"
#include "GameplayTagContainer.h"
#include "FortAffiliationComponentSpecificRelations.h"
#include "FortActorComponent_Affiliation.generated.h"

class AActor;
class AController;
class AFortAthenaAIBotController;
class APawn;
class UAIPerceptionComponent;
class UFortGameStateComponent_AffiliationManager;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortActorComponent_Affiliation : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasSpecificRelations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasPerceptionUpdateRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsInGameParticipantFaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultFactionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRegisteredToAffiliationSystem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetSpecificRelationUnawareDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ResetSpecificRelationNoDamageDelay;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint32 AffiliationUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentFactions, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentFactions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentBlockResetRelationTags;
    
    UPROPERTY(EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FFortAffiliationComponentSpecificRelations SpecificRelations[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_AffiliationManager* CachedAffiliationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* CachedAIPerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* CachedBotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanBeDamagedByNullInstigator;
    
public:
    UFortActorComponent_Affiliation();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnDamaged(AActor* DamageOnOwnerPawnDamageddActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnPossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerPawnUnpossessed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerTeamIndexChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFactions();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanBeDamagedByNullInstigator(const bool bInCanBeDamagedByNullInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void UpdatePerception();
    
};
