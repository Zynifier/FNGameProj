#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "OnBuildingAttributeSetHealthChangedSignatureDelegate.h"
#include "BuildingProp_DestructionObject.generated.h"

UCLASS(Blueprintable)
class ABuildingProp_DestructionObject : public ABuildingProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildingAttributeSetHealthChangedSignature OnBuildingAttributeSetHealthChangedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> ObjectiveNameTexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveTextTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ObjectiveText;
    
public:
    ABuildingProp_DestructionObject();
private:
    UFUNCTION(BlueprintCallable)
    void OnBuildingAttributeSetHealthChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetObjectiveNameText(const int32 ObjectiveNameIndex) const;
    
};

