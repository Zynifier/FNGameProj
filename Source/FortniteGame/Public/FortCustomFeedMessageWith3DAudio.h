#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortCustomFeedMessageWith2DAudio.h"
#include "FortCustomFeedMessageWith3DAudio.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCustomFeedMessageWith3DAudio : public UFortCustomFeedMessageWith2DAudio {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditionalAudioOffset;
    
public:
    UFortCustomFeedMessageWith3DAudio();
    
};
