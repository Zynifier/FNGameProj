#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControllerRequirementTestContext.h"
#include "FortControllerRequirement.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortControllerRequirement : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseCondition;
    
public:
    UFortControllerRequirement();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequirementMet(const FControllerRequirementTestContext& RequestContext) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsRequirementMetInternal(const FControllerRequirementTestContext& RequestContext) const;
    
};
