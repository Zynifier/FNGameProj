#include "FortGameplayCueNotifyAthena_AIAlertState.h"

void AFortGameplayCueNotifyAthena_AIAlertState::AlertStateHideTagCallback(const FGameplayTag Tag, int32 NewCount) {
}

void AFortGameplayCueNotifyAthena_AIAlertState::HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* Pawn) {
}

AFortGameplayCueNotifyAthena_AIAlertState::AFortGameplayCueNotifyAthena_AIAlertState() {
    CustomPrimitiveDataFloatIndex = 0;
    StealthMeterStartValue = 1;
    CurrentStealthMeterPctFilled = 1;
    CachedAlertStateComp = NULL;
    CachedMeshComp = NULL;
    SpriteMeshComponent = NULL;
    FillIconDataFloatIndex = 0;
    CurrentGameplayEffectLevel = 0;
    CurrentAlertStateComponent = NULL;
}

