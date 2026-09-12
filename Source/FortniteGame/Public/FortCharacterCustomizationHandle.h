#pragma once
#include "CoreMinimal.h"
#include "FortCharacterCustomizationHandle.generated.h"

USTRUCT(BlueprintType)
struct FFortCharacterCustomizationHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Handle;
    
public:
    FORTNITEGAME_API FFortCharacterCustomizationHandle();
};
