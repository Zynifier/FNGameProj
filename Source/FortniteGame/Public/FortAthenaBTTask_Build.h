#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "FortAthenaBTTask_Build.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaBTTask_Build : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExecutionStatusKeyName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FocalPointName;
    
public:
    UFortAthenaBTTask_Build();
    
};
