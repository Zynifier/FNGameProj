#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlaylistUserOptionsFilter.h"
#include "PlaylistUserOptionsFilterRange.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionsFilterRange : public UPlaylistUserOptionsFilter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint RangeToPreserve;
    
public:
    UPlaylistUserOptionsFilterRange();
    
};
