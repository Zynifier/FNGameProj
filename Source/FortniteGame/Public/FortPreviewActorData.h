#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPreviewActorData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortPreviewActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InfluenceDistance;
    
    FORTNITEGAME_API FFortPreviewActorData();
};
