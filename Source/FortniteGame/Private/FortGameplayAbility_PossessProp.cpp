#include "FortGameplayAbility_PossessProp.h"
#include "Templates/SubclassOf.h"

void UFortGameplayAbility_PossessProp::SetAllowedPropTable(UDataTable* InAllowedPropTable) {
}

TSubclassOf<ABuildingActor> UFortGameplayAbility_PossessProp::GetAllowedPropClassByIndex(int32 AllowedPropIndex) const {
    return NULL;
}

FPossessPropClasses UFortGameplayAbility_PossessProp::GetAllowedPropDataByIndex(int32 AllowedPropIndex) const {
    return FPossessPropClasses{};
}

float UFortGameplayAbility_PossessProp::GetPreviewScaleByIndex(int32 AllowedPropIndex) const {
    return 0.0f;
}

UFortGameplayAbility_PossessProp::UFortGameplayAbility_PossessProp() {
    DefaultAllowedPropTable = NULL;
    AllowedPropTable = NULL;
}

