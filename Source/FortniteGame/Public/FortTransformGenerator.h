#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TransformGeneratorRequest.h"
#include "TransformGeneratorResult.h"
#include "FortTransformGenerator.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortTransformGenerator : public UObject {
    GENERATED_BODY()
public:
    UFortTransformGenerator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GenerateOutputTransform(const FTransformGeneratorRequest& RequestIn, FTransformGeneratorResult& ResultOut) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GenerateOutputTransformInternal(const FTransformGeneratorRequest& RequestIn, FTransformGeneratorResult& ResultOut) const;
    
};
