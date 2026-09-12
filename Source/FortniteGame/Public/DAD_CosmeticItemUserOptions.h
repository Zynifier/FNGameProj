#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DAD_CosmeticItemUserOption.h"
#include "DAD_CosmeticItemUserOptions.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UDAD_CosmeticItemUserOptions : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CosmeticItemUserOptionsListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDAD_CosmeticItemUserOption> CosmeticItemUserOptionsList;
    
public:
    UDAD_CosmeticItemUserOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FDAD_CosmeticItemUserOption> GetCosmetics() const;
    
};
