#include "FortAthenaMutator_DBNOSetting.h"
#include "Net/UnrealNetwork.h"

AFortAthenaMutator_DBNOSetting* AFortAthenaMutator_DBNOSetting::GetDBNOSettingsMutator(const AFortMinigame* Minigame) {
    return NULL;
}

void AFortAthenaMutator_DBNOSetting::UnsetDBNOSettings(const AActor* ActorRemovingSettings) {
}

void AFortAthenaMutator_DBNOSetting::SetDBNOSettingsAndOverride(FDBNOCustomSettings InDBNOSettings, AActor* ActorApplyingSettings) {
}

void AFortAthenaMutator_DBNOSetting::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_DBNOSetting, SettingsByActor);
}

AFortAthenaMutator_DBNOSetting::AFortAthenaMutator_DBNOSetting() {
    DBNOSetting = EDBNOMutatorType::Default;
}

