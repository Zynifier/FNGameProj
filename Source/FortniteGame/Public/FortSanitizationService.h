#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SanitizationData.h"
#include "FortSanitizationService.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortSanitizationService : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FSanitizationData> PendingRequests;
    
public:
    UFortSanitizationService();
    
};
