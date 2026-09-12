#pragma once
#include "CoreMinimal.h"
#include "AudioAnalysisParameterScalar.h"
#include "AudioAnalysisParameterVector.h"
#include "AudioAnalysisSpectralAnalysisSettings.h"
#include "FortSubmixAnalyzerData.generated.h"

USTRUCT(BlueprintType)
struct FFortSubmixAnalyzerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioAnalysisParameterScalar> ScalarParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAudioAnalysisParameterVector> VectorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioAnalysisSpectralAnalysisSettings SpectralAnalysisConfig;
    
    FORTNITEGAME_API FFortSubmixAnalyzerData();
};
