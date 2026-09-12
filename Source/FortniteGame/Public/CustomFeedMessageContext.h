#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomFeedMessageContext.generated.h"

class AFortPlayerStateAthena;

USTRUCT(BlueprintType)
struct FCustomFeedMessageContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> OwningPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OriginLocation;
    
    FORTNITEGAME_API FCustomFeedMessageContext();
};
