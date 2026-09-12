#include "SyncedMontageParams.h"

FSyncedMontageParams::FSyncedMontageParams() {
    SyncedMontage = NULL;
    MontageTarget = EMontageSyncTargetType::Pet;
    PartType = EFortCustomPartType::Head;
    MontageStopBlendTime = 0.0f;
    bSyncMontage = false;
}
