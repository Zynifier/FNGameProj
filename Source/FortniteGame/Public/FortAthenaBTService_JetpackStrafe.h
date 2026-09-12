#pragma once
#include "CoreMinimal.h"
#include "FortAthenaBTService_Jump.h"
#include "FortAthenaBTService_JetpackStrafe.generated.h"

class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JetpackStrafeExecutionStatusName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* CacheEMDigestedSkillSet;
    
public:
    UFortAthenaBTService_JetpackStrafe();
    
};
