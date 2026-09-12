#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasCompletedQuestObjective.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasCompletedQuestObjective : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
    UFortControllerRequirement_HasCompletedQuestObjective();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
};
