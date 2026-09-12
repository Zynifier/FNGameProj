#include "NoWeaponZoneTrackedData.h"

void UNoWeaponZoneTrackedData::AddTrackedDestroy() {
}

void UNoWeaponZoneTrackedData::OnMinigameEnded() {
}

void UNoWeaponZoneTrackedData::OnMinigameStarted() {
}

void UNoWeaponZoneTrackedData::SetupMinigame(AFortMinigame* InMinigame) {
}

void UNoWeaponZoneTrackedData::StartResetDestroyCountTimer() {
}

void UNoWeaponZoneTrackedData::TrackNewDevice() {
}

void UNoWeaponZoneTrackedData::UntrackDevice() {
}

int32 UNoWeaponZoneTrackedData::GetDestroyCount() const {
    return 0;
}

int32 UNoWeaponZoneTrackedData::GetMaxDestroyCount() const {
    return 0;
}

int32 UNoWeaponZoneTrackedData::GetMaxDestroyCountPerTrackedDevice() const {
    return 0;
}

bool UNoWeaponZoneTrackedData::IsTrackedDestroyAtLimit() const {
    return false;
}

UNoWeaponZoneTrackedData::UNoWeaponZoneTrackedData() {
    Minigame = NULL;
}
