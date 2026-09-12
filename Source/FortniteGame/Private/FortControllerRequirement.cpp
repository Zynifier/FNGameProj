#include "FortControllerRequirement.h"

bool UFortControllerRequirement::IsRequirementMet(const FControllerRequirementTestContext& RequestContext) const {
    return false;
}

bool UFortControllerRequirement::IsRequirementMetInternal_Implementation(const FControllerRequirementTestContext& RequestContext) const {
    return false;
}

UFortControllerRequirement::UFortControllerRequirement() {
    bInverseCondition = false;
}
