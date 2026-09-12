#pragma once
#include "CoreMinimal.h"
#include "FortQuestObjectiveCompletion.h"
#include "FortTransientQuestGrant.generated.h"

USTRUCT(BlueprintType)
struct FFortTransientQuestGrant {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortQuestObjectiveCompletion> Objectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreationTime;
    
    FORTNITEGAME_API FFortTransientQuestGrant();
};
