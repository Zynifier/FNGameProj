#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CapMipsTextureGroup.h"
#include "CapMipsExperimentConfig.generated.h"

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API UCapMipsExperimentConfig : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCapMipsTextureGroup> TextureLODGroups;
    
public:
    UCapMipsExperimentConfig();
    
};
