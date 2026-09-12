#include "FortVehicleOutPersistent.h"

FFortVehicleOutPersistent::FFortVehicleOutPersistent() {
    bCanDriveOnIncline = false;
    bWheelsOnGround = false;
    bAnyWheelsOnGround = false;
    bIsTouchingDrivableGround = false;
    bIsAsyncCorrectingOrientation = false;
    bIsTouchingGroundWithoutWheels = false;
}
