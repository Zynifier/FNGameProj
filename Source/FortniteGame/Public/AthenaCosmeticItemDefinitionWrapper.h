#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinitionWrapper.generated.h"

class UAthenaCosmeticItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaCosmeticItemDefinitionWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAthenaCosmeticItemDefinition> ItemDef;
    
    FORTNITEGAME_API FAthenaCosmeticItemDefinitionWrapper();
};
