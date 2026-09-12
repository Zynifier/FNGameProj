#include "FortConversationTaskNode_Speech.h"

bool UFortConversationTaskNode_Speech::ResolveMessageForContext(const FGameplayTag& SpeakerParticipantTag, const FConversationContext& ConversationContext, FText& OutText) const {
    return false;
}

UFortConversationTaskNode_Speech::UFortConversationTaskNode_Speech() {
    bUsePerNPC_ContextualMessageLookup = false;
    bLookupViaServiceProviderTag = false;
}
