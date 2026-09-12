#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FortConversationRequirementUtils.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortConversationRequirementUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortConversationRequirementUtils();
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag GetOppositeParticipantTag(const FGameplayTag& MainParticipantID);
    
};
