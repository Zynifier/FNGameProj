#include "FortControllerRequirement_HasRecordedConversationEventWithNPC.h"

UFortControllerRequirement_HasRecordedConversationEventWithNPC::UFortControllerRequirement_HasRecordedConversationEventWithNPC() {
    bRequireExactEventTagMatch = false;
    QueryMethod = EConversationEventQueryMethod::CheckAgainstCurrentConversationParticipant;
}
