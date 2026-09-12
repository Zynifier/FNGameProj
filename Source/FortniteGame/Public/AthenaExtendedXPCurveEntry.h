#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaExtendedXPCurveEntry.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FAthenaExtendedXPCurveEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UntilLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortItemDefinition> RewardItemAssetPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RewardItemCountPerLevel;
    
    FORTNITEGAME_API FAthenaExtendedXPCurveEntry();
};

