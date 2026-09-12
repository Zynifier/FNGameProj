#include "FortDoghouseVehicleConfigs.h"

UFortDoghouseVehicleConfigs::UFortDoghouseVehicleConfigs() {
    WheelRotationRange = 1;
    VehicleFrontLowLateralFrictionMultiplier = 1;
    VehicleRearLowLateralFrictionMultiplier = 1;
    VehicleFrontHighLateralFrictionMultiplier = 1;
    VehicleRearHighLateralFrictionMultiplier = 1;
    LowToHighFrictionDuration = 1;
    UphillIncline = 1;
    ReverseToForwardFrontFriction = 1;
    ReverseToForwardRearFriction = 1;
    ReverseToForwardMaxSpeed = 1;
    PropSpeedPerLinearSpeed = 1;
    PropSpeedPerLinearSpeedPassive = 1;
    PropSpeedAccelLerpPerSecond = 1;
    PropSpeedDecelLerpPerSecond = 1;
    TaxiPitchProjTarget = 1;
    MaxAltitudeZ = 1;
    StallAltitudeZ = 1;
    StallTime = 1;
    StuckTimeBeforeStall = 1;
    MinSkipShocksAltitudeZ = 1;
    AltitudeUpdateFrequency = 1;
    ControlStateNetUpdateFrequency = 1;
    ForceHeadingUpdateFrequency = 1;
    AileronRollMatchRate = 0.0f;
    AileronRollRotationalDampingCoefficient = 0.0f;
    AileronRollMaxRotationalDampingTorque = 0.0f;
    DivebombSpeedMinKmh = 0.0f;
    DivebombSpeedMaxKmh = 0.0f;
    DivebombSteerPitchRate = 0.0f;
    DivebombHeadingMatchRate = 0.0f;
    HardRollHeadingMatchRate = 0.0f;
    HardRollHeadingSteerRate = 0.0f;
    HardRollOffsetPercent = 0.0f;
    TimeBeforeStallWithNoPassengersInAir = 0.0f;
    TimeBeforeStallWithNoPassengersOnGround = 0.0f;
    BoostTopSpeedKmh = 0.0f;
    BoostThrust = 0.0f;
    AileronRollDoubleClickSpeed = 0.0f;
    PitchBiasOnGround = 0.0f;
    HeadingAutoCenterRate = 0.0f;
    RollAutoCenterRate = 0.0f;
    AirbrakeDragCoefficient = 0.0f;
}

