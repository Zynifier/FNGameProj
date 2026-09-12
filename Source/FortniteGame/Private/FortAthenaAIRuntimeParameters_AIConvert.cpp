#include "FortAthenaAIRuntimeParameters_AIConvert.h"

UFortAthenaAIRuntimeParameters_AIConvert::UFortAthenaAIRuntimeParameters_AIConvert() {
    bCanBeConverted = false;
    bCanBeConvertedFromDBNO = false;
    bForceKillWhenUnconverted = false;
    bCopyConverterSpecificRelations = false;
    bRemoveFromAllFactions = false;
    ReleaseDistanceSq = 0.0f;
    CheckReleaseConditionsTimeInterval = 0.0f;
    PreConversionTeamIndex = 0;
}
