#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortPersistentResourceItemDefinition.generated.h"

class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPersistentResourceItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> ItemPreviewActorClass;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ExclusiveDesciption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ExclusiveIcon;
    
public:
    UFortPersistentResourceItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventItem() const;

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AccountResource", GetFName());
    }
};

