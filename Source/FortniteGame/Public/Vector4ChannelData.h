#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Vector4ChannelData.generated.h"

USTRUCT(BlueprintType)
struct FVector4ChannelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 MaxMagnitudes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector4 Value;
    
    FORTNITEGAME_API FVector4ChannelData();
};
