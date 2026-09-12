#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortInventoryManager.generated.h"

UCLASS(Blueprintable, Config=Game)
class UFortInventoryManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VkProjectId;
    
public:
    UFortInventoryManager();
};

