#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortCustomizationAssetsToLoad.h"
#include "FortCustomizationAssetLoader.generated.h"

class AFortPlayerPawn;
class UFortItemDefinition;

UCLASS(Blueprintable)
class UFortCustomizationAssetLoader : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCustomizationAssetsToLoad CurrentAssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortCustomizationAssetsToLoad PendingAssetsToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> CurrentContentOnDemandItemDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> AllLoadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* PawnForOnDemandContentRelevance;
    
public:
    UFortCustomizationAssetLoader();
};

