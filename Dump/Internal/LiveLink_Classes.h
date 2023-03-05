#pragma once 
#include <LiveLink_Structs.h>
 
 
 
//Class LiveLink.LiveLinkRetargetAsset Size 40
// Inherited 40 bytes 
class ULiveLinkRetargetAsset : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor Size 80
// Inherited 64 bytes 
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{

 public: 
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkBasicFrameInterpolationProcessor Size 64
// Inherited 40 bytes 
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bInterpolatePropertyValues : 1;  // Offset: 40 Size: 1
	char pad_41[23];  // Offset: 41 Size: 23



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkBlueprintLibrary Size 40
// Inherited 40 bytes 
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, struct TArray<struct FName>& TransformNames); // Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, struct FName& Name); // Function LiveLink.LiveLinkBlueprintLibrary.TransformName
	void SetLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bEnabled); // Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
	bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.RemoveSource
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
	int32_t NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
	bool IsSpecificLiveLinkSubjectEnabled(struct FLiveLinkSubjectKey SubjectKey, bool bForThisFrame); // Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
	bool IsLiveLinkSubjectEnabled(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.HasParent
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, struct FName TransformName, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32_t TransformIndex, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
	ULiveLinkRole* GetSpecificLiveLinkSubjectRole(struct FLiveLinkSubjectKey SubjectKey); // Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
	struct FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
	struct FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
	struct FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, struct FName PropertyName, float& Value); // Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform& Parent); // Function LiveLink.LiveLinkBlueprintLibrary.GetParent
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata& MetaData); // Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
	struct TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
	ULiveLinkRole* GetLiveLinkSubjectRole(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
	struct TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject); // Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, struct TMap<struct FName, float>& Curves); // Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, struct TArray<struct FLiveLinkTransform>& Children); // Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData& BasicBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
	bool GetAnimationStaticData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkSkeletonStaticData& AnimationStaticData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationStaticData
	bool GetAnimationFrameData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkAnimationFrameData& AnimationFrameData); // Function LiveLink.LiveLinkBlueprintLibrary.GetAnimationFrameData
	bool EvaluateLiveLinkFrameWithSpecificRole(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
	bool EvaluateLiveLinkFrameAtSceneTime(struct FLiveLinkSubjectName SubjectName, ULiveLinkRole* Role, struct FTimecode SceneTime, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
	bool EvaluateLiveLinkFrame(struct FLiveLinkSubjectRepresentation SubjectRepresentation, struct FLiveLinkBaseBlueprintData& OutBlueprintData); // Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform& Transform); // Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
	int32_t ChildCount(struct FLiveLinkTransform& LiveLinkTransform); // Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
}; 
 
 


//Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor Size 88
// Inherited 88 bytes 
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkAnimationRoleToTransform Size 64
// Inherited 40 bytes 
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{

 public: 
	struct FName BoneName;  // Offset: 40 Size: 8
	char pad_48[16];  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkTimecodeProvider Size 192
// Inherited 48 bytes 
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{

 public: 
	struct FLiveLinkSubjectKey SubjectKey;  // Offset: 48 Size: 24
	enum class ELiveLinkTimecodeProviderEvaluationType Evaluation;  // Offset: 72 Size: 4
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	bool bOverrideFrameRate : 1;  // Offset: 76 Size: 1
	char pad_77[3];  // Offset: 77 Size: 3
	struct FFrameRate OverrideFrameRate;  // Offset: 80 Size: 8
	int32_t BufferSize;  // Offset: 88 Size: 4
	char pad_92[100];  // Offset: 92 Size: 100



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkAnimationVirtualSubject Size 360
// Inherited 352 bytes 
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{

 public: 
	char pad_352[1];  // Offset: 352 Size: 1
	char pad_353_1 : 7;  // Offset: 353 Size: 1
	bool bAppendSubjectNameToBones : 1;  // Offset: 353 Size: 1
	char pad_354[6];  // Offset: 354 Size: 6



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor Size 88
// Inherited 40 bytes 
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{

 public: 
	enum class ELiveLinkAxis FrontAxis;  // Offset: 40 Size: 1
	enum class ELiveLinkAxis RightAxis;  // Offset: 41 Size: 1
	enum class ELiveLinkAxis UpAxis;  // Offset: 42 Size: 1
	char pad_43_1 : 7;  // Offset: 43 Size: 1
	bool bUseOffsetPosition : 1;  // Offset: 43 Size: 1
	char pad_44_1 : 7;  // Offset: 44 Size: 1
	bool bUseOffsetOrientation : 1;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct FVector OffsetPosition;  // Offset: 48 Size: 12
	struct FRotator OffsetOrientation;  // Offset: 60 Size: 12
	char pad_72[16];  // Offset: 72 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkBlueprintVirtualSubject Size 392
// Inherited 352 bytes 
class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{

 public: 
	char pad_352[40];  // Offset: 352 Size: 40



 // Functions 
 public:
	bool UpdateVirtualSubjectStaticData_Internal(struct FLiveLinkBaseStaticData& InStruct); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectStaticData_Internal
	bool UpdateVirtualSubjectFrameData_Internal(struct FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime); // Function LiveLink.LiveLinkBlueprintVirtualSubject.UpdateVirtualSubjectFrameData_Internal
	void OnUpdate(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnUpdate
	void OnInitialize(); // Function LiveLink.LiveLinkBlueprintVirtualSubject.OnInitialize
}; 
 
 


//Class LiveLink.LiveLinkComponent Size 208
// Inherited 176 bytes 
class ULiveLinkComponent : public UActorComponent
{

 public: 
	struct FMulticastInlineDelegate OnLiveLinkUpdated;  // Offset: 176 Size: 16
	char pad_192[16];  // Offset: 192 Size: 16



 // Functions 
 public:
	void GetSubjectDataAtWorldTime(struct FName SubjectName, float WorldTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
	void GetSubjectDataAtSceneTime(struct FName SubjectName, struct FTimecode& SceneTime, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
	void GetSubjectData(struct FName SubjectName, bool& bSuccess, struct FSubjectFrameHandle& SubjectFrameHandle); // Function LiveLink.LiveLinkComponent.GetSubjectData
	void GetAvailableSubjectNames(struct TArray<struct FName>& SubjectNames); // Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
}; 
 
 


//Class LiveLink.LiveLinkMessageBusSourceFactory Size 40
// Inherited 40 bytes 
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkDrivenComponent Size 200
// Inherited 176 bytes 
class ULiveLinkDrivenComponent : public UActorComponent
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 176 Size: 8
	struct FName ActorTransformBone;  // Offset: 184 Size: 8
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bModifyActorTransform : 1;  // Offset: 192 Size: 1
	char pad_193_1 : 7;  // Offset: 193 Size: 1
	bool bSetRelativeLocation : 1;  // Offset: 193 Size: 1
	char pad_194[6];  // Offset: 194 Size: 6



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkInstance Size 704
// Inherited 704 bytes 
class ULiveLinkInstance : public UAnimInstance
{

 public: 
	struct ULiveLinkRetargetAsset* CurrentRetargetAsset;  // Offset: 696 Size: 8



 // Functions 
 public:
	void SetSubject(struct FLiveLinkSubjectName SubjectName); // Function LiveLink.LiveLinkInstance.SetSubject
	void SetRetargetAsset(ULiveLinkRetargetAsset* RetargetAsset); // Function LiveLink.LiveLinkInstance.SetRetargetAsset
}; 
 
 


//Class LiveLink.LiveLinkMessageBusFinder Size 128
// Inherited 40 bytes 
class ULiveLinkMessageBusFinder : public UObject
{

 public: 
	char pad_40[88];  // Offset: 40 Size: 88



 // Functions 
 public:
	void GetAvailableProviders(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, float Duration, struct TArray<struct FProviderPollResult>& AvailableProviders); // Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
	struct ULiveLinkMessageBusFinder* ConstructMessageBusFinder(); // Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle& SourceHandle); // Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
}; 
 
 


//Class LiveLink.LiveLinkMessageBusSourceSettings Size 160
// Inherited 160 bytes 
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkPreset Size 72
// Inherited 40 bytes 
class ULiveLinkPreset : public UObject
{

 public: 
	struct TArray<struct FLiveLinkSourcePreset> Sources;  // Offset: 40 Size: 16
	struct TArray<struct FLiveLinkSubjectPreset> Subjects;  // Offset: 56 Size: 16



 // Functions 
 public:
	void BuildFromClient(); // Function LiveLink.LiveLinkPreset.BuildFromClient
	bool ApplyToClient(); // Function LiveLink.LiveLinkPreset.ApplyToClient
	bool AddToClient(bool bRecreatePresets); // Function LiveLink.LiveLinkPreset.AddToClient
}; 
 
 


//Class LiveLink.LiveLinkRemapAsset Size 200
// Inherited 40 bytes 
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

 public: 
	char pad_40[160];  // Offset: 40 Size: 160



 // Functions 
 public:
	void RemapCurveElements(struct TMap<struct FName, float>& CurveItems); // Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
	struct FName GetRemappedCurveName(struct FName CurveName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
	struct FName GetRemappedBoneName(struct FName BoneName); // Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
}; 
 
 


//Class LiveLink.LiveLinkSettings Size 208
// Inherited 40 bytes 
class ULiveLinkSettings : public UObject
{

 public: 
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings;  // Offset: 40 Size: 16
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor;  // Offset: 56 Size: 8
	struct TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;  // Offset: 64 Size: 40
	struct FDirectoryPath PresetSaveDir;  // Offset: 104 Size: 16
	float ClockOffsetCorrectionStep;  // Offset: 120 Size: 4
	enum class ELiveLinkSourceMode DefaultMessageBusSourceMode;  // Offset: 124 Size: 1
	char pad_125[3];  // Offset: 125 Size: 3
	double MessageBusPingRequestFrequency;  // Offset: 128 Size: 8
	double MessageBusHeartbeatFrequency;  // Offset: 136 Size: 8
	double MessageBusHeartbeatTimeout;  // Offset: 144 Size: 8
	double MessageBusTimeBeforeRemovingInactiveSource;  // Offset: 152 Size: 8
	double TimeWithoutFrameToBeConsiderAsInvalid;  // Offset: 160 Size: 8
	struct FLinearColor ValidColor;  // Offset: 168 Size: 16
	struct FLinearColor InvalidColor;  // Offset: 184 Size: 16
	char TextSizeSource;  // Offset: 200 Size: 1
	char TextSizeSubject;  // Offset: 201 Size: 1
	char pad_202[6];  // Offset: 202 Size: 6



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkTimeSynchronizationSource Size 128
// Inherited 48 bytes 
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 48 Size: 8
	char pad_56[72];  // Offset: 56 Size: 72



 // Functions 
 public:
}; 
 
 


//Class LiveLink.LiveLinkVirtualSubjectSourceSettings Size 168
// Inherited 160 bytes 
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{

 public: 
	struct FName SourceName;  // Offset: 160 Size: 8



 // Functions 
 public:
}; 
 
 


