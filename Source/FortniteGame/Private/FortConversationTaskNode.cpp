#include "FortConversationTaskNode.h"

UConversationParticipantComponent* UFortConversationTaskNode::GetParticipantComponentPlayer(const FConversationContext& Context) const {
    return NULL;
}

UConversationParticipantComponent* UFortConversationTaskNode::GetParticipantComponentNPC(const FConversationContext& Context) const {
    return NULL;
}

AActor* UFortConversationTaskNode::GetParticipantActorPlayer(const FConversationContext& Context) const {
    return NULL;
}

AActor* UFortConversationTaskNode::GetParticipantActorNPC(const FConversationContext& Context) const {
    return NULL;
}

TSoftObjectPtr<USoundBase> UFortConversationTaskNode::GetChoiceSound() const {
    return TSoftObjectPtr<USoundBase>();
}

TSoftObjectPtr<USoundBase> UFortConversationTaskNode::GetHoverChoiceSound() const {
    return TSoftObjectPtr<USoundBase>();
}

TSoftObjectPtr<UObject> UFortConversationTaskNode::GetTaskIcon() const {
    return TSoftObjectPtr<UObject>();
}

UFortConversationTaskNode::UFortConversationTaskNode() {
}

