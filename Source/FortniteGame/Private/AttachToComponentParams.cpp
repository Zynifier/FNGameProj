#include "AttachToComponentParams.h"

FAttachToComponentParams::FAttachToComponentParams() {
    LocationRule = EAttachmentRule::KeepRelative;
    RotationRule = EAttachmentRule::KeepRelative;
    ScaleRule = EAttachmentRule::KeepRelative;
    bWeldSimulatedBodies = false;
}
