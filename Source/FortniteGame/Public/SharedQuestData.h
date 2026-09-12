#pragma once
#include "CoreMinimal.h"
#include "SharedQuestData.generated.h"

class UFortQuestItem;

USTRUCT(BlueprintType)
struct FSharedQuestData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortQuestItem*> SharedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* PinnedQuest;
    
    FORTNITEGAME_API FSharedQuestData();
};
