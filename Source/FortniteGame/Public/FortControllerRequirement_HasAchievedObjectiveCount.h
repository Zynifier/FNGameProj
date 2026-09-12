#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerRequirement.h"
#include "ThresholdTestConfig.h"
#include "FortControllerRequirement_HasAchievedObjectiveCount.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasAchievedObjectiveCount : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FThresholdTestConfig RequiredCount;
    
    UFortControllerRequirement_HasAchievedObjectiveCount();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
};
