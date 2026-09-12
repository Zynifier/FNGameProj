#pragma once
#include "CoreMinimal.h"
#include "ESavePlayerQuestUpdate.generated.h"

UENUM(BlueprintType)
enum class ESavePlayerQuestUpdate : uint8 {
    QuestGiven,
    QuestCompleted,
};
