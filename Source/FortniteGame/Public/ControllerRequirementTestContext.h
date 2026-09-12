#pragma once
#include "CoreMinimal.h"
#include "ControllerRequirementTestContext.generated.h"

class AActor;
class AController;

USTRUCT(BlueprintType)
struct FControllerRequirementTestContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* TestSubjectActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* TestSubjectController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* OtherController;
    
    FORTNITEGAME_API FControllerRequirementTestContext();
};
