#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Engine/DataAsset.h"
#include "FortCurieSettings.generated.h"

class UFortCurieFXSettings;
class UObject;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortCurieSettings : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> CurieManagerClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCurieFXSettings> CurieFXSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WaterBodyInteractionMagnitude;
    
public:
    UFortCurieSettings();
    
};
