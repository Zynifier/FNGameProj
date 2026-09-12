#include "FortConversationTaskNode_SupplyDrop.h"

UFortConversationTaskNode_SupplyDrop::UFortConversationTaskNode_SupplyDrop() {
    bLimitedStock = false;
    SupplyDropLocationPolicy = ESupplyDropSpawnLocationPolicy::RadiusAroundLocation;
}
