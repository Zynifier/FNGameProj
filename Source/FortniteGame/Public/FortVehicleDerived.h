#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GearConfig.h"
#include "SpringConfig.h"
#include "FortVehicleDerived.generated.h"

USTRUCT(BlueprintType)
struct FFortVehicleDerived {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpringConfig> Springs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearConfig> InternalGears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGearConfig> InternalSprintGears;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalFrontFrictionPt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocalRearFrictionPt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FrontMassRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RearMassRatio;
    
    FORTNITEGAME_API FFortVehicleDerived();
};
