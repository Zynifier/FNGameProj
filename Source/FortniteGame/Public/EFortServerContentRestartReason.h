#pragma once
#include "CoreMinimal.h"
#include "EFortServerContentRestartReason.generated.h"

UENUM(BlueprintType)
enum class EFortServerContentRestartReason : uint8 {
    None,
    CreativeCuratedHubChanged,
    CreativeFeaturedIslandsChanged,
    CreativePreloadRevisionChanged = 0x4,
    CreativePlaylistConditionalFlagsChanged = 0x8,
    GameFeaturePluginDisabled = 0x10,
    ForceRestartEventFlagsChanged = 0x20,
    ForceRestartFlagActiveStateChanged = 0x40,
};
