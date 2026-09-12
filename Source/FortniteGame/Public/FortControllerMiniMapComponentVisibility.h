#pragma once
#include "CoreMinimal.h"
#include "EMiniMapComponentDiscoverableVisibility.h"
#include "Engine/NetSerialization.h"
#include "FortControllerMiniMapComponentVisibility.generated.h"

class UFortMiniMapComponent_Discoverable;

USTRUCT(BlueprintType)
struct FFortControllerMiniMapComponentVisibility : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMiniMapComponent_Discoverable* MiniMapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniMapComponentDiscoverableVisibility Visibility;
    
    FORTNITEGAME_API FFortControllerMiniMapComponentVisibility();
};
