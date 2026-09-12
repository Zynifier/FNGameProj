#include "ConversationParticipantRequirement.h"

FConversationParticipantRequirement::FConversationParticipantRequirement() {
    Requirement = NULL;
    FailureNodeBehaviour = EConversationRequirementResult::Passed;
}
