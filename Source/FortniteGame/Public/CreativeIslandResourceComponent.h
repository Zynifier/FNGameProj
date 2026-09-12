#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RequestResourcesSignatureDelegate.h"
#include "CreativeIslandResourceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UCreativeIslandResourceComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestResourcesSignature RequestResourcesDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestResourcesSignature FreeResourcesDelegate;
    
    UCreativeIslandResourceComponent();
    
};
