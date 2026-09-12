#include "FortConversationTaskNode_CompleteQuestObjectiveByBackendName.h"

TArray<FName> UFortConversationTaskNode_CompleteQuestObjectiveByBackendName::Editor_GetValidObjectives() const {
    return TArray<FName>();
}

UFortConversationTaskNode_CompleteQuestObjectiveByBackendName::UFortConversationTaskNode_CompleteQuestObjectiveByBackendName() {
    bResolveQuestDetailsFromServiceProvider = false;
}
