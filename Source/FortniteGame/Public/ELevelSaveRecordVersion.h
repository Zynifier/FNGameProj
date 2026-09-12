#pragma once
#include "CoreMinimal.h"
#include "ELevelSaveRecordVersion.generated.h"

UENUM(BlueprintType)
namespace ELevelSaveRecordVersion {
    enum Type {
        CloudSaveInfoAdded,
        TimestampConversion,
        SoftActorClassReferences,
        SoftActorComponentClassReferences,
        DuplicateNewActorRecordsRemoved,
        StartOfResaveWhenNotLatestVersion,
        LowerCloseThresholdForDuplicates,
        DeprecatedDeleteAndNewActorRecords,
        DependenciesFromSerializedWorld,
        RemovingSerializedDependencies,
        AddingVolumeInfoRecordsMap,
        AddingVolumeGridDependency,
        AddingScale,
        AddingDataHash,
        AddedIslandTemplateId,
        AddedLevelStreamedDeleteRecord,
        UsingSaveActorGUID,
        UsingActorFNameForEditorSpawning,
        AddedPlayerPersistenceUserWipeNumber,
        VersionPlusOne,
        LatestVersion = 0x12,
        ELevelSaveRecordVersion_MAX = 0x14,
    };
}

