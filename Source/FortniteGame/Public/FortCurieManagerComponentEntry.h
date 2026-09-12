#pragma once
#include "CoreMinimal.h"
#include "ECurieManagerComponentPriority.h"
#include "Engine/DataTable.h"
#include "Templates/SubclassOf.h"
#include "FortCurieManagerComponentEntry.generated.h"

class UFortCurieManagerComponent;
class UFortCurieManagerComponentConfig;

USTRUCT(BlueprintType)
struct FFortCurieManagerComponentEntry : public FTableRowBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECurieManagerComponentPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCurieManagerComponent> ManagerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCurieManagerComponentConfig* Config;
    
public:
    FORTNITEGAME_API FFortCurieManagerComponentEntry();
};
