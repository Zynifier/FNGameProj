#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "FortControllerRequirement_HasEarnedAccolade.generated.h"

class UFortAccoladeItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasEarnedAccolade : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAccoladeItemDefinition> AccoladeDefinition;
    
public:
    UFortControllerRequirement_HasEarnedAccolade();
    
};
