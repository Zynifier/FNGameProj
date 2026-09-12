#pragma once
#include "CoreMinimal.h"
#include "BuoyancyComponent.h"
#include "Engine/DataAsset.h"
#include "FortPhysicsObjectBuoyancyData.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPhysicsObjectBuoyancyData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultPontoonRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeInWaterToSink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuoyancyData BuoyancyData;
    
    UFortPhysicsObjectBuoyancyData();
    
};
