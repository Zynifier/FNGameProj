#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "FortControllerMiniMapComponentVisibility.h"
#include "FortControllerMiniMapComponentVisibilitiesArray.generated.h"

USTRUCT(BlueprintType)
struct FFortControllerMiniMapComponentVisibilitiesArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortControllerMiniMapComponentVisibility> Entries;
    
    FORTNITEGAME_API FFortControllerMiniMapComponentVisibilitiesArray();
};
