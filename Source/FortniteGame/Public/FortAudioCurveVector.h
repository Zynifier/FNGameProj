#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Curves/CurveVector.h"
#include "AudioCurveInfo.h"
#include "Curves/CurveFloat.h"
#include "EVectorCurveFloat.h"
#include "EVectorCurveType.h"
#include "FortAudioCurveVector.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAudioCurveVector : public UCurveVector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExternalCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> AudioCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> OriginalAudioCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioCurveInfo> ModifiedAudioCurves;
    
public:
    UFortAudioCurveVector();

    // UCurveVector is MinimalAPI, so the engine does not export its FCurveOwnerInterface overrides;
    // overriding them here keeps this class's vtable from referencing them.
    virtual TArray<FRichCurveEditInfoConst> GetCurves() const override;
    virtual TArray<FRichCurveEditInfo> GetCurves() override;
    virtual bool IsValidCurve(FRichCurveEditInfo CurveInfo) override;

    UFUNCTION(BlueprintCallable)
    void InitializeAudioCurveVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAudioCurveVectorValue(const float InTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLargestMaxDistance() const;
    
    UFUNCTION(BlueprintCallable)
    void ExportCurves(EVectorCurveType CurveType);
    
    UFUNCTION(BlueprintCallable)
    void ImportAttenuationCurve(EVectorCurveFloat Element, UPARAM(Ref) FRuntimeFloatCurve& Curve, float MaxDistance);
    
    UFUNCTION(BlueprintCallable)
    void ImportFloatCurve(EVectorCurveFloat Element, UCurveFloat* Curve);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCurves(EVectorCurveType CurveType);
    
};
