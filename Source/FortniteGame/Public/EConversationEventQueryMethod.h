#pragma once
#include "CoreMinimal.h"
#include "EConversationEventQueryMethod.generated.h"

UENUM(BlueprintType)
enum class EConversationEventQueryMethod : uint8 {
    CheckAgainstCurrentConversationParticipant,
    CheckAgainstConversationEntryTag,
};
