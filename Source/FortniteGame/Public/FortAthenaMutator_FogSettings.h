#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAthenaFogDensityOverride.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_FogSettings.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_FogSettings : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaFogDensityOverride FogDensityOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogColor;
    
public:
    AFortAthenaMutator_FogSettings();
    
    UFUNCTION(BlueprintCallable)
    void SetFogColorIndexOverride(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFogDensityOverride(EAthenaFogDensityOverride NewValue);
    
    UFUNCTION(BlueprintCallable)
    void UnsetFogOverrides();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetFogColorOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAthenaFogDensityOverride GetFogDensityOverride() const;
    
};
