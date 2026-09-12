#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "RadiusTrackingDisplayInfo.h"
#include "RadiusTrackingDisplayInfoArray.generated.h"

USTRUCT(BlueprintType)
struct FRadiusTrackingDisplayInfoArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRadiusTrackingDisplayInfo> Items;
    
    FORTNITEGAME_API FRadiusTrackingDisplayInfoArray();
};
