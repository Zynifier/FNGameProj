#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortBadMatchTrigger.h"
#include "FortDetailedPerfReport.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UFortDetailedPerfReport : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortBadMatchTrigger> BadMatchTriggers;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PhasesToInclude;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double ReportProbability;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCsvProfile;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUploadAllCsvs;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowForcedPerformanceReport;
    
    UFortDetailedPerfReport();
    
};
