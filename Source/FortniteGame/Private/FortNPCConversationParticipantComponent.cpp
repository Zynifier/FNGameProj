#include "FortNPCConversationParticipantComponent.h"
#include "Net/UnrealNetwork.h"

void UFortNPCConversationParticipantComponent::OnBotControllerAlertLevelChanged(AFortAthenaAIBotController* BotController, EAlertLevel OldAlertLevel, EAlertLevel NewAlertLevel) {
}

void UFortNPCConversationParticipantComponent::OnBotControllerDBNOStatusChanged(AFortAthenaAIBotController* BotController, bool bIsDBNO) {
}

void UFortNPCConversationParticipantComponent::OnPlayerPawnOwnerDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void UFortNPCConversationParticipantComponent::OnRep_CanStartConversation() {
}

void UFortNPCConversationParticipantComponent::OnRep_ConversationModeActive() {
}

UFortTandemCharacterData* UFortNPCConversationParticipantComponent::GetCharacterData() const {
    return NULL;
}

void UFortNPCConversationParticipantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, bCanStartConversation);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, bConversationModeActive);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionCollisionProfile);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionBoxExtent);
    DOREPLIFETIME(UFortNPCConversationParticipantComponent, ConversationInteractionBoxOffset);
}

UFortNPCConversationParticipantComponent::UFortNPCConversationParticipantComponent() {
    bCanStartConversation = false;
    bConversationModeActive = false;
    PlayerPawnOwner = NULL;
    BotControllerOwner = NULL;
    AffiliationManager = NULL;
    ConversationRuntimeParameters = NULL;
    InteractCollisionComponent = NULL;
    CharacterData = NULL;
    NPCAnimLayer = NULL;
    bTriggerGiftOnFirstConversationEnabled = false;
}

