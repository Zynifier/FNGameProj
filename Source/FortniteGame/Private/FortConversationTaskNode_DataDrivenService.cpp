#include "FortConversationTaskNode_DataDrivenService.h"

bool UFortConversationTaskNode_DataDrivenService::GetServicePrice(float& PriceOut) const {
    return false;
}

UFortConversationTaskNode_DataDrivenService::UFortConversationTaskNode_DataDrivenService() {
    PricingColumn = 0;
    ServiceBriefConfigCollection = NULL;
    RequirementMatchPolicy = ERequirementMatchPolicy::RequireAll;
}
