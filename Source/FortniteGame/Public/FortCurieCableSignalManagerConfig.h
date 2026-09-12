#pragma once
#include "CoreMinimal.h"
#include "FortCurieManagerComponentConfig.h"
#include "FortCurieCableSignalManagerConfig.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieCableSignalManagerConfig : public UFortCurieManagerComponentConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignalsProcessedPerTick;
    
    UFortCurieCableSignalManagerConfig();
    
};
