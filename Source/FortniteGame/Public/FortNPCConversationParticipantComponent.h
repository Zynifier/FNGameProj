#pragma once
#include "CoreMinimal.h"
#include "ConversationParticipantComponent.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "EAlertLevel.h"
#include "FortNonPlayerConversationParticipantComponent.h"
#include "Templates/SubclassOf.h"
#include "FortNPCConversationParticipantComponent.generated.h"

class AActor;
class AController;
class AFortAthenaAIBotController;
class AFortPlayerPawn;
class UAnimInstance;
class UBoxComponent;
class UFortAthenaAIRuntimeParameters_Conversation;
class UFortGameStateComponent_AffiliationManager;
class UFortTandemCharacterData;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortNPCConversationParticipantComponent : public UFortNonPlayerConversationParticipantComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CanStartConversation, meta=(AllowPrivateAccess=true))
    bool bCanStartConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ConversationModeActive, meta=(AllowPrivateAccess=true))
    bool bConversationModeActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PlayerPawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotControllerOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_AffiliationManager* AffiliationManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIRuntimeParameters_Conversation* ConversationRuntimeParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName ConversationInteractionCollisionProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ConversationInteractionBoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector ConversationInteractionBoxOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBoxComponent* InteractCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTandemCharacterData* CharacterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> NPCAnimLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTriggerGiftOnFirstConversationEnabled;
    
protected:
public:
    UFortNPCConversationParticipantComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnBotControllerDBNOStatusChanged(AFortAthenaAIBotController* BotController, bool bIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnOwnerDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CanStartConversation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConversationModeActive();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortTandemCharacterData* GetCharacterData() const;
    
};

