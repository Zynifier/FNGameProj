#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AthenaItemShopOfferDisplayData.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaItemShopOfferDisplayData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Presentations;
    
    UAthenaItemShopOfferDisplayData();
    
    UFUNCTION(BlueprintCallable)
    void AddPresentation(UMaterialInterface* PresentationToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasNoPresentations() const;
    
};
