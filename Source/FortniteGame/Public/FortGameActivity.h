#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CreativeLoadedLinkData.h"
#include "EMMSRulePreset.h"
#include "EFortGameActivityType.h"
#include "EMMSPrivacy.h"
#include "FortGameActivity.generated.h"

class UFortGameInstance;
class UTexture;
class UTexture2DDynamic;

UCLASS(Blueprintable, MinimalAPI)
class UFortGameActivity : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Mnemonic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SupportCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortGameActivityType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Creator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CreatorAccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Tagline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreviewPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DescriptionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Matchmaking_MaximumNumberOfPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Matchmaking_PlayersPerTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMSRulePreset Matchmaking_MMSType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMMSPrivacy Matchmaking_MMSPrivacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime SortDate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortGameInstance* StoredInstance;
    
public:
    UFortGameActivity();
    
private:
    UFUNCTION(BlueprintCallable)
    void AsyncPreviewLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadedLinkQueryComplete(bool bSuccess, const FString& ErrorMessage, const FCreativeLoadedLinkData& LinkData);
    
    UFUNCTION(BlueprintCallable)
    void OnPreviewRetrieved(bool bSuccess, UTexture2DDynamic* InThumbnailTexture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFavorite() const;
    
};
