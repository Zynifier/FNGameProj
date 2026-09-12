#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "PartOverrideData.h"
#include "CustomCharacterPartsByKillOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FCustomCharacterPartsByKillOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat KillThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPartOverrideData> PartOverrideData;
    
    FORTNITEGAME_API FCustomCharacterPartsByKillOverrideData();
};
