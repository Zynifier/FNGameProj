#pragma once
#include "CoreMinimal.h"
#include "ContextualMessageCandidate.h"
#include "ContextualMessageConfig.generated.h"

USTRUCT(BlueprintType)
struct FContextualMessageConfig {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FContextualMessageCandidate> ContextualMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultMessage;
    
public:
    FORTNITEGAME_API FContextualMessageConfig();
};
