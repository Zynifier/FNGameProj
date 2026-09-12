#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "FortCurieFireEntry.h"
#include "FortCurieFirePropagationManagerTickFunction.h"
#include "FortCurieManagerComponent.h"
#include "FortCurieActorFireEntry.h"
#include "FortCurieFirePropagationManager.generated.h"

class UFortCurieFirePropagationManagerConfig;

UCLASS(Blueprintable, Config=Game)
class UFortCurieFirePropagationManager : public UFortCurieManagerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCurieFirePropagationManagerTickFunction PrimaryTickFunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieActorFireEntry> ActiveActorFires;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCurieFirePropagationManagerConfig* InternalManagerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCurieFireEntry> ActiveFires;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPropagationFuel;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropagationApplicationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PropagationRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PropagationApplicationMagnitudeRandomizationRange;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DefaultFireBoundsExpansion;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConnectivityPointsForFireSpread;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultConnectivityPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HalfAngleForUpwardMobilityCalculation;
    
public:
    UFortCurieFirePropagationManager();
};

