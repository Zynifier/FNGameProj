#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortCreativeDiscoveryTestCohort.h"
#include "FortCreativeDiscoverySurface.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCreativeDiscoverySurface : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SurfaceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeDiscoveryTestCohort> TestCohorts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GlobalLinkCodeBlacklist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> GlobalLinkCodeWhitelist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsResolvedDataDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasResolvedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ResolvedRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> ResolvedTestCohortNames;
    
public:
    UFortCreativeDiscoverySurface();
    
};
