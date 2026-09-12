#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PartyMemberFrontEndMapMarker.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberFrontEndMapMarker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MarkerLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSet;
    
    FORTNITEGAME_API FPartyMemberFrontEndMapMarker();
};
