#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement_NPCHasServiceProviderTag.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_NPCHasServiceProviderTag : public UFortControllerRequirement {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag QueryTag;
    
public:
    UFortControllerRequirement_NPCHasServiceProviderTag();
    
};
