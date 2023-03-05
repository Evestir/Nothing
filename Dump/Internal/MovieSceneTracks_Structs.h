#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey Size 16
class FAddScalarParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	float InValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneParameterSectionTemplate Size 128
// Inherited 32 bytes 
class FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct TArray<struct FScalarParameterNameAndCurve> Scalars;  // Offset: 32 Size: 16
	struct TArray<struct FBoolParameterNameAndCurve> Bools;  // Offset: 48 Size: 16
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds;  // Offset: 64 Size: 16
	struct TArray<struct FVectorParameterNameAndCurves> Vectors;  // Offset: 80 Size: 16
	struct TArray<struct FColorParameterNameAndCurves> Colors;  // Offset: 96 Size: 16
	struct TArray<struct FTransformParameterNameAndCurves> Transforms;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate Size 136
// Inherited 128 bytes 
class FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{

 public: 
	struct UMaterialParameterCollection* MPC;  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneAudioSection.GetSound Size 8
class FGetSound
{

 public: 
	struct USoundBase* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin Size 48
class FBP_GetTransformOrigin
{

 public: 
	struct FTransform ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.TransformParameterNameAndCurves Size 1448
class FTransformParameterNameAndCurves
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneFloatChannel Translation[3];  // Offset: 8 Size: 480
	struct FMovieSceneFloatChannel Rotation[3];  // Offset: 488 Size: 480
	struct FMovieSceneFloatChannel Scale[3];  // Offset: 968 Size: 480



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.ColorParameterNameAndCurves Size 648
class FColorParameterNameAndCurves
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneFloatChannel RedCurve;  // Offset: 8 Size: 160
	struct FMovieSceneFloatChannel GreenCurve;  // Offset: 168 Size: 160
	struct FMovieSceneFloatChannel BlueCurve;  // Offset: 328 Size: 160
	struct FMovieSceneFloatChannel AlphaCurve;  // Offset: 488 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneStringPropertySectionTemplate Size 216
// Inherited 56 bytes 
class FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct FMovieSceneStringChannel StringCurve;  // Offset: 56 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScene3DScaleKeyStruct Size 48
// Inherited 8 bytes 
class FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FVector Scale;  // Offset: 8 Size: 12
	struct FFrameNumber Time;  // Offset: 20 Size: 4
	char pad_24[24];  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneTransformMask Size 4
class FMovieSceneTransformMask
{

 public: 
	uint32_t Mask;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.BoolParameterNameAndCurve Size 152
class FBoolParameterNameAndCurve
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneBoolChannel ParameterCurve;  // Offset: 8 Size: 144



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.ScalarParameterNameAndCurve Size 168
class FScalarParameterNameAndCurve
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneFloatChannel ParameterCurve;  // Offset: 8 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.VectorParameterNameAndCurves Size 488
class FVectorParameterNameAndCurves
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneFloatChannel XCurve;  // Offset: 8 Size: 160
	struct FMovieSceneFloatChannel YCurve;  // Offset: 168 Size: 160
	struct FMovieSceneFloatChannel ZCurve;  // Offset: 328 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceSectionTemplate Size 232
// Inherited 32 bytes 
class FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieScenePropertySectionData PropertyData;  // Offset: 32 Size: 24
	struct FMovieSceneActorReferenceData ActorReferenceData;  // Offset: 56 Size: 176



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.Vector2DParameterNameAndCurves Size 328
class FVector2DParameterNameAndCurves
{

 public: 
	struct FName ParameterName;  // Offset: 0 Size: 8
	struct FMovieSceneFloatChannel XCurve;  // Offset: 8 Size: 160
	struct FMovieSceneFloatChannel YCurve;  // Offset: 168 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneAudioSectionTemplate Size 40
// Inherited 32 bytes 
class FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct UMovieSceneAudioSection* AudioSection;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneStringChannel Size 160
// Inherited 8 bytes 
class FMovieSceneStringChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> Times;  // Offset: 8 Size: 16
	struct TArray<struct FString> Values;  // Offset: 24 Size: 16
	struct FString DefaultValue;  // Offset: 40 Size: 16
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bHasDefaultValue : 1;  // Offset: 56 Size: 1
	char pad_57[103];  // Offset: 57 Size: 103



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter Size 12
class FRemoveVector2DParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScene3DPathSectionTemplate Size 224
// Inherited 32 bytes 
class FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneObjectBindingID PathBindingID;  // Offset: 32 Size: 24
	struct FMovieSceneFloatChannel TimingCurve;  // Offset: 56 Size: 160
	enum class MovieScene3DPathSection_Axis FrontAxisEnum;  // Offset: 216 Size: 1
	enum class MovieScene3DPathSection_Axis UpAxisEnum;  // Offset: 217 Size: 1
	char pad_218[2];  // Offset: 218 Size: 2
	char bFollow : 1;  // Offset: 220 Size: 1
	char bReverse : 1;  // Offset: 220 Size: 1
	char bForceUpright : 1;  // Offset: 220 Size: 1
	char pad_220_1 : 5;  // Offset: 220 Size: 1
	char pad_221[4];  // Offset: 221 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScene3DTransformKeyStruct Size 72
// Inherited 8 bytes 
class FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FVector Location;  // Offset: 8 Size: 12
	struct FRotator Rotation;  // Offset: 20 Size: 12
	struct FVector Scale;  // Offset: 32 Size: 12
	struct FFrameNumber Time;  // Offset: 44 Size: 4
	char pad_48[24];  // Offset: 48 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionData Size 32
class FMovieSceneCameraShakeSectionData
{

 public: 
	UCameraShakeBase* ShakeClass;  // Offset: 0 Size: 8
	float PlayScale;  // Offset: 8 Size: 4
	enum class ECameraShakePlaySpace PlaySpace;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FRotator UserDefinedPlaySpace;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScene3DRotationKeyStruct Size 48
// Inherited 8 bytes 
class FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FRotator Rotation;  // Offset: 8 Size: 12
	struct FFrameNumber Time;  // Offset: 20 Size: 4
	char pad_24[24];  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStructBase Size 40
// Inherited 8 bytes 
class FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{

 public: 
	struct FFrameNumber Time;  // Offset: 8 Size: 4
	char pad_12[28];  // Offset: 12 Size: 28



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName Size 16
class FSetShotDisplayName
{

 public: 
	struct FString InShotDisplayName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventPtrs Size 40
class FMovieSceneEventPtrs
{

 public: 
	struct UFunction* Function;  // Offset: 0 Size: 8
	struct TFieldPath<FNone> BoundObjectProperty;  // Offset: 8 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScene3DLocationKeyStruct Size 48
// Inherited 8 bytes 
class FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FVector Location;  // Offset: 8 Size: 12
	struct FFrameNumber Time;  // Offset: 20 Size: 4
	char pad_24[24];  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneVector2DKeyStruct Size 48
// Inherited 40 bytes 
class FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{

 public: 
	struct FVector2D Vector;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceData Size 176
// Inherited 8 bytes 
class FMovieSceneActorReferenceData : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> KeyTimes;  // Offset: 8 Size: 16
	struct FMovieSceneActorReferenceKey DefaultValue;  // Offset: 24 Size: 40
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues;  // Offset: 64 Size: 16
	char pad_80[96];  // Offset: 80 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneActorReferenceKey Size 40
class FMovieSceneActorReferenceKey
{

 public: 
	struct FMovieSceneObjectBindingID Object;  // Offset: 0 Size: 24
	struct FName ComponentName;  // Offset: 24 Size: 8
	struct FName SocketName;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams Size 48
class FMovieSceneSkeletalAnimRootMotionTrackParams
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventSectionData Size 136
// Inherited 8 bytes 
class FMovieSceneEventSectionData : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> Times;  // Offset: 8 Size: 16
	struct TArray<struct FEventPayload> KeyValues;  // Offset: 24 Size: 16
	char pad_40[96];  // Offset: 40 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionData Size 32
class FMovieSceneCameraAnimSectionData
{

 public: 
	struct UCameraAnim* CameraAnim;  // Offset: 0 Size: 8
	float PlayRate;  // Offset: 8 Size: 4
	float PlayScale;  // Offset: 12 Size: 4
	float BlendInTime;  // Offset: 16 Size: 4
	float BlendOutTime;  // Offset: 20 Size: 4
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bLooping : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneParticleSectionTemplate Size 184
// Inherited 32 bytes 
class FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneParticleChannel ParticleKeys;  // Offset: 32 Size: 152



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraAnimSectionTemplate Size 72
// Inherited 32 bytes 
class FMovieSceneCameraAnimSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneCameraAnimSectionData SourceData;  // Offset: 32 Size: 32
	struct FFrameNumber SectionStartTime;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate Size 136
// Inherited 128 bytes 
class FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{

 public: 
	int32_t MaterialIndex;  // Offset: 128 Size: 4
	char pad_132[4];  // Offset: 132 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.EventPayload Size 48
class FEventPayload
{

 public: 
	struct FName EventName;  // Offset: 0 Size: 8
	struct FMovieSceneEventParameters Parameters;  // Offset: 8 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate Size 72
// Inherited 32 bytes 
class FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneCameraShakeSectionData SourceData;  // Offset: 32 Size: 32
	struct FFrameNumber SectionStartTime;  // Offset: 64 Size: 4
	struct FFrameNumber SectionEndTime;  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEvent Size 40
class FMovieSceneEvent
{

 public: 
	struct FMovieSceneEventPtrs Ptrs;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel Size 136
// Inherited 8 bytes 
class FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> KeyTimes;  // Offset: 8 Size: 16
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues;  // Offset: 24 Size: 16
	char pad_40[96];  // Offset: 40 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTrigger Size 32
class FMovieSceneCameraShakeSourceTrigger
{

 public: 
	UCameraShakeBase* ShakeClass;  // Offset: 0 Size: 8
	float PlayScale;  // Offset: 8 Size: 4
	enum class ECameraShakePlaySpace PlaySpace;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	struct FRotator UserDefinedPlaySpace;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventPayloadVariable Size 16
class FMovieSceneEventPayloadVariable
{

 public: 
	struct FString Value;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate Size 64
// Inherited 32 bytes 
class FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct TArray<struct FFrameNumber> TriggerTimes;  // Offset: 32 Size: 16
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> TriggerValues;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneCameraShakeSectionTemplate Size 72
// Inherited 32 bytes 
class FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneCameraShakeSectionData SourceData;  // Offset: 32 Size: 32
	struct FFrameNumber SectionStartTime;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneColorKeyStruct Size 56
// Inherited 8 bytes 
class FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FLinearColor Color;  // Offset: 8 Size: 16
	struct FFrameNumber Time;  // Offset: 24 Size: 4
	char pad_28[28];  // Offset: 28 Size: 28



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneColorSectionTemplate Size 704
// Inherited 56 bytes 
class FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct FMovieSceneFloatChannel Curves[4];  // Offset: 56 Size: 640
	enum class EMovieSceneBlendType BlendType;  // Offset: 696 Size: 1
	char pad_697[7];  // Offset: 697 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationParams Size 216
class FMovieSceneSkeletalAnimationParams
{

 public: 
	struct UAnimSequenceBase* Animation;  // Offset: 0 Size: 8
	struct FFrameNumber FirstLoopStartFrameOffset;  // Offset: 8 Size: 4
	struct FFrameNumber StartFrameOffset;  // Offset: 12 Size: 4
	struct FFrameNumber EndFrameOffset;  // Offset: 16 Size: 4
	float PlayRate;  // Offset: 20 Size: 4
	char bReverse : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	char pad_25[4];  // Offset: 25 Size: 4
	struct FName SlotName;  // Offset: 28 Size: 8
	char pad_36[4];  // Offset: 36 Size: 4
	struct FMovieSceneFloatChannel weight;  // Offset: 40 Size: 160
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool bSkipAnimNotifiers : 1;  // Offset: 200 Size: 1
	char pad_201_1 : 7;  // Offset: 201 Size: 1
	bool bForceCustomMode : 1;  // Offset: 201 Size: 1
	char pad_202[2];  // Offset: 202 Size: 2
	float StartOffset;  // Offset: 204 Size: 4
	float EndOffset;  // Offset: 208 Size: 4
	char pad_212[4];  // Offset: 212 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventChannel Size 136
// Inherited 8 bytes 
class FMovieSceneEventChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> KeyTimes;  // Offset: 8 Size: 16
	struct TArray<struct FMovieSceneEvent> KeyValues;  // Offset: 24 Size: 16
	char pad_40[96];  // Offset: 40 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventParameters Size 40
class FMovieSceneEventParameters
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventTriggerData Size 72
class FMovieSceneEventTriggerData
{

 public: 
	struct FMovieSceneEventPtrs Ptrs;  // Offset: 0 Size: 40
	struct FGuid ObjectBindingId;  // Offset: 40 Size: 16
	char pad_56[16];  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneEventSectionTemplate Size 176
// Inherited 32 bytes 
class FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneEventSectionData EventData;  // Offset: 32 Size: 136
	char bFireEventsWhenForwards : 1;  // Offset: 168 Size: 1
	char bFireEventsWhenBackwards : 1;  // Offset: 168 Size: 1
	char pad_168_1 : 6;  // Offset: 168 Size: 1
	char pad_169[8];  // Offset: 169 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneFadeSectionTemplate Size 216
// Inherited 32 bytes 
class FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneFloatChannel FadeCurve;  // Offset: 32 Size: 160
	struct FLinearColor FadeColor;  // Offset: 192 Size: 16
	char bFadeAudio : 1;  // Offset: 208 Size: 1
	char pad_208_1 : 7;  // Offset: 208 Size: 1
	char pad_209[8];  // Offset: 209 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneBoolPropertySectionTemplate Size 200
// Inherited 56 bytes 
class FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct FMovieSceneBoolChannel BoolCurve;  // Offset: 56 Size: 144



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneObjectPropertyTemplate Size 248
// Inherited 56 bytes 
class FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{

 public: 
	struct FMovieSceneObjectPathChannel ObjectChannel;  // Offset: 56 Size: 192



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID Size 24
class FGetConstraintBindingID
{

 public: 
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneParticleParameterSectionTemplate Size 128
// Inherited 128 bytes 
class FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID Size 24
class FSetCameraBindingID
{

 public: 
	struct FMovieSceneObjectBindingID InCameraBindingID;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneParticleChannel Size 152
// Inherited 152 bytes 
class FMovieSceneParticleChannel : public FMovieSceneByteChannel
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieScenePrimitiveMaterialTemplate Size 232
// Inherited 32 bytes 
class FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate
{

 public: 
	int32_t MaterialIndex;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	struct FMovieSceneObjectPathChannel MaterialChannel;  // Offset: 40 Size: 192



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate Size 256
// Inherited 32 bytes 
class FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneSkeletalAnimationSectionTemplateParameters Params;  // Offset: 32 Size: 224



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters Size 224
// Inherited 216 bytes 
class FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{

 public: 
	struct FFrameNumber SectionStartTime;  // Offset: 216 Size: 4
	struct FFrameNumber SectionEndTime;  // Offset: 220 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneSlomoSectionTemplate Size 192
// Inherited 32 bytes 
class FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieSceneFloatChannel SlomoCurve;  // Offset: 32 Size: 160



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.LevelVisibilityComponentData Size 8
class FLevelVisibilityComponentData
{

 public: 
	struct UMovieSceneLevelVisibilitySection* Section;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneVector4KeyStruct Size 64
// Inherited 40 bytes 
class FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FVector4 Vector;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneVectorKeyStruct Size 56
// Inherited 40 bytes 
class FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{

 public: 
	struct FVector Vector;  // Offset: 40 Size: 12
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieSceneTracks.MovieSceneVisibilitySectionTemplate Size 200
// Inherited 200 bytes 
class FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{

 public: 



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID Size 24
class FSetConstraintBindingID
{

 public: 
	struct FMovieSceneObjectBindingID InConstraintBindingID;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset Size 4
class FGetStartOffset
{

 public: 
	struct FFrameNumber ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneAudioSection.SetSound Size 8
class FSetSound
{

 public: 
	struct USoundBase* InSound;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset Size 4
class FSetStartOffset
{

 public: 
	struct FFrameNumber InStartOffset;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID Size 24
class FGetCameraBindingID
{

 public: 
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName Size 16
class FGetShotDisplayName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames Size 16
class FGetLevelNames
{

 public: 
	struct TArray<struct FName> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility Size 1
class FGetVisibility
{

 public: 
	enum class ELevelVisibility ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames Size 16
class FSetLevelNames
{

 public: 
	struct TArray<struct FName> InLevelNames;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility Size 1
class FSetVisibility
{

 public: 
	enum class ELevelVisibility InVisibility;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey Size 16
class FAddBoolParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool InValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey Size 28
class FAddColorParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	struct FLinearColor InValue;  // Offset: 12 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey Size 64
class FAddTransformParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FTransform InValue;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey Size 20
class FAddVector2DParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	struct FVector2D InValue;  // Offset: 12 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey Size 24
class FAddVectorParameterKey
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	struct FFrameNumber InTime;  // Offset: 8 Size: 4
	struct FVector InValue;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames Size 80
class FGetParameterNames
{

 public: 
	struct TSet<struct FName> ParameterNames;  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter Size 12
class FRemoveBoolParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter Size 12
class FRemoveColorParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter Size 12
class FRemoveScalarParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter Size 12
class FRemoveTransformParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter Size 12
class FRemoveVectorParameter
{

 public: 
	struct FName InParameterName;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 