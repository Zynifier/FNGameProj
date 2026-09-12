#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaZipline.h"
#include "FortAthenaSplineZipline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaSplineZipline : public AFortAthenaZipline {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* ZiplineSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AttachLinesToPolesHotfix;
    
public:
    AFortAthenaSplineZipline();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CheckZiplineDisableHotfix();
    
};
