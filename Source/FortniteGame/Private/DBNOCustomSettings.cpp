#include "DBNOCustomSettings.h"

FDBNOCustomSettings::FDBNOCustomSettings() {
    Enabled = EDBNOMutatorType::Default;
    TenacityDepletionRate = 0.0f;
    ReviveHealthPercentage = 0.0f;
    bAllowRevives = false;
    bAllowCarry = false;
    TimeToRevive = 0.0f;
    bAlertTeam = false;
    LastManStandingMode = false;
    bAllowInterrogation = false;
    bAllowInterrogationReveal = false;
    SelectedTeam = 0;
    bTeamAffectsAllButSelected = false;
    SelectedClass = 0;
    bClassAffectsAllButSelected = false;
}
