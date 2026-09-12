#pragma once
#include "CoreMinimal.h"
#include "EDataAssetDirectoryUpdateStatus.h"
#include "PlaylistUserOptionEnum.h"
#include "PlaylistUserOptionDADCosmetic.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionDADCosmetic : public UPlaylistUserOptionEnum {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CosmeticItemUserOptionsListName;
    
public:
    UPlaylistUserOptionDADCosmetic();
    
    UFUNCTION(BlueprintCallable)
    void Init();
    
    UFUNCTION(BlueprintCallable)
    void OnDADUpdateComplete(EDataAssetDirectoryUpdateStatus Result);
    
    UFUNCTION(BlueprintCallable)
    void UpdateData();
    
};
