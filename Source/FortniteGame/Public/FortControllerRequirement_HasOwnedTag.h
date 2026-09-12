#pragma once
#include "CoreMinimal.h"
#include "FortControllerRequirement.h"
#include "GameplayTagContainer.h"
#include "FortControllerRequirement_HasOwnedTag.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement_HasOwnedTag : public UFortControllerRequirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwnedTag;
    
    UFortControllerRequirement_HasOwnedTag();
    
};
