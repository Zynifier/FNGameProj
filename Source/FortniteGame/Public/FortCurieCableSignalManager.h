#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCurieCableSignalManagerTickFunction.h"
#include "FortCurieManagerComponent.h"
#include "FortCurieCableSignalManager.generated.h"

class UFortCurieCableSignalManagerConfig;

UCLASS(Blueprintable, Config=Game)
class UFortCurieCableSignalManager : public UFortCurieManagerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieCableSignalManagerTickFunction PrimaryManagerTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieCableSignalManagerConfig* InternalManagerConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignalsProcessedPerTick;
    
public:
    UFortCurieCableSignalManager();
};

