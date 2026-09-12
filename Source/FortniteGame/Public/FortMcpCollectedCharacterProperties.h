#pragma once
#include "CoreMinimal.h"
#include "FortMcpCollectedCharacterProperties.generated.h"

USTRUCT(BlueprintType)
struct FFortMcpCollectedCharacterProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestsGiven;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuestsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EncounterTypeFlags;
    
    FORTNITEGAME_API FFortMcpCollectedCharacterProperties();
};
