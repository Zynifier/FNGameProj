#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "PlaylistUserOptions.generated.h"

class UPlaylistUserOptionBase;

class UPlaylistUserOptionsFilter;

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptions : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportNoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPlaylistUserOptionBase*> Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UPlaylistUserOptionsFilter>> OptionFilters;
    
    UPlaylistUserOptions();
};

