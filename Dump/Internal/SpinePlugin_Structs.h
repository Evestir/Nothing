#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function SpinePlugin.TrackEntry.SetDrawOrderThreshold Size 4
class FSetDrawOrderThreshold
{

 public: 
	float drawOrderThreshold;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineBeforeUpdateWorldTransformDelegate__DelegateSignature Size 8
class FSpineBeforeUpdateWorldTransformDelegate__DelegateSignature
{

 public: 
	struct USpineSkeletonComponent* Skeleton;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationStartDelegate__DelegateSignature Size 8
class FSpineAnimationStartDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetAlpha Size 4
class FSetAlpha
{

 public: 
	float Alpha;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetAttachmentThreshold Size 4
class FGetAttachmentThreshold
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAfterUpdateWorldTransformDelegate__DelegateSignature Size 8
class FSpineAfterUpdateWorldTransformDelegate__DelegateSignature
{

 public: 
	struct USpineSkeletonComponent* Skeleton;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetAnimationStart Size 4
class FGetAnimationStart
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetSkin Size 24
class FSetSkin
{

 public: 
	struct FString SkinName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.HasSkin Size 24
class FHasSkin
{

 public: 
	struct FString SkinName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationEventDelegate__DelegateSignature Size 56
class FSpineAnimationEventDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8
	struct FSpineEvent evt;  // Offset: 8 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct SpinePlugin.SpineEvent Size 48
class FSpineEvent
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FString StringValue;  // Offset: 16 Size: 16
	int32_t IntValue;  // Offset: 32 Size: 4
	float FloatValue;  // Offset: 36 Size: 4
	float Time;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationInterruptDelegate__DelegateSignature Size 8
class FSpineAnimationInterruptDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetSkins Size 16
class FGetSkins
{

 public: 
	struct TArray<struct FString> Skins;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationCompleteDelegate__DelegateSignature Size 8
class FSpineAnimationCompleteDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationEndDelegate__DelegateSignature Size 8
class FSpineAnimationEndDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineAnimationDisposeDelegate__DelegateSignature Size 8
class FSpineAnimationDisposeDelegate__DelegateSignature
{

 public: 
	struct UTrackEntry* entry;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature Size 8
class FSpineWidgetBeforeUpdateWorldTransformDelegate__DelegateSignature
{

 public: 
	struct USpineWidget* Skeleton;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetMixTime Size 4
class FSetMixTime
{

 public: 
	float mixTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetBones Size 16
class FGetBones
{

 public: 
	struct TArray<struct FString> Bones;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetDelay Size 4
class FSetDelay
{

 public: 
	float Delay;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetTrackIndex Size 4
class FGetTrackIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction SpinePlugin.SpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature Size 8
class FSpineWidgetAfterUpdateWorldTransformDelegate__DelegateSignature
{

 public: 
	struct USpineWidget* Skeleton;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetAttachmentThreshold Size 4
class FSetAttachmentThreshold
{

 public: 
	float attachmentThreshold;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct SpinePlugin.SpineAnimationStateMixData Size 40
class FSpineAnimationStateMixData
{

 public: 
	struct FString From;  // Offset: 0 Size: 16
	struct FString To;  // Offset: 16 Size: 16
	float Mix;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetTrackEnd Size 4
class FSetTrackEnd
{

 public: 
	float trackEnd;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetMixDuration Size 4
class FSetMixDuration
{

 public: 
	float mixDuration;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetTrackTime Size 4
class FGetTrackTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.HasAnimation Size 24
class FHasAnimation
{

 public: 
	struct FString AnimationName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetTrackEnd Size 4
class FGetTrackEnd
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineBoneDriverComponent.BeforeUpdateWorldTransform Size 8
class FBeforeUpdateWorldTransform
{

 public: 
	struct USpineSkeletonComponent* Skeleton;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetAnimationStart Size 4
class FSetAnimationStart
{

 public: 
	float animationStart;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.isValidAnimation Size 4
class FisValidAnimation
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetAlpha Size 4
class FGetAlpha
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetAnimationLast Size 4
class FSetAnimationLast
{

 public: 
	float animationLast;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetTrackTime Size 4
class FSetTrackTime
{

 public: 
	float trackTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.getAnimationDuration Size 24
class FgetAnimationDuration
{

 public: 
	struct FString AnimationName;  // Offset: 0 Size: 16
	float ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetAnimations Size 16
class FGetAnimations
{

 public: 
	struct TArray<struct FString> Animations;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetEventThreshold Size 4
class FSetEventThreshold
{

 public: 
	float eventThreshold;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetAnimationEnd Size 4
class FGetAnimationEnd
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetAnimationLast Size 4
class FGetAnimationLast
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.getAnimationName Size 16
class FgetAnimationName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetDelay Size 4
class FGetDelay
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetDrawOrderThreshold Size 4
class FGetDrawOrderThreshold
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetEventThreshold Size 4
class FGetEventThreshold
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetLoop Size 1
class FGetLoop
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetSkins Size 24
class FSetSkins
{

 public: 
	struct TArray<struct FString> SkinNames;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetMixDuration Size 4
class FGetMixDuration
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetScaleY Size 4
class FSetScaleY
{

 public: 
	float ScaleY;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.GetMixTime Size 4
class FGetMixTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetTimeScale Size 4
class FGetTimeScale
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetAnimationEnd Size 4
class FSetAnimationEnd
{

 public: 
	float animationEnd;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.TrackEntry.SetLoop Size 1
class FSetLoop
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Loop : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetTimeScale Size 4
class FSetTimeScale
{

 public: 
	float TimeScale;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetScaleX Size 4
class FGetScaleX
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineSkeletonComponent.GetBoneWorldTransform Size 64
class FGetBoneWorldTransform
{

 public: 
	struct FString BoneName;  // Offset: 0 Size: 16
	struct FTransform ReturnValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetScaleY Size 4
class FGetScaleY
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetSlots Size 16
class FGetSlots
{

 public: 
	struct TArray<struct FString> Slots;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.HasBone Size 24
class FHasBone
{

 public: 
	struct FString BoneName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.HasSlot Size 24
class FHasSlot
{

 public: 
	struct FString SlotName;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetAttachment Size 40
class FSetAttachment
{

 public: 
	struct FString SlotName;  // Offset: 0 Size: 16
	struct FString AttachmentName;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.Tick Size 8
class FTick
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool CallDelegates : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineSkeletonComponent.SetBoneWorldPosition Size 32
class FSetBoneWorldPosition
{

 public: 
	struct FString BoneName;  // Offset: 0 Size: 16
	struct FVector position;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetScaleX Size 4
class FSetScaleX
{

 public: 
	float ScaleX;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineSkeletonComponent.SetSlotColor Size 24
class FSetSlotColor
{

 public: 
	struct FString SlotName;  // Offset: 0 Size: 16
	struct FColor Color;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.AddAnimation Size 40
class FAddAnimation
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString AnimationName;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool Loop : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	float Delay;  // Offset: 28 Size: 4
	struct UTrackEntry* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.AddEmptyAnimation Size 24
class FAddEmptyAnimation
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	float mixDuration;  // Offset: 4 Size: 4
	float Delay;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UTrackEntry* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.ClearTrack Size 4
class FClearTrack
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.GetCurrent Size 16
class FGetCurrent
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UTrackEntry* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetAnimation Size 40
class FSetAnimation
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString AnimationName;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool Loop : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct UTrackEntry* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetAutoPlay Size 1
class FSetAutoPlay
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInAutoPlays : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetEmptyAnimation Size 16
class FSetEmptyAnimation
{

 public: 
	int32_t TrackIndex;  // Offset: 0 Size: 4
	float mixDuration;  // Offset: 4 Size: 4
	struct UTrackEntry* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SpinePlugin.SpineWidget.SetPlaybackTime Size 8
class FSetPlaybackTime
{

 public: 
	float InPlaybackTime;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bCallDelegates : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3



 // Functions 
 public:
}; 
 
 