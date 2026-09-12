#include "FortAnimNode_QuadrupedSlopeWarping.h"

FFortAnimNode_QuadrupedSlopeWarping::FFortAnimNode_QuadrupedSlopeWarping() {
    NumSpineBones = 0;
    MaxMovementDistBeforeNewTrace = 0.0f;
    bUseMovementComponentFloorInfoInsteadOfTraces = false;
    bOnlyAffectSkeletonRootBone = false;
}
