#include "FortNonPlayerConversationParticipantComponent.h"
#include "Net/UnrealNetwork.h"

void UFortNonPlayerConversationParticipantComponent::AddHideUIIndicatorReason(const FName Reason) {
}

void UFortNonPlayerConversationParticipantComponent::RemoveHideUIIndicatorReason(const FName Reason) {
}

bool UFortNonPlayerConversationParticipantComponent::CanStartConversationWith(const AFortPlayerController* PlayerController) const {
    return false;
}

bool UFortNonPlayerConversationParticipantComponent::HasHideUIIndicatorReasons() const {
    return false;
}

void UFortNonPlayerConversationParticipantComponent::StartConversation(const FGameplayTag InConversationEntryTag, AActor* Instigator, AActor* Target) const {
}

void UFortNonPlayerConversationParticipantComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, ConversationEntryTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, InteractorParticipantTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, SelfParticipantTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, ServiceProviderIDTag);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowNameWhenInRange);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowIndicatorBubble);
    DOREPLIFETIME(UFortNonPlayerConversationParticipantComponent, bShowConversationText);
}

UFortNonPlayerConversationParticipantComponent::UFortNonPlayerConversationParticipantComponent() {
    bShowNameWhenInRange = false;
    bShowIndicatorBubble = false;
    bShowConversationText = false;
    InitiateConversationStatEventType = EFortQuestObjectiveStatEvent::Kill;
    Gifts = NULL;
    GiftTypeDefinitions = NULL;
    GiftItemInventory = NULL;
    MaxServices = 0;
    Services = NULL;
    SalesInventory = NULL;
    bQuestsRequireProviderTagMatch = false;
    MaxQuestsToSupportFromSingleProvider = 0;
    bOverrideParticipantDisplayName = false;
    bOverrideRelativeLocation = false;
    bOverrideMaxDrawDistance = false;
    MaxDrawDistanceOverride = 0.0f;
    CustomDialogMarkerClass = NULL;
    ResolvedGiftTypeDefinitions = NULL;
    bServiceDataInitialized = false;
}
