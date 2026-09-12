#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPageItemTileSize.h"
#include "AthenaSeasonItemEntryBase.generated.h"

class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaSeasonItemEntryBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPageItemTileSize TileSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> CustomButtonIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPRMTracked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PRMOwnedParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PRMRequiredRewardsParamName;
    
    UAthenaSeasonItemEntryBase();
    
};
