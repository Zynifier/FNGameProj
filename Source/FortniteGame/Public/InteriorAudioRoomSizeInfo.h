#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteriorAudioRoomSizeInfo.generated.h"

USTRUCT(BlueprintType)
struct FInteriorAudioRoomSizeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SizeTag;
    
    FORTNITEGAME_API FInteriorAudioRoomSizeInfo();
};
