#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "GameplayTagContainer.h"
#include "EFortDisplayGender.h"
#include "EFortPlayerAnimBodyType.h"
#include "FortAnimInput_Facial.h"
#include "FortAnimInput_HandIK.h"
#include "FortAnimInput_PelvisAdjustment.h"
#include "FortAnimInput_RandomizeMontageSection.h"
#include "FortPlayMontageForGameplayTagQueryInterface.h"
#include "GameplayTagAnimations.h"
#include "FortAnimInput_PlayerGliderAnimAsset.h"
#include "FortAnimInput_Skydiving.h"
#include "FortAnimInput_StandingPawnAnimAsset.h"
#include "FortBaseAnimInstance.h"
#include "FrontendAnimInstance.generated.h"

class AFortPlayerPawn;
class UAnimMontage;

class AFortPlayerParachute;
class AFortWeapon;
class UAnimNotify;
class UFortItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFrontendAnimInstance : public UFortBaseAnimInstance, public IFortPlayMontageForGameplayTagQueryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsSkydiving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ContrailDiveFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHandIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsPlayingEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBodyTypeManuallySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsCharacterCustomizationLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bLookingAtBackpack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsRebirth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PelvisAdjustment PelvisAdjustmentInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_HandIK HandIKInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortPlayerAnimBodyType AnimBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Facial FacialInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_RandomizeMontageSection RandomizeMontageSectionInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float HandIKRetargetingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RightHandIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeftHandIKAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float IdlePelvisOffsetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector IdlePelvisOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteHipOffsetAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteHipOffsetInterpSpeed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* FortPlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortDisplayGender::Type> Gender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroAnimation_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* IntroAnimation_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroAnimation_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* OutroAnimation_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SelectedAnimation_Female;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* SelectedAnimation_Male;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanPlayCustomAnimations: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDontCrossArms: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bNoHandsOnHips: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAnimations GameplayTagAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAnimations FemaleGameplayTagAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagAnimations MaleGameplayTagAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset CurrentAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetMale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_StandingPawnAnimAsset DefaultAnimSetFemale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerGliderAnimAsset CurrentGliderAnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Skydiving Skydiving;
    
public:
    UFrontendAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHidePropsDuringBlend(UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable)
    void PlaySelected();
    
    UFUNCTION(BlueprintCallable)
    void PlayOutro();
    
    UFUNCTION(BlueprintCallable)
    void PlayIntro();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayMontageFromGameplayTagQuery(const FGameplayTagQuery& MatchingQuery, UAnimMontage* MontagePlaying);
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void AnimNotify_PlayFireFX(const UAnimNotify* Notify);
    
    UFUNCTION(BlueprintCallable)
    bool IsInLobby();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedItemChanged(const UFortItemDefinition* FocusedItem, const AFortWeapon* EquippedWeapon, const AFortPlayerParachute* CurrentParachute);
    
};

