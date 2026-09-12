#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAnimInput_PlayerSkydiveAnimAsset.h"
#include "FortPlayerSkydiveAnimSet.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSkydiveAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerSkydiveAnimAsset AnimAsset;
    
public:
    UFortPlayerSkydiveAnimSet();
    
};
