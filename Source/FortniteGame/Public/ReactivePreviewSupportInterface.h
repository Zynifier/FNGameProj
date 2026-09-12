#pragma once
#include "CoreMinimal.h"
#include "CosmeticVariantInfo.h"
#include "UObject/Interface.h"
#include "ReactivePreviewSupportInterface.generated.h"

class AFortCosmeticReactivePreview;

UINTERFACE(Blueprintable)
class FORTNITEGAME_API UReactivePreviewSupportInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IReactivePreviewSupportInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewReactiveSmoothUpdate(float CurrentValue, const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewReactiveSteppedUpdate(int32 CurrentValue, const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartPreviewReactiveResponse(const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopPreviewReactiveResponse(const FCosmeticVariantInfo& ChannelAndVariant, AFortCosmeticReactivePreview* Preview);
    
};
