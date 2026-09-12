#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_IsQuestActive.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_IsQuestActive : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath QuestDefinition;
    
    UFortControllerRequirement_IsQuestActive();
    
};
