#include "CustomCharacterPartAnimInstance_Grilled_Cheese_Pack.h"

float UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::SpinFNC(float Speed, float InitialValue) {
    return 0.0f;
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateCracks() {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateCrackSpinLogic(float DeltaTime) {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateFloatCubes() {
}

void UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UpdateSpinSettings() {
}

UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack::UCustomCharacterPartAnimInstance_Grilled_Cheese_Pack() {
    ActiveKill = false;
    crackCount = 0.0f;
    crackSpin = 0.0f;
    crackSpinSpeed = 0.0f;
    InterpSpeed = 0.0f;
    isCrackCount = false;
    KillCount = 0.0f;
    onCrackSpinSpeed = 0.0f;
}
