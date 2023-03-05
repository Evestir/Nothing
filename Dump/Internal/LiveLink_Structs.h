#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction LiveLink.LiveLinkTickSignature__DelegateSignature Size 4
class FLiveLinkTickSignature__DelegateSignature
{

 public: 
	float DeltaTime;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType Size 48
class FGetSourceType
{

 public: 
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 0 Size: 24
	struct FText ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLink.LiveLinkRetargetAssetReference Size 1
class FLiveLinkRetargetAssetReference
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLink.AnimNode_LiveLinkPose Size 80
// Inherited 16 bytes 
class FAnimNode_LiveLinkPose : public FAnimNode_Base
{

 public: 
	struct FPoseLink InputPose;  // Offset: 16 Size: 16
	struct FLiveLinkSubjectName LiveLinkSubjectName;  // Offset: 32 Size: 8
	ULiveLinkRetargetAsset* RetargetAsset;  // Offset: 40 Size: 8
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset;  // Offset: 48 Size: 8
	char pad_56[24];  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkPreset.ApplyToClient Size 1
class FApplyToClient
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider Size 80
class FConnectToProvider
{

 public: 
	struct FProviderPollResult Provider;  // Offset: 0 Size: 56
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkComponent.GetSubjectData Size 40
class FGetSubjectData
{

 public: 
	struct FName SubjectName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bSuccess : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLink.LiveLinkInstanceProxy Size 1984
// Inherited 1904 bytes 
class FLiveLinkInstanceProxy : public FAnimInstanceProxy
{

 public: 
	struct FAnimNode_LiveLinkPose PoseNode;  // Offset: 1904 Size: 80



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName Size 48
class FGetSourceMachineName
{

 public: 
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 0 Size: 24
	struct FText ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetChildren Size 48
class FGetChildren
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	struct TArray<struct FLiveLinkTransform> Children;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLink.LiveLinkRoleProjectSetting Size 40
class FLiveLinkRoleProjectSetting
{

 public: 
	ULiveLinkRole* Role;  // Offset: 0 Size: 8
	ULiveLinkSubjectSettings* SettingClass;  // Offset: 8 Size: 8
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor;  // Offset: 16 Size: 8
	struct TArray<ULiveLinkFramePreProcessor*> FramePreProcessors;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.TransformName Size 40
class FTransformName
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	struct FName Name;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLink.ProviderPollResult Size 56
class FProviderPollResult
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	struct FString Name;  // Offset: 16 Size: 16
	struct FString MachineName;  // Offset: 32 Size: 16
	double MachineTimeOffset;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid Size 32
class FIsSourceStillValid
{

 public: 
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.ChildCount Size 40
class FChildCount
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	int32_t ReturnValue;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform Size 80
class FComponentSpaceTransform
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	struct FTransform Transform;  // Offset: 32 Size: 48



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform Size 80
class FParentBoneSpaceTransform
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	struct FTransform Transform;  // Offset: 32 Size: 48



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform Size 56
class FGetRootTransform
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 24 Size: 32



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame Size 32
class FEvaluateLiveLinkFrame
{

 public: 
	struct FLiveLinkSubjectRepresentation SubjectRepresentation;  // Offset: 0 Size: 16
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkInstance.SetSubject Size 8
class FSetSubject
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole Size 32
class FEvaluateLiveLinkFrameWithSpecificRole
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	ULiveLinkRole* Role;  // Offset: 8 Size: 8
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime Size 56
class FEvaluateLiveLinkFrameAtSceneTime
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	ULiveLinkRole* Role;  // Offset: 8 Size: 8
	struct FTimecode SceneTime;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool ReturnValue : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled Size 12
class FIsLiveLinkSubjectEnabled
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames Size 24
class FGetLiveLinkEnabledSubjectNames
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIncludeVirtualSubject : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct TArray<struct FLiveLinkSubjectName> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset Size 40
class FEvaluateLiveLinkFrameAtWorldTimeOffset
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	ULiveLinkRole* Role;  // Offset: 8 Size: 8
	float WorldTimeOffset;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FLiveLinkBaseBlueprintData OutBlueprintData;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData Size 208
class FGetAnimationFrameData
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FLiveLinkAnimationFrameData AnimationFrameData;  // Offset: 24 Size: 176
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool ReturnValue : 1;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime Size 40
class FGetSubjectDataAtWorldTime
{

 public: 
	struct FName SubjectName;  // Offset: 0 Size: 8
	float WorldTime;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bSuccess : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData Size 80
class FGetAnimationStaticData
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FLiveLinkSkeletonStaticData AnimationStaticData;  // Offset: 24 Size: 48
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool ReturnValue : 1;  // Offset: 72 Size: 1
	char pad_73[7];  // Offset: 73 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetParent Size 64
class FGetParent
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	struct FLiveLinkTransform Parent;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData Size 208
class FGetBasicData
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FLiveLinkBasicBlueprintData BasicBlueprintData;  // Offset: 24 Size: 184



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue Size 200
class FGetPropertyValue
{

 public: 
	struct FLiveLinkBasicBlueprintData BasicData;  // Offset: 0 Size: 184
	struct FName PropertyName;  // Offset: 184 Size: 8
	float Value;  // Offset: 192 Size: 4
	char pad_196_1 : 7;  // Offset: 196 Size: 1
	bool ReturnValue : 1;  // Offset: 196 Size: 1
	char pad_197[3];  // Offset: 197 Size: 3



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetCurves Size 104
class FGetCurves
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct TMap<struct FName, float> Curves;  // Offset: 24 Size: 80



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole Size 16
class FGetLiveLinkSubjectRole
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	ULiveLinkRole* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkRemapAsset.RemapCurveElements Size 80
class FRemapCurveElements
{

 public: 
	struct TMap<struct FName, float> CurveItems;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects Size 24
class FGetLiveLinkSubjects
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bIncludeDisabledSubject : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIncludeVirtualSubject : 1;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct TArray<struct FLiveLinkSubjectKey> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata Size 136
class FGetMetadata
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FSubjectMetadata MetaData;  // Offset: 24 Size: 112



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus Size 48
class FGetSourceStatus
{

 public: 
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 0 Size: 24
	struct FText ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole Size 32
class FGetSpecificLiveLinkSubjectRole
{

 public: 
	struct FLiveLinkSubjectKey SubjectKey;  // Offset: 0 Size: 24
	ULiveLinkRole* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled Size 28
class FSetLiveLinkSubjectEnabled
{

 public: 
	struct FLiveLinkSubjectKey SubjectKey;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bEnabled : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex Size 64
class FGetTransformByIndex
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	int32_t TransformIndex;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName Size 64
class FGetTransformByName
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct FName TransformName;  // Offset: 24 Size: 8
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 32 Size: 32



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.HasParent Size 40
class FHasParent
{

 public: 
	struct FLiveLinkTransform LiveLinkTransform;  // Offset: 0 Size: 32
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled Size 28
class FIsSpecificLiveLinkSubjectEnabled
{

 public: 
	struct FLiveLinkSubjectKey SubjectKey;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bForThisFrame : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool ReturnValue : 1;  // Offset: 25 Size: 1
	char pad_26[2];  // Offset: 26 Size: 2



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms Size 32
class FNumberOfTransforms
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	int32_t ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource Size 32
class FRemoveSource
{

 public: 
	struct FLiveLinkSourceHandle SourceHandle;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintLibrary.TransformNames Size 40
class FTransformNames
{

 public: 
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 0 Size: 24
	struct TArray<struct FName> TransformNames;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal Size 168
class FUpdateVirtualSubjectFrameData_Internal
{

 public: 
	struct FLiveLinkBaseFrameData InStruct;  // Offset: 0 Size: 160
	char pad_160_1 : 7;  // Offset: 160 Size: 1
	bool bInShouldStampCurrentTime : 1;  // Offset: 160 Size: 1
	char pad_161_1 : 7;  // Offset: 161 Size: 1
	bool ReturnValue : 1;  // Offset: 161 Size: 1
	char pad_162[6];  // Offset: 162 Size: 6



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal Size 24
class FUpdateVirtualSubjectStaticData_Internal
{

 public: 
	struct FLiveLinkBaseStaticData InStruct;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkPreset.AddToClient Size 2
class FAddToClient
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bRecreatePresets : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames Size 16
class FGetAvailableSubjectNames
{

 public: 
	struct TArray<struct FName> SubjectNames;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime Size 56
class FGetSubjectDataAtSceneTime
{

 public: 
	struct FName SubjectName;  // Offset: 0 Size: 8
	struct FTimecode SceneTime;  // Offset: 8 Size: 20
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bSuccess : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FSubjectFrameHandle SubjectFrameHandle;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkInstance.SetRetargetAsset Size 8
class FSetRetargetAsset
{

 public: 
	ULiveLinkRetargetAsset* RetargetAsset;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder Size 8
class FConstructMessageBusFinder
{

 public: 
	struct ULiveLinkMessageBusFinder* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders Size 56
class FGetAvailableProviders
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 8 Size: 24
	float Duration;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct TArray<struct FProviderPollResult> AvailableProviders;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName Size 16
class FGetRemappedBoneName
{

 public: 
	struct FName BoneName;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName Size 16
class FGetRemappedCurveName
{

 public: 
	struct FName CurveName;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 