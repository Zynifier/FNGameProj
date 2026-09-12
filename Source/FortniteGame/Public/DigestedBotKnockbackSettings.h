#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedBotKnockbackSettings.generated.h"

USTRUCT(BlueprintType)
struct FDigestedBotKnockbackSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery TagQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldAllowCharacterToBeLaunched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShouldStopActiveMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IgnoreMoveInputDuration;
    
public:
    FORTNITEGAME_API FDigestedBotKnockbackSettings();
};
