#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_IsQuestObjectiveActive.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_IsQuestObjectiveActive : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ObjectiveStatHandle;
    
    UFortControllerRequirement_IsQuestObjectiveActive();
    
};
