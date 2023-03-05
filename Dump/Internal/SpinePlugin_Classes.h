#pragma once 
#include <SpinePlugin_Structs.h>
 
 
 
//Class SpinePlugin.SpineSkeletonComponent Size 264
// Inherited 176 bytes 
class USpineSkeletonComponent : public UActorComponent
{

 public: 
	struct USpineAtlasAsset* Atlas;  // Offset: 176 Size: 8
	struct USpineSkeletonDataAsset* SkeletonData;  // Offset: 184 Size: 8
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform;  // Offset: 192 Size: 16
	struct FMulticastInlineDelegate AfterUpdateWorldTransform;  // Offset: 208 Size: 16
	char pad_224[40];  // Offset: 224 Size: 40



 // Functions 
 public:
	void UpdateWorldTransform(); // Function SpinePlugin.SpineSkeletonComponent.UpdateWorldTransform
	void SetToSetupPose(); // Function SpinePlugin.SpineSkeletonComponent.SetToSetupPose
	void SetSlotsToSetupPose(); // Function SpinePlugin.SpineSkeletonComponent.SetSlotsToSetupPose
	void SetSlotColor(struct FString SlotName, struct FColor Color); // Function SpinePlugin.SpineSkeletonComponent.SetSlotColor
	bool SetSkins(struct TArray<struct FString>& SkinNames); // Function SpinePlugin.SpineSkeletonComponent.SetSkins
	bool SetSkin(struct FString SkinName); // Function SpinePlugin.SpineSkeletonComponent.SetSkin
	void SetScaleY(float ScaleY); // Function SpinePlugin.SpineSkeletonComponent.SetScaleY
	void SetScaleX(float ScaleX); // Function SpinePlugin.SpineSkeletonComponent.SetScaleX
	void SetBoneWorldPosition(struct FString BoneName, struct FVector& position); // Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition
	void SetBonesToSetupPose(); // Function SpinePlugin.SpineSkeletonComponent.SetBonesToSetupPose
	bool SetAttachment(struct FString SlotName, struct FString AttachmentName); // Function SpinePlugin.SpineSkeletonComponent.SetAttachment
	bool HasSlot(struct FString SlotName); // Function SpinePlugin.SpineSkeletonComponent.HasSlot
	bool HasSkin(struct FString SkinName); // Function SpinePlugin.SpineSkeletonComponent.HasSkin
	bool HasBone(struct FString BoneName); // Function SpinePlugin.SpineSkeletonComponent.HasBone
	bool HasAnimation(struct FString AnimationName); // Function SpinePlugin.SpineSkeletonComponent.HasAnimation
	void GetSlots(struct TArray<struct FString>& Slots); // Function SpinePlugin.SpineSkeletonComponent.GetSlots
	void GetSkins(struct TArray<struct FString>& Skins); // Function SpinePlugin.SpineSkeletonComponent.GetSkins
	float GetScaleY(); // Function SpinePlugin.SpineSkeletonComponent.GetScaleY
	float GetScaleX(); // Function SpinePlugin.SpineSkeletonComponent.GetScaleX
	struct FTransform GetBoneWorldTransform(struct FString BoneName); // Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform
	void GetBones(struct TArray<struct FString>& Bones); // Function SpinePlugin.SpineSkeletonComponent.GetBones
	void GetAnimations(struct TArray<struct FString>& Animations); // Function SpinePlugin.SpineSkeletonComponent.GetAnimations
	float getAnimationDuration(struct FString AnimationName); // Function SpinePlugin.SpineSkeletonComponent.getAnimationDuration
}; 
 
 


//Class SpinePlugin.SpineBoneFollowerComponent Size 560
// Inherited 528 bytes 
class USpineBoneFollowerComponent : public USceneComponent
{

 public: 
	struct AActor* Target;  // Offset: 520 Size: 8
	struct FString BoneName;  // Offset: 528 Size: 16
	char pad_552_1 : 7;  // Offset: 552 Size: 1
	bool UseComponentTransform : 1;  // Offset: 544 Size: 1
	char pad_553_1 : 7;  // Offset: 553 Size: 1
	bool UsePosition : 1;  // Offset: 545 Size: 1
	char pad_554_1 : 7;  // Offset: 554 Size: 1
	bool UseRotation : 1;  // Offset: 546 Size: 1
	char pad_555_1 : 7;  // Offset: 555 Size: 1
	bool UseScale : 1;  // Offset: 547 Size: 1
	char pad_556[4];  // Offset: 556 Size: 4



 // Functions 
 public:
}; 
 
 


//Class SpinePlugin.SpineAtlasAsset Size 88
// Inherited 40 bytes 
class USpineAtlasAsset : public UObject
{

 public: 
	struct TArray<struct UTexture2D*> atlasPages;  // Offset: 40 Size: 16
	char pad_56[8];  // Offset: 56 Size: 8
	struct FString rawData;  // Offset: 64 Size: 16
	struct FName atlasFileName;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class SpinePlugin.SpineBoneDriverComponent Size 560
// Inherited 528 bytes 
class USpineBoneDriverComponent : public USceneComponent
{

 public: 
	struct AActor* Target;  // Offset: 520 Size: 8
	struct FString BoneName;  // Offset: 528 Size: 16
	char pad_552_1 : 7;  // Offset: 552 Size: 1
	bool UseComponentTransform : 1;  // Offset: 544 Size: 1
	char pad_553_1 : 7;  // Offset: 553 Size: 1
	bool UsePosition : 1;  // Offset: 545 Size: 1
	char pad_554_1 : 7;  // Offset: 554 Size: 1
	bool UseRotation : 1;  // Offset: 546 Size: 1
	char pad_555_1 : 7;  // Offset: 555 Size: 1
	bool UseScale : 1;  // Offset: 547 Size: 1
	char pad_556[4];  // Offset: 556 Size: 4



 // Functions 
 public:
	void BeforeUpdateWorldTransform(struct USpineSkeletonComponent* Skeleton); // Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform
}; 
 
 


//Class SpinePlugin.TrackEntry Size 144
// Inherited 40 bytes 
class UTrackEntry : public UObject
{

 public: 
	struct FMulticastInlineDelegate animationStart;  // Offset: 40 Size: 16
	struct FMulticastInlineDelegate AnimationInterrupt;  // Offset: 56 Size: 16
	struct FMulticastInlineDelegate AnimationEvent;  // Offset: 72 Size: 16
	struct FMulticastInlineDelegate AnimationComplete;  // Offset: 88 Size: 16
	struct FMulticastInlineDelegate animationEnd;  // Offset: 104 Size: 16
	struct FMulticastInlineDelegate AnimationDispose;  // Offset: 120 Size: 16
	char pad_136[8];  // Offset: 136 Size: 8



 // Functions 
 public:
	void SetTrackTime(float trackTime); // Function SpinePlugin.TrackEntry.SetTrackTime
	void SetTrackEnd(float trackEnd); // Function SpinePlugin.TrackEntry.SetTrackEnd
	void SetTimeScale(float TimeScale); // Function SpinePlugin.TrackEntry.SetTimeScale
	void SetMixTime(float mixTime); // Function SpinePlugin.TrackEntry.SetMixTime
	void SetMixDuration(float mixDuration); // Function SpinePlugin.TrackEntry.SetMixDuration
	void SetLoop(bool Loop); // Function SpinePlugin.TrackEntry.SetLoop
	void SetEventThreshold(float eventThreshold); // Function SpinePlugin.TrackEntry.SetEventThreshold
	void SetDrawOrderThreshold(float drawOrderThreshold); // Function SpinePlugin.TrackEntry.SetDrawOrderThreshold
	void SetDelay(float Delay); // Function SpinePlugin.TrackEntry.SetDelay
	void SetAttachmentThreshold(float attachmentThreshold); // Function SpinePlugin.TrackEntry.SetAttachmentThreshold
	void SetAnimationStart(float animationStart); // Function SpinePlugin.TrackEntry.SetAnimationStart
	void SetAnimationLast(float animationLast); // Function SpinePlugin.TrackEntry.SetAnimationLast
	void SetAnimationEnd(float animationEnd); // Function SpinePlugin.TrackEntry.SetAnimationEnd
	void SetAlpha(float Alpha); // Function SpinePlugin.TrackEntry.SetAlpha
	float isValidAnimation(); // Function SpinePlugin.TrackEntry.isValidAnimation
	float GetTrackTime(); // Function SpinePlugin.TrackEntry.GetTrackTime
	int32_t GetTrackIndex(); // Function SpinePlugin.TrackEntry.GetTrackIndex
	float GetTrackEnd(); // Function SpinePlugin.TrackEntry.GetTrackEnd
	float GetTimeScale(); // Function SpinePlugin.TrackEntry.GetTimeScale
	float GetMixTime(); // Function SpinePlugin.TrackEntry.GetMixTime
	float GetMixDuration(); // Function SpinePlugin.TrackEntry.GetMixDuration
	bool GetLoop(); // Function SpinePlugin.TrackEntry.GetLoop
	float GetEventThreshold(); // Function SpinePlugin.TrackEntry.GetEventThreshold
	float GetDrawOrderThreshold(); // Function SpinePlugin.TrackEntry.GetDrawOrderThreshold
	float GetDelay(); // Function SpinePlugin.TrackEntry.GetDelay
	float GetAttachmentThreshold(); // Function SpinePlugin.TrackEntry.GetAttachmentThreshold
	float GetAnimationStart(); // Function SpinePlugin.TrackEntry.GetAnimationStart
	struct FString getAnimationName(); // Function SpinePlugin.TrackEntry.getAnimationName
	float GetAnimationLast(); // Function SpinePlugin.TrackEntry.GetAnimationLast
	float GetAnimationEnd(); // Function SpinePlugin.TrackEntry.GetAnimationEnd
	float getAnimationDuration(); // Function SpinePlugin.TrackEntry.getAnimationDuration
	float GetAlpha(); // Function SpinePlugin.TrackEntry.GetAlpha
}; 
 
 


//Class SpinePlugin.SpineSkeletonAnimationComponent Size 520
// Inherited 264 bytes 
class USpineSkeletonAnimationComponent : public USpineSkeletonComponent
{

 public: 
	struct FMulticastInlineDelegate animationStart;  // Offset: 264 Size: 16
	struct FMulticastInlineDelegate AnimationInterrupt;  // Offset: 280 Size: 16
	struct FMulticastInlineDelegate AnimationEvent;  // Offset: 296 Size: 16
	struct FMulticastInlineDelegate AnimationComplete;  // Offset: 312 Size: 16
	struct FMulticastInlineDelegate animationEnd;  // Offset: 328 Size: 16
	struct FMulticastInlineDelegate AnimationDispose;  // Offset: 344 Size: 16
	struct FString PreviewAnimation;  // Offset: 360 Size: 16
	struct FString PreviewSkin;  // Offset: 376 Size: 16
	char pad_392[8];  // Offset: 392 Size: 8
	struct TSet<struct UTrackEntry*> trackEntries;  // Offset: 400 Size: 80
	char pad_480_1 : 7;  // Offset: 480 Size: 1
	bool bAutoPlaying : 1;  // Offset: 480 Size: 1
	char pad_481[39];  // Offset: 481 Size: 39



 // Functions 
 public:
	void SetTimeScale(float TimeScale); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetTimeScale
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetPlaybackTime
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetEmptyAnimation
	void SetAutoPlay(bool bInAutoPlays); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetAutoPlay
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop); // Function SpinePlugin.SpineSkeletonAnimationComponent.SetAnimation
	float GetTimeScale(); // Function SpinePlugin.SpineSkeletonAnimationComponent.GetTimeScale
	struct UTrackEntry* GetCurrent(int32_t TrackIndex); // Function SpinePlugin.SpineSkeletonAnimationComponent.GetCurrent
	void ClearTracks(); // Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTracks
	void ClearTrack(int32_t TrackIndex); // Function SpinePlugin.SpineSkeletonAnimationComponent.ClearTrack
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay); // Function SpinePlugin.SpineSkeletonAnimationComponent.AddEmptyAnimation
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay); // Function SpinePlugin.SpineSkeletonAnimationComponent.AddAnimation
}; 
 
 


//Class SpinePlugin.SpineSkeletonRendererComponent Size 2256
// Inherited 1312 bytes 
class USpineSkeletonRendererComponent : public UProceduralMeshComponent
{

 public: 
	struct UMaterialInterface* NormalBlendMaterial;  // Offset: 1304 Size: 8
	struct UMaterialInterface* AdditiveBlendMaterial;  // Offset: 1312 Size: 8
	struct UMaterialInterface* MultiplyBlendMaterial;  // Offset: 1320 Size: 8
	struct UMaterialInterface* ScreenBlendMaterial;  // Offset: 1328 Size: 8
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials;  // Offset: 1336 Size: 16
	char pad_1360[72];  // Offset: 1360 Size: 72
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials;  // Offset: 1432 Size: 16
	char pad_1448[80];  // Offset: 1448 Size: 80
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials;  // Offset: 1528 Size: 16
	char pad_1544[80];  // Offset: 1544 Size: 80
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials;  // Offset: 1624 Size: 16
	char pad_1640[80];  // Offset: 1640 Size: 80
	float DepthOffset;  // Offset: 1720 Size: 4
	struct FName TextureParameterName;  // Offset: 1724 Size: 8
	struct FLinearColor Color;  // Offset: 1732 Size: 16
	char pad_1748_1 : 7;  // Offset: 1748 Size: 1
	bool bCreateCollision : 1;  // Offset: 1748 Size: 1
	char pad_1749[507];  // Offset: 1749 Size: 507



 // Functions 
 public:
}; 
 
 


//Class SpinePlugin.SpineSkeletonDataAsset Size 248
// Inherited 40 bytes 
class USpineSkeletonDataAsset : public UObject
{

 public: 
	float DefaultMix;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FSpineAnimationStateMixData> MixData;  // Offset: 48 Size: 16
	struct TArray<struct FString> Bones;  // Offset: 64 Size: 16
	struct TArray<struct FString> Slots;  // Offset: 80 Size: 16
	struct TArray<struct FString> Skins;  // Offset: 96 Size: 16
	struct TArray<struct FString> Animations;  // Offset: 112 Size: 16
	struct TArray<struct FString> events;  // Offset: 128 Size: 16
	struct TArray<char> rawData;  // Offset: 144 Size: 16
	struct FName skeletonDataFileName;  // Offset: 160 Size: 8
	char pad_168[80];  // Offset: 168 Size: 80



 // Functions 
 public:
}; 
 
 


//Class SpinePlugin.SpineWidget Size 1656
// Inherited 264 bytes 
class USpineWidget : public UWidget
{

 public: 
	struct FString InitialSkin;  // Offset: 264 Size: 16
	struct USpineAtlasAsset* Atlas;  // Offset: 280 Size: 8
	struct USpineSkeletonDataAsset* SkeletonData;  // Offset: 288 Size: 8
	struct UMaterialInterface* NormalBlendMaterial;  // Offset: 296 Size: 8
	struct UMaterialInterface* AdditiveBlendMaterial;  // Offset: 304 Size: 8
	struct UMaterialInterface* MultiplyBlendMaterial;  // Offset: 312 Size: 8
	struct UMaterialInterface* ScreenBlendMaterial;  // Offset: 320 Size: 8
	struct FName TextureParameterName;  // Offset: 328 Size: 8
	float DepthOffset;  // Offset: 336 Size: 4
	struct FLinearColor Color;  // Offset: 340 Size: 16
	char pad_356[4];  // Offset: 356 Size: 4
	struct FSlateBrush Brush;  // Offset: 360 Size: 136
	struct FMulticastInlineDelegate BeforeUpdateWorldTransform;  // Offset: 496 Size: 16
	struct FMulticastInlineDelegate AfterUpdateWorldTransform;  // Offset: 512 Size: 16
	struct FMulticastInlineDelegate animationStart;  // Offset: 528 Size: 16
	struct FMulticastInlineDelegate AnimationInterrupt;  // Offset: 544 Size: 16
	struct FMulticastInlineDelegate AnimationEvent;  // Offset: 560 Size: 16
	struct FMulticastInlineDelegate AnimationComplete;  // Offset: 576 Size: 16
	struct FMulticastInlineDelegate animationEnd;  // Offset: 592 Size: 16
	struct FMulticastInlineDelegate AnimationDispose;  // Offset: 608 Size: 16
	char pad_624[64];  // Offset: 624 Size: 64
	struct TArray<struct UMaterialInstanceDynamic*> atlasNormalBlendMaterials;  // Offset: 688 Size: 16
	char pad_704[80];  // Offset: 704 Size: 80
	struct TArray<struct UMaterialInstanceDynamic*> atlasAdditiveBlendMaterials;  // Offset: 784 Size: 16
	char pad_800[80];  // Offset: 800 Size: 80
	struct TArray<struct UMaterialInstanceDynamic*> atlasMultiplyBlendMaterials;  // Offset: 880 Size: 16
	char pad_896[80];  // Offset: 896 Size: 80
	struct TArray<struct UMaterialInstanceDynamic*> atlasScreenBlendMaterials;  // Offset: 976 Size: 16
	char pad_992[576];  // Offset: 992 Size: 576
	struct TSet<struct UTrackEntry*> trackEntries;  // Offset: 1568 Size: 80
	char pad_1648_1 : 7;  // Offset: 1648 Size: 1
	bool bAutoPlaying : 1;  // Offset: 1648 Size: 1
	char pad_1649[7];  // Offset: 1649 Size: 7



 // Functions 
 public:
	void UpdateWorldTransform(); // Function SpinePlugin.SpineWidget.UpdateWorldTransform
	void Tick(float DeltaTime, bool CallDelegates); // Function SpinePlugin.SpineWidget.Tick
	void SetToSetupPose(); // Function SpinePlugin.SpineWidget.SetToSetupPose
	void SetTimeScale(float TimeScale); // Function SpinePlugin.SpineWidget.SetTimeScale
	void SetSlotsToSetupPose(); // Function SpinePlugin.SpineWidget.SetSlotsToSetupPose
	bool SetSkins(struct TArray<struct FString>& SkinNames); // Function SpinePlugin.SpineWidget.SetSkins
	bool SetSkin(struct FString SkinName); // Function SpinePlugin.SpineWidget.SetSkin
	void SetScaleY(float ScaleY); // Function SpinePlugin.SpineWidget.SetScaleY
	void SetScaleX(float ScaleX); // Function SpinePlugin.SpineWidget.SetScaleX
	void SetPlaybackTime(float InPlaybackTime, bool bCallDelegates); // Function SpinePlugin.SpineWidget.SetPlaybackTime
	struct UTrackEntry* SetEmptyAnimation(int32_t TrackIndex, float mixDuration); // Function SpinePlugin.SpineWidget.SetEmptyAnimation
	void SetBonesToSetupPose(); // Function SpinePlugin.SpineWidget.SetBonesToSetupPose
	void SetAutoPlay(bool bInAutoPlays); // Function SpinePlugin.SpineWidget.SetAutoPlay
	bool SetAttachment(struct FString SlotName, struct FString AttachmentName); // Function SpinePlugin.SpineWidget.SetAttachment
	struct UTrackEntry* SetAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop); // Function SpinePlugin.SpineWidget.SetAnimation
	bool HasSlot(struct FString SlotName); // Function SpinePlugin.SpineWidget.HasSlot
	bool HasSkin(struct FString SkinName); // Function SpinePlugin.SpineWidget.HasSkin
	bool HasBone(struct FString BoneName); // Function SpinePlugin.SpineWidget.HasBone
	bool HasAnimation(struct FString AnimationName); // Function SpinePlugin.SpineWidget.HasAnimation
	float GetTimeScale(); // Function SpinePlugin.SpineWidget.GetTimeScale
	void GetSlots(struct TArray<struct FString>& Slots); // Function SpinePlugin.SpineWidget.GetSlots
	void GetSkins(struct TArray<struct FString>& Skins); // Function SpinePlugin.SpineWidget.GetSkins
	float GetScaleY(); // Function SpinePlugin.SpineWidget.GetScaleY
	float GetScaleX(); // Function SpinePlugin.SpineWidget.GetScaleX
	struct UTrackEntry* GetCurrent(int32_t TrackIndex); // Function SpinePlugin.SpineWidget.GetCurrent
	void GetBones(struct TArray<struct FString>& Bones); // Function SpinePlugin.SpineWidget.GetBones
	void GetAnimations(struct TArray<struct FString>& Animations); // Function SpinePlugin.SpineWidget.GetAnimations
	float getAnimationDuration(struct FString AnimationName); // Function SpinePlugin.SpineWidget.getAnimationDuration
	void ClearTracks(); // Function SpinePlugin.SpineWidget.ClearTracks
	void ClearTrack(int32_t TrackIndex); // Function SpinePlugin.SpineWidget.ClearTrack
	struct UTrackEntry* AddEmptyAnimation(int32_t TrackIndex, float mixDuration, float Delay); // Function SpinePlugin.SpineWidget.AddEmptyAnimation
	struct UTrackEntry* AddAnimation(int32_t TrackIndex, struct FString AnimationName, bool Loop, float Delay); // Function SpinePlugin.SpineWidget.AddAnimation
}; 
 
 


