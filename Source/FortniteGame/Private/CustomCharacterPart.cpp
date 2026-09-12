#include "CustomCharacterPart.h"

USkeletalMesh* UCustomCharacterPart::GetSkeletalMesh() const {
    return SkeletalMesh.Get();
}

TMap<int32, UMaterialInterface*> UCustomCharacterPart::GetMaterialOverridesByIndex() {
    return TMap<int32, UMaterialInterface*>();
}

EFortCustomPartType UCustomCharacterPart::GetCharacterPartType() const {
    return EFortCustomPartType::Head;
}

TSoftObjectPtr<UParticleSystem> UCustomCharacterPart::GetEffectCascade() const {
    return TSoftObjectPtr<UParticleSystem>();
}

TSoftObjectPtr<UNiagaraSystem> UCustomCharacterPart::GetEffectNiagara() const {
    return TSoftObjectPtr<UNiagaraSystem>();
}

FName UCustomCharacterPart::GetIdleFXSocketName() const {
    return NAME_None;
}

EFortCustomPartType UCustomCharacterPart::GetPartType() const {
    return EFortCustomPartType::Head;
}

bool UCustomCharacterPart::ShouldAutoActivate() const {
    return false;
}

UCustomCharacterPart::UCustomCharacterPart() {
    GenderPermitted = EFortCustomGender::Male;
    BodyTypesPermitted = EFortCustomBodyType::All;
    CharacterPartType = EFortCustomPartType::Head;
    bGameplayRelevantCosmeticPart = false;
    bAttachToSocket = true;
    bIgnorePart = false;
    AdditionalData = NULL;
    FrontEndBackPreviewRotationOffset = 1;
    bSinglePieceMesh = false;
    bSupportsColorSwatches = true;
    bAllowStaticRenderPath = false;
    MaterialOverrideFlags = 0;
    AuthoredData = NULL;
    bShouldHideBonesForThisPart = false;
    IgnoredMaterialOverrideFlags = 0;
    bUseIdleFXNativeCustomAttachmentParams = false;
    bAutoActivate = false;
}

