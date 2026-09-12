#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "FortCurieManagerComponentConfig.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortCurieManagerComponentConfig : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ConfigTag;
    
public:
    UFortCurieManagerComponentConfig();
    
};
