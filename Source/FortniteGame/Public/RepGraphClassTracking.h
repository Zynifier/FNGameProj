#pragma once
#include "CoreMinimal.h"
#include "RepGraphClassTracking.generated.h"

USTRUCT(BlueprintType)
struct FRepGraphClassTracking {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CSVStatNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeFastPath;
    
    FORTNITEGAME_API FRepGraphClassTracking();
};
