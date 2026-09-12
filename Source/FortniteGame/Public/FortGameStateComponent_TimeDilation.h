#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameStateComponent.h"
#include "FortGameStateComponent_TimeDilation.generated.h"

class UCurveFloat;
class UFortAthenaCustomTimeDilationManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortGameStateComponent_TimeDilation : public UFortGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* EndGameTimeDilationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat EndGameTimeDilationDuration;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaCustomTimeDilationManager* TimeDilationManager;
    
public:
    UFortGameStateComponent_TimeDilation();
    
};
