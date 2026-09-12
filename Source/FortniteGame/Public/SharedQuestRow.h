#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SharedQuestRow.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FSharedQuestRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlaylistNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> PlaylistWeights;
    
    FORTNITEGAME_API FSharedQuestRow();
};
