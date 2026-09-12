#include "CustomCharacterPartAnimInstance_BuffetFaceAcc.h"

void UCustomCharacterPartAnimInstance_BuffetFaceAcc::GenerateBackpackAlphas() {
}

UCustomCharacterPartAnimInstance_BuffetFaceAcc::UCustomCharacterPartAnimInstance_BuffetFaceAcc() {
    BodyMesh = NULL;
    RigidBodyAlpha = 0.0f;
    TrailAlpha = 0.0f;
    SkydiveFloatPoseFixAlpha = 0.0f;
    IsBackblingOnAlpha = 0.0f;
    BackpackOnHeadUpDnAlpha = 0.0f;
    IsLongBackblingOnAlpha = 0.0f;
    IsShortBackblingOnAlpha = 0.0f;
    IsJumpPoseFixNeededAlpha = 0.0f;
    RelaxSpeed = 0.0f;
    HeadFwdBwdRotation = 0.0f;
    bIsBackblingOn = false;
    bIsLongBackblingOn = false;
    bIsShortBackblingOn = false;
    bIsHairConstraintOn = false;
    RelaxSpeedInRangeA = 0.0f;
    RelaxSpeedInRangeB = 0.0f;
    RelaxSpeedOutRangeA = 0.0f;
    RelaxSpeedOutRangeB = 0.0f;
    TrailAlphaSkydiving = 0.0f;
    TrailAlphaFalling = 0.0f;
    LongBackblingThreshold = 0.0f;
    RigidBodyAlphaSkydiving = 0.0f;
    GravityStrength = 0.0f;
}
