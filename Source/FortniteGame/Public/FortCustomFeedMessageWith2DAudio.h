#pragma once
#include "CoreMinimal.h"
#include "FortCustomFeedMessageGeneratorBase.h"
#include "FortCustomFeedMessageWith2DAudio.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCustomFeedMessageWith2DAudio : public UFortCustomFeedMessageGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FeedMessageFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* OnTriggeredAudio;
    
public:
    UFortCustomFeedMessageWith2DAudio();
    
};
