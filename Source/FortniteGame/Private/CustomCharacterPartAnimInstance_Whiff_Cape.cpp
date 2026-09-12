#include "CustomCharacterPartAnimInstance_Whiff_Cape.h"

FVector UCustomCharacterPartAnimInstance_Whiff_Cape::CalculateDanceGravity() {
    return FVector{};
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::CollectFinalWindGravity() {
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::CollectWindVector() {
}

void UCustomCharacterPartAnimInstance_Whiff_Cape::SetCompLinearScaleForSkydiving() {
}

UCustomCharacterPartAnimInstance_Whiff_Cape::UCustomCharacterPartAnimInstance_Whiff_Cape() {
    SkydivingVectorForceScalingFactor = 0.0f;
    bIsInTheAir = false;
}
