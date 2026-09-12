#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorialDefinition.h"
#include "GameplayTagContainer.h"
#include "UFortContextualTutorialDefinition_GameplayEvent.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UUFortContextualTutorialDefinition_GameplayEvent : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivationEventsToTrack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CompletionEventsToTrack;
    
    UUFortContextualTutorialDefinition_GameplayEvent();
    
};
