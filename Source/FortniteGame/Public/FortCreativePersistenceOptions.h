#pragma once
#include "CoreMinimal.h"
#include "FortCreativePersistenceOptions.generated.h"

USTRUCT(BlueprintType)
struct FFortCreativePersistenceOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowPlayerToClearData;
    
    FORTNITEGAME_API FFortCreativePersistenceOptions();
};
