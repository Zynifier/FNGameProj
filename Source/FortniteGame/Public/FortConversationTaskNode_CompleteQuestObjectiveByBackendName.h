#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortConversationTaskNode.h"
#include "FortConversationTaskNode_CompleteQuestObjectiveByBackendName.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode_CompleteQuestObjectiveByBackendName : public UFortConversationTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveBackendName;
    
public:
    UFortConversationTaskNode_CompleteQuestObjectiveByBackendName();
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> Editor_GetValidObjectives() const;
    
};
