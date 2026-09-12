#pragma once
#include "CoreMinimal.h"
#include "FortTournamentStatInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortTournamentStatInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StatDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StatValue;
    
    FORTNITEGAME_API FFortTournamentStatInfo();
};
