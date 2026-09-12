#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "AthenaJumpPenalty.h"
#include "AttributeSet.h"
#include "FortAthenaMutator_JumpPenalty.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class AFortAthenaMutator_JumpPenalty : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyJumpPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOverridePenalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaJumpPenalty> Penalties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bOverrideResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ResetTime;
    
public:
    AFortAthenaMutator_JumpPenalty();
private:
    UFUNCTION(BlueprintCallable)
    void OnFortPawnChanged(AFortPawn* NewPawn);
    
};

