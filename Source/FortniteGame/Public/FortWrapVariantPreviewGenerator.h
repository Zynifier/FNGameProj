#pragma once
#include "CoreMinimal.h"
#include "FortCosmeticVariantPreview.h"
#include "FortVariantPreviewGenerator.h"
#include "GameplayTagContainer.h"
#include "FortWrapVariantPreviewGenerator.generated.h"

class UAthenaItemWrapDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortWrapVariantPreviewGenerator : public UFortVariantPreviewGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WrapVariantChannelTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCosmeticVariantPreview BaseVariantPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWrapPreviews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAthenaItemWrapDefinition>> PreviewWrapDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultCustomData;
    
    UFortWrapVariantPreviewGenerator();
    
};
