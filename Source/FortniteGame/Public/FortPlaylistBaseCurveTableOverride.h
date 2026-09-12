#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistBaseCurveTableOverride.generated.h"

class UCurveTable;

USTRUCT(BlueprintType)
struct FFortPlaylistBaseCurveTableOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> BaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCurveTable> OverrideTable;
    
    FORTNITEGAME_API FFortPlaylistBaseCurveTableOverride();
};
