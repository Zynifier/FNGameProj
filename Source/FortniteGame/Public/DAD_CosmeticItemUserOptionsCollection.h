#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DAD_CosmeticItemUserOptionsCollection.generated.h"

class UDAD_CosmeticItemUserOptions;

UCLASS(Blueprintable)
class FORTNITEGAME_API UDAD_CosmeticItemUserOptionsCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDAD_CosmeticItemUserOptions*> CosmeticItemUserOptionAssets;
    
public:
    UDAD_CosmeticItemUserOptionsCollection();
    
};
