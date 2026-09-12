#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CreativeIslandResource.h"
#include "CreativeIslandResourceManagerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UCreativeIslandResourceManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreativeIslandResource> Resources;
    
public:
    UCreativeIslandResourceManagerComponent();
    
    UFUNCTION(BlueprintCallable)
    void FreeResource(const FName Tag, const FVector& WorldLocation);
    
    UFUNCTION(BlueprintCallable)
    bool RequestResource(const FName Tag, const FVector& WorldLocation);
    
};
