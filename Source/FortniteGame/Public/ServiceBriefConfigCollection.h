#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DataDrivenServiceBriefConfig.h"
#include "ServiceBriefConfigCollection.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UServiceBriefConfigCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDataDrivenServiceBriefConfig> ServiceConfigs;
    
    UServiceBriefConfigCollection();
    
};
