#pragma once
#include "CoreMinimal.h"
#include "FortPlaylistBaseDataTableOverride.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FFortPlaylistBaseDataTableOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> BaseTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> OverrideTable;
    
    FORTNITEGAME_API FFortPlaylistBaseDataTableOverride();
};
