#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaTeamHUDInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaTeamHUDInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    FORTNITEGAME_API FFortAthenaTeamHUDInfo();
};
