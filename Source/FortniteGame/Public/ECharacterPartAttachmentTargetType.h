#pragma once
#include "CoreMinimal.h"
#include "ECharacterPartAttachmentTargetType.generated.h"

UENUM(BlueprintType)
enum class ECharacterPartAttachmentTargetType : uint8 {
    RootComponent,
    SkeletalMeshForAssociatedPlayerPawnPartType,
};
