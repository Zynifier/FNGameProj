#include "FortConversationTaskNode_ApplyAbility.h"

UFortConversationTaskNode_ApplyAbility::UFortConversationTaskNode_ApplyAbility() {
    GrantedAbility = NULL;
    Level = 0;
    bPreventUseIfAbilityAlreadyActive = false;
    bActivateImmediatelyOnGranting = false;
}
