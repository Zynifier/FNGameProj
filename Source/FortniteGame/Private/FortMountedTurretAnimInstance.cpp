#include "FortMountedTurretAnimInstance.h"

UFortMountedTurretAnimInstance::UFortMountedTurretAnimInstance() {
    MountedTurret = NULL;
    bIsUsingMountedTurret = false;
    AimingYaw = 1;
    AimingPitch = 1;
    PedalScaler = 1;
    TurnRate = 0.0f;
}

