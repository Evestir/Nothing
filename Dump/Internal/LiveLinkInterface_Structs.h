#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct LiveLinkInterface.LiveLinkCurveElement Size 12
class FLiveLinkCurveElement
{

 public: 
	struct FName CurveName;  // Offset: 0 Size: 8
	float CurveValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.CachedSubjectFrame Size 352
class FCachedSubjectFrame
{

 public: 
	char pad_0[352];  // Offset: 0 Size: 352



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset Size 56
class FLiveLinkSubjectPreset
{

 public: 
	struct FLiveLinkSubjectKey Key;  // Offset: 0 Size: 24
	ULiveLinkRole* Role;  // Offset: 24 Size: 8
	struct ULiveLinkSubjectSettings* Settings;  // Offset: 32 Size: 8
	struct ULiveLinkVirtualSubject* VirtualSubject;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bEnabled : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.SubjectMetadata Size 112
class FSubjectMetadata
{

 public: 
	struct TMap<struct FName, struct FString> StringMetadata;  // Offset: 0 Size: 80
	struct FTimecode SceneTimecode;  // Offset: 80 Size: 20
	struct FFrameRate SceneFramerate;  // Offset: 100 Size: 8
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSubjectName Size 8
class FLiveLinkSubjectName
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSourceHandle Size 24
class FLiveLinkSourceHandle
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSubjectKey Size 24
class FLiveLinkSubjectKey
{

 public: 
	struct FGuid Source;  // Offset: 0 Size: 16
	struct FLiveLinkSubjectName SubjectName;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData Size 8
class FLiveLinkBaseBlueprintData
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.SubjectFrameHandle Size 24
// Inherited 8 bytes 
class FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{

 public: 
	char pad_8[16];  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData Size 240
// Inherited 208 bytes 
class FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{

 public: 
	float FieldOfView;  // Offset: 208 Size: 4
	float AspectRatio;  // Offset: 212 Size: 4
	float FocalLength;  // Offset: 216 Size: 4
	float Aperture;  // Offset: 220 Size: 4
	float FocusDistance;  // Offset: 224 Size: 4
	enum class ELiveLinkCameraProjectionMode ProjectionMode;  // Offset: 228 Size: 1
	char pad_229[11];  // Offset: 229 Size: 11



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTransform Size 32
class FLiveLinkTransform
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData Size 184
// Inherited 8 bytes 
class FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{

 public: 
	struct FLiveLinkBaseStaticData StaticData;  // Offset: 8 Size: 16
	struct FLiveLinkBaseFrameData FrameData;  // Offset: 24 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData Size 160
class FLiveLinkBaseFrameData
{

 public: 
	struct FLiveLinkWorldTime WorldTime;  // Offset: 0 Size: 16
	struct FLiveLinkMetaData MetaData;  // Offset: 16 Size: 96
	struct TArray<float> PropertyValues;  // Offset: 112 Size: 16
	char pad_128[32];  // Offset: 128 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkMetaData Size 96
class FLiveLinkMetaData
{

 public: 
	struct TMap<struct FName, struct FString> StringMetadata;  // Offset: 0 Size: 80
	struct FQualifiedFrameTime SceneTime;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkWorldTime Size 16
class FLiveLinkWorldTime
{

 public: 
	double Time;  // Offset: 0 Size: 8
	double Offset;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED Size 16
class FLiveLinkTimeCode_Base_DEPRECATED
{

 public: 
	int32_t Seconds;  // Offset: 0 Size: 4
	int32_t Frames;  // Offset: 4 Size: 4
	struct FLiveLinkFrameRate FrameRate;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData Size 176
// Inherited 160 bytes 
class FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{

 public: 
	struct TArray<struct FTransform> Transforms;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData Size 16
class FLiveLinkBaseStaticData
{

 public: 
	struct TArray<struct FName> PropertyNames;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings Size 8
class FLiveLinkInterpolationSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bUseInterpolation : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float InterpolationOffset;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData Size 48
// Inherited 16 bytes 
class FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{

 public: 
	struct TArray<struct FName> BoneNames;  // Offset: 16 Size: 16
	struct TArray<int32_t> BoneParents;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTime Size 24
class FLiveLinkTime
{

 public: 
	double WorldTime;  // Offset: 0 Size: 8
	struct FQualifiedFrameTime SceneTime;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkFrameRate Size 8
// Inherited 8 bytes 
class FLiveLinkFrameRate : public FFrameRate
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData Size 288
// Inherited 8 bytes 
class FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{

 public: 
	struct FLiveLinkCameraStaticData StaticData;  // Offset: 8 Size: 40
	struct FLiveLinkCameraFrameData FrameData;  // Offset: 48 Size: 240



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData Size 24
// Inherited 16 bytes 
class FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{

 public: 
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsLocationSupported : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bIsRotationSupported : 1;  // Offset: 17 Size: 1
	char pad_18_1 : 7;  // Offset: 18 Size: 1
	bool bIsScaleSupported : 1;  // Offset: 18 Size: 1
	char pad_19[5];  // Offset: 19 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData Size 208
// Inherited 160 bytes 
class FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{

 public: 
	struct FTransform Transform;  // Offset: 160 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData Size 40
// Inherited 24 bytes 
class FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{

 public: 
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsFieldOfViewSupported : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bIsAspectRatioSupported : 1;  // Offset: 25 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	bool bIsFocalLengthSupported : 1;  // Offset: 26 Size: 1
	char pad_27_1 : 7;  // Offset: 27 Size: 1
	bool bIsProjectionModeSupported : 1;  // Offset: 27 Size: 1
	float FilmBackWidth;  // Offset: 28 Size: 4
	float FilmBackHeight;  // Offset: 32 Size: 4
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bIsApertureSupported : 1;  // Offset: 36 Size: 1
	char pad_37_1 : 7;  // Offset: 37 Size: 1
	bool bIsFocusDistanceSupported : 1;  // Offset: 37 Size: 1
	char pad_38[2];  // Offset: 38 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings Size 80
class FLiveLinkCurveConversionSettings
{

 public: 
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData Size 304
// Inherited 8 bytes 
class FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{

 public: 
	struct FLiveLinkLightStaticData StaticData;  // Offset: 8 Size: 40
	struct FLiveLinkLightFrameData FrameData;  // Offset: 48 Size: 256



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkLightFrameData Size 256
// Inherited 208 bytes 
class FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{

 public: 
	float Temperature;  // Offset: 208 Size: 4
	float Intensity;  // Offset: 212 Size: 4
	struct FColor LightColor;  // Offset: 216 Size: 4
	float InnerConeAngle;  // Offset: 220 Size: 4
	float OuterConeAngle;  // Offset: 224 Size: 4
	float AttenuationRadius;  // Offset: 228 Size: 4
	float SourceRadius;  // Offset: 232 Size: 4
	float SoftSourceRadius;  // Offset: 236 Size: 4
	float SourceLength;  // Offset: 240 Size: 4
	char pad_244[12];  // Offset: 244 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation Size 16
class FLiveLinkSubjectRepresentation
{

 public: 
	struct FLiveLinkSubjectName Subject;  // Offset: 0 Size: 8
	ULiveLinkRole* Role;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkLightStaticData Size 40
// Inherited 24 bytes 
class FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{

 public: 
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsTemperatureSupported : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bIsIntensitySupported : 1;  // Offset: 25 Size: 1
	char pad_26_1 : 7;  // Offset: 26 Size: 1
	bool bIsLightColorSupported : 1;  // Offset: 26 Size: 1
	char pad_27_1 : 7;  // Offset: 27 Size: 1
	bool bIsInnerConeAngleSupported : 1;  // Offset: 27 Size: 1
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bIsOuterConeAngleSupported : 1;  // Offset: 28 Size: 1
	char pad_29_1 : 7;  // Offset: 29 Size: 1
	bool bIsAttenuationRadiusSupported : 1;  // Offset: 29 Size: 1
	char pad_30_1 : 7;  // Offset: 30 Size: 1
	bool bIsSourceLenghtSupported : 1;  // Offset: 30 Size: 1
	char pad_31_1 : 7;  // Offset: 31 Size: 1
	bool bIsSourceRadiusSupported : 1;  // Offset: 31 Size: 1
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bIsSoftSourceRadiusSupported : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSourcePreset Size 48
class FLiveLinkSourcePreset
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	struct ULiveLinkSourceSettings* Settings;  // Offset: 16 Size: 8
	struct FText SourceType;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton Size 32
class FLiveLinkRefSkeleton
{

 public: 
	struct TArray<struct FName> BoneNames;  // Offset: 0 Size: 16
	struct TArray<int32_t> BoneParents;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings Size 12
class FLiveLinkTimeSynchronizationSettings
{

 public: 
	struct FFrameRate FrameRate;  // Offset: 0 Size: 8
	struct FFrameNumber FrameOffset;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo Size 16
class FLiveLinkSourceDebugInfo
{

 public: 
	struct FLiveLinkSubjectName SubjectName;  // Offset: 0 Size: 8
	int32_t SnapshotIndex;  // Offset: 8 Size: 4
	int32_t NumberOfBufferAtSnapshot;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings Size 88
class FLiveLinkSourceBufferManagementSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bValidEngineTimeEnabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ValidEngineTime;  // Offset: 4 Size: 4
	float EngineTimeOffset;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	double EngineTimeClockOffset;  // Offset: 16 Size: 8
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bGenerateSubFrame : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	struct FFrameRate DetectedFrameRate;  // Offset: 28 Size: 8
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bUseTimecodeSmoothLatest : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3
	struct FFrameRate SourceTimecodeFrameRate;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bValidTimecodeFrameEnabled : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t ValidTimecodeFrame;  // Offset: 52 Size: 4
	float TimecodeFrameOffset;  // Offset: 56 Size: 4
	char pad_60[4];  // Offset: 60 Size: 4
	double TimecodeClockOffset;  // Offset: 64 Size: 8
	int32_t LatestOffset;  // Offset: 72 Size: 4
	int32_t MaxNumberOfFrameToBuffered;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bKeepAtLeastOneFrame : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData Size 240
// Inherited 8 bytes 
class FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{

 public: 
	struct FLiveLinkTransformStaticData StaticData;  // Offset: 8 Size: 24
	struct FLiveLinkTransformFrameData FrameData;  // Offset: 32 Size: 208



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkFrameData Size 144
class FLiveLinkFrameData
{

 public: 
	struct TArray<struct FTransform> Transforms;  // Offset: 0 Size: 16
	struct TArray<struct FLiveLinkCurveElement> CurveElements;  // Offset: 16 Size: 16
	struct FLiveLinkWorldTime WorldTime;  // Offset: 32 Size: 16
	struct FLiveLinkMetaData MetaData;  // Offset: 48 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct LiveLinkInterface.LiveLinkTimeCode Size 16
// Inherited 16 bytes 
class FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{

 public: 



 // Functions 
 public:
}; 
 
 