#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasQuestToTurnIn.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasQuestToTurnIn : public UFortControllerRequirement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResolveQuestDetailsFromServiceProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> SoftQuestToTurnIn;
    
public:
    UFortControllerRequirement_HasQuestToTurnIn();
    
};
