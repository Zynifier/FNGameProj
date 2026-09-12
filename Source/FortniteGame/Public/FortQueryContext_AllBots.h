#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "GameplayTagContainer.h"
#include "FortQueryContext_AllBots.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortQueryContext_AllBots : public UEnvQueryContext {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeOnlyAthenaGameParticipantBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery BotTagQuery;
    
public:
    UFortQueryContext_AllBots();
    
};
