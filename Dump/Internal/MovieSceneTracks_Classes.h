#pragma once 
#include <MovieSceneTracks_Structs.h>
 
 
 
//Class MovieSceneTracks.MovieSceneAudioTrack Size 168
// Inherited 144 bytes 
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> AudioSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeEvaluator Size 40
// Inherited 40 bytes 
class UMovieSceneCameraShakeEvaluator : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneColorTrack Size 200
// Inherited 192 bytes 
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bIsSlateColor : 1;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DAttachSection Size 304
// Inherited 272 bytes 
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{

 public: 
	char pad_272[8];  // Offset: 272 Size: 8
	struct FName AttachSocketName;  // Offset: 280 Size: 8
	struct FName AttachComponentName;  // Offset: 288 Size: 8
	enum class EAttachmentRule AttachmentLocationRule;  // Offset: 296 Size: 1
	enum class EAttachmentRule AttachmentRotationRule;  // Offset: 297 Size: 1
	enum class EAttachmentRule AttachmentScaleRule;  // Offset: 298 Size: 1
	enum class EDetachmentRule DetachmentLocationRule;  // Offset: 299 Size: 1
	enum class EDetachmentRule DetachmentRotationRule;  // Offset: 300 Size: 1
	enum class EDetachmentRule DetachmentScaleRule;  // Offset: 301 Size: 1
	char pad_302[2];  // Offset: 302 Size: 2



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneInitialValueSystem Size 64
// Inherited 64 bytes 
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneFadeTrack Size 200
// Inherited 192 bytes 
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneIntegerSection Size 384
// Inherited 232 bytes 
class UMovieSceneIntegerSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneIntegerChannel IntegerCurve;  // Offset: 240 Size: 144



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePropertyTrack Size 192
// Inherited 144 bytes 
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{

 public: 
	struct UMovieSceneSection* SectionToKey;  // Offset: 144 Size: 8
	struct FMovieScenePropertyBinding PropertyBinding;  // Offset: 152 Size: 20
	char pad_172[4];  // Offset: 172 Size: 4
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 176 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DTransformSection Size 1856
// Inherited 232 bytes 
class UMovieScene3DTransformSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneTransformMask TransformMask;  // Offset: 240 Size: 4
	char pad_244[4];  // Offset: 244 Size: 4
	struct FMovieSceneFloatChannel Translation[3];  // Offset: 248 Size: 480
	struct FMovieSceneFloatChannel Rotation[3];  // Offset: 728 Size: 480
	struct FMovieSceneFloatChannel Scale[3];  // Offset: 1208 Size: 480
	struct FMovieSceneFloatChannel ManualWeight;  // Offset: 1688 Size: 160
	char pad_1848_1 : 7;  // Offset: 1848 Size: 1
	bool bUseQuaternionInterpolation : 1;  // Offset: 1848 Size: 1
	char pad_1849[7];  // Offset: 1849 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.IntegerChannelEvaluatorSystem Size 64
// Inherited 64 bytes 
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.FloatChannelEvaluatorSystem Size 64
// Inherited 64 bytes 
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventTriggerSection Size 376
// Inherited 232 bytes 
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneEventChannel EventChannel;  // Offset: 240 Size: 136



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneTransformTrack Size 192
// Inherited 192 bytes 
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraAnimTrack Size 168
// Inherited 144 bytes 
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> CameraAnimSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.ByteChannelEvaluatorSystem Size 64
// Inherited 64 bytes 
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneVectorSection Size 888
// Inherited 232 bytes 
class UMovieSceneVectorSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneFloatChannel Curves[4];  // Offset: 240 Size: 640
	int32_t ChannelsUsed;  // Offset: 880 Size: 4
	char pad_884[4];  // Offset: 884 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventSectionBase Size 232
// Inherited 232 bytes 
class UMovieSceneEventSectionBase : public UMovieSceneSection
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem Size 64
// Inherited 64 bytes 
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneTransformOrigin Size 40
// Inherited 40 bytes 
class UMovieSceneTransformOrigin : public UInterface
{

 public: 



 // Functions 
 public:
	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeTrack Size 168
// Inherited 144 bytes 
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DPathSection Size 440
// Inherited 272 bytes 
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{

 public: 
	struct FMovieSceneFloatChannel TimingCurve;  // Offset: 272 Size: 160
	enum class MovieScene3DPathSection_Axis FrontAxisEnum;  // Offset: 432 Size: 1
	enum class MovieScene3DPathSection_Axis UpAxisEnum;  // Offset: 433 Size: 1
	char pad_434[2];  // Offset: 434 Size: 2
	char bFollow : 1;  // Offset: 436 Size: 1
	char bReverse : 1;  // Offset: 436 Size: 1
	char bForceUpright : 1;  // Offset: 436 Size: 1
	char pad_436_1 : 5;  // Offset: 436 Size: 1
	char pad_437[4];  // Offset: 437 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DConstraintSection Size 272
// Inherited 232 bytes 
class UMovieScene3DConstraintSection : public UMovieSceneSection
{

 public: 
	struct FGuid ConstraintId;  // Offset: 232 Size: 16
	struct FMovieSceneObjectBindingID ConstraintBindingID;  // Offset: 248 Size: 24



 // Functions 
 public:
	void SetConstraintBindingID(struct FMovieSceneObjectBindingID& InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
}; 
 
 


//Class MovieSceneTracks.MovieSceneEnumTrack Size 200
// Inherited 192 bytes 
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{

 public: 
	struct UEnum* Enum;  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DConstraintTrack Size 160
// Inherited 144 bytes 
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> ConstraintSections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DAttachTrack Size 160
// Inherited 160 bytes 
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEulerTransformTrack Size 192
// Inherited 192 bytes 
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneAudioSection Size 824
// Inherited 232 bytes 
class UMovieSceneAudioSection : public UMovieSceneSection
{

 public: 
	struct USoundBase* Sound;  // Offset: 232 Size: 8
	struct FFrameNumber StartFrameOffset;  // Offset: 240 Size: 4
	float StartOffset;  // Offset: 244 Size: 4
	float AudioStartTime;  // Offset: 248 Size: 4
	float AudioDilationFactor;  // Offset: 252 Size: 4
	float AudioVolume;  // Offset: 256 Size: 4
	char pad_260[4];  // Offset: 260 Size: 4
	struct FMovieSceneFloatChannel SoundVolume;  // Offset: 264 Size: 160
	struct FMovieSceneFloatChannel PitchMultiplier;  // Offset: 424 Size: 160
	struct FMovieSceneActorReferenceData AttachActorData;  // Offset: 584 Size: 176
	char pad_760_1 : 7;  // Offset: 760 Size: 1
	bool bLooping : 1;  // Offset: 760 Size: 1
	char pad_761_1 : 7;  // Offset: 761 Size: 1
	bool bSuppressSubtitles : 1;  // Offset: 761 Size: 1
	char pad_762_1 : 7;  // Offset: 762 Size: 1
	bool bOverrideAttenuation : 1;  // Offset: 762 Size: 1
	char pad_763[5];  // Offset: 763 Size: 5
	struct USoundAttenuation* AttenuationSettings;  // Offset: 768 Size: 8
	struct FDelegate OnQueueSubtitles;  // Offset: 776 Size: 16
	struct FMulticastInlineDelegate OnAudioFinished;  // Offset: 792 Size: 16
	struct FMulticastInlineDelegate OnAudioPlaybackPercent;  // Offset: 808 Size: 16



 // Functions 
 public:
	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound
}; 
 
 


//Class MovieSceneTracks.MovieScene3DPathTrack Size 168
// Inherited 160 bytes 
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{

 public: 
	char pad_160[8];  // Offset: 160 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePropertySystem Size 88
// Inherited 64 bytes 
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[8];  // Offset: 64 Size: 8
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem;  // Offset: 72 Size: 8
	char pad_80[8];  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePostSpawnEventSystem Size 144
// Inherited 144 bytes 
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DTransformPropertySystem Size 88
// Inherited 88 bytes 
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePostEvalEventSystem Size 144
// Inherited 144 bytes 
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneComponentTransformSystem Size 88
// Inherited 88 bytes 
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection Size 264
// Inherited 232 bytes 
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneCameraShakeSectionData ShakeData;  // Offset: 232 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScene3DTransformTrack Size 192
// Inherited 192 bytes 
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneActorReferenceSection Size 552
// Inherited 232 bytes 
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneActorReferenceData ActorReferenceData;  // Offset: 232 Size: 176
	struct FIntegralCurve ActorGuidIndexCurve;  // Offset: 408 Size: 128
	struct TArray<struct FString> ActorGuidStrings;  // Offset: 536 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneActorReferenceTrack Size 200
// Inherited 192 bytes 
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem Size 64
// Inherited 64 bytes 
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneBoolPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneBoolTrack Size 200
// Inherited 192 bytes 
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneBytePropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneByteSection Size 392
// Inherited 232 bytes 
class UMovieSceneByteSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneByteChannel ByteCurve;  // Offset: 240 Size: 152



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventTrack Size 184
// Inherited 144 bytes 
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[16];  // Offset: 144 Size: 16
	char bFireEventsWhenForwards : 1;  // Offset: 160 Size: 1
	char bFireEventsWhenBackwards : 1;  // Offset: 160 Size: 1
	char pad_160_1 : 6;  // Offset: 160 Size: 1
	char pad_161[4];  // Offset: 161 Size: 4
	enum class EFireEventsAtPosition EventPosition;  // Offset: 164 Size: 1
	char pad_165[3];  // Offset: 165 Size: 3
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 168 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneByteTrack Size 200
// Inherited 192 bytes 
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{

 public: 
	struct UEnum* Enum;  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraAnimSection Size 296
// Inherited 232 bytes 
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneCameraAnimSectionData AnimData;  // Offset: 232 Size: 32
	struct UCameraAnim* CameraAnim;  // Offset: 264 Size: 8
	float PlayRate;  // Offset: 272 Size: 4
	float PlayScale;  // Offset: 276 Size: 4
	float BlendInTime;  // Offset: 280 Size: 4
	float BlendOutTime;  // Offset: 284 Size: 4
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bLooping : 1;  // Offset: 288 Size: 1
	char pad_289[7];  // Offset: 289 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEnumSection Size 392
// Inherited 232 bytes 
class UMovieSceneEnumSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneByteChannel EnumCurve;  // Offset: 240 Size: 152



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraCutSection Size 352
// Inherited 232 bytes 
class UMovieSceneCameraCutSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	char pad_240_1 : 7;  // Offset: 240 Size: 1
	bool bLockPreviousCamera : 1;  // Offset: 240 Size: 1
	char pad_241_1 : 7;  // Offset: 241 Size: 1
	bool bDontResetTAABuffer : 1;  // Offset: 241 Size: 1
	char pad_242[2];  // Offset: 242 Size: 2
	struct FGuid CameraGuid;  // Offset: 244 Size: 16
	struct FMovieSceneObjectBindingID CameraBindingID;  // Offset: 260 Size: 24
	char pad_284[4];  // Offset: 284 Size: 4
	struct FTransform InitialCameraCutTransform;  // Offset: 288 Size: 48
	char pad_336_1 : 7;  // Offset: 336 Size: 1
	bool bHasInitialCameraCutTransform : 1;  // Offset: 336 Size: 1
	char pad_337[15];  // Offset: 337 Size: 15



 // Functions 
 public:
	void SetCameraBindingID(struct FMovieSceneObjectBindingID& InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
}; 
 
 


//Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem Size 64
// Inherited 64 bytes 
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraCutTrack Size 168
// Inherited 144 bytes 
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bCanBlend : 1;  // Offset: 144 Size: 1
	char pad_145[7];  // Offset: 145 Size: 7
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraCutTrackInstance Size 184
// Inherited 80 bytes 
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{

 public: 
	char pad_80[104];  // Offset: 80 Size: 104



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeSection Size 296
// Inherited 232 bytes 
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneCameraShakeSectionData ShakeData;  // Offset: 232 Size: 32
	UCameraShakeBase* ShakeClass;  // Offset: 264 Size: 8
	float PlayScale;  // Offset: 272 Size: 4
	enum class ECameraShakePlaySpace PlaySpace;  // Offset: 276 Size: 1
	char pad_277[3];  // Offset: 277 Size: 3
	struct FRotator UserDefinedPlaySpace;  // Offset: 280 Size: 12
	char pad_292[4];  // Offset: 292 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCinematicShotTrack Size 160
// Inherited 160 bytes 
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneFloatTrack Size 192
// Inherited 192 bytes 
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack Size 168
// Inherited 144 bytes 
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> CameraShakeSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection Size 368
// Inherited 232 bytes 
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel;  // Offset: 232 Size: 136



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneParticleParameterTrack Size 168
// Inherited 144 bytes 
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack Size 168
// Inherited 144 bytes 
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventSystem Size 144
// Inherited 64 bytes 
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[80];  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneCinematicShotSection Size 400
// Inherited 360 bytes 
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{

 public: 
	struct FString ShotDisplayName;  // Offset: 360 Size: 16
	struct FText DisplayName;  // Offset: 376 Size: 24



 // Functions 
 public:
	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
}; 
 
 


//Class MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem Size 144
// Inherited 104 bytes 
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{

 public: 
	char pad_104[40];  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneColorPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneColorSection Size 880
// Inherited 232 bytes 
class UMovieSceneColorSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneFloatChannel RedCurve;  // Offset: 240 Size: 160
	struct FMovieSceneFloatChannel GreenCurve;  // Offset: 400 Size: 160
	struct FMovieSceneFloatChannel BlueCurve;  // Offset: 560 Size: 160
	struct FMovieSceneFloatChannel AlphaCurve;  // Offset: 720 Size: 160



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneComponentAttachmentSystem Size 448
// Inherited 64 bytes 
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[384];  // Offset: 64 Size: 384



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneComponentMobilitySystem Size 544
// Inherited 64 bytes 
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[480];  // Offset: 64 Size: 480



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneDeferredComponentMovementSystem Size 88
// Inherited 64 bytes 
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[24];  // Offset: 64 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEnumPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventRepeaterSection Size 280
// Inherited 232 bytes 
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneEvent Event;  // Offset: 240 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneEventSection Size 488
// Inherited 232 bytes 
class UMovieSceneEventSection : public UMovieSceneSection
{

 public: 
	struct FNameCurve events;  // Offset: 232 Size: 120
	struct FMovieSceneEventSectionData EventData;  // Offset: 352 Size: 136



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePreSpawnEventSystem Size 144
// Inherited 144 bytes 
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneFadeSection Size 416
// Inherited 232 bytes 
class UMovieSceneFadeSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneFloatChannel FloatCurve;  // Offset: 232 Size: 160
	struct FLinearColor FadeColor;  // Offset: 392 Size: 16
	char bFadeAudio : 1;  // Offset: 408 Size: 1
	char pad_408_1 : 7;  // Offset: 408 Size: 1
	char pad_409[8];  // Offset: 409 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneFloatPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneFloatSection Size 400
// Inherited 232 bytes 
class UMovieSceneFloatSection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	struct FMovieSceneFloatChannel FloatCurve;  // Offset: 240 Size: 160



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneIntegerPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneIntegerTrack Size 192
// Inherited 192 bytes 
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem Size 488
// Inherited 64 bytes 
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[424];  // Offset: 64 Size: 424



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneLevelVisibilitySection Size 264
// Inherited 232 bytes 
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{

 public: 
	char pad_232[8];  // Offset: 232 Size: 8
	enum class ELevelVisibility Visibility;  // Offset: 240 Size: 1
	char pad_241[7];  // Offset: 241 Size: 7
	struct TArray<struct FName> LevelNames;  // Offset: 248 Size: 16



 // Functions 
 public:
	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
	void SetLevelNames(struct TArray<struct FName>& InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
}; 
 
 


//Class MovieSceneTracks.MovieSceneLevelVisibilitySystem Size 424
// Inherited 64 bytes 
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[360];  // Offset: 64 Size: 360



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneLevelVisibilityTrack Size 160
// Inherited 144 bytes 
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneMaterialTrack Size 160
// Inherited 144 bytes 
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack Size 176
// Inherited 160 bytes 
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{

 public: 
	char pad_160[8];  // Offset: 160 Size: 8
	struct UMaterialParameterCollection* MPC;  // Offset: 168 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneComponentMaterialTrack Size 176
// Inherited 160 bytes 
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{

 public: 
	char pad_160[8];  // Offset: 160 Size: 8
	int32_t MaterialIndex;  // Offset: 168 Size: 4
	char pad_172[4];  // Offset: 172 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneMotionVectorSimulationSystem Size 152
// Inherited 64 bytes 
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[88];  // Offset: 64 Size: 88



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneObjectPropertySection Size 424
// Inherited 232 bytes 
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneObjectPathChannel ObjectChannel;  // Offset: 232 Size: 192



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneObjectPropertyTrack Size 208
// Inherited 192 bytes 
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	UObject* PropertyClass;  // Offset: 200 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneParameterSection Size 328
// Inherited 232 bytes 
class UMovieSceneParameterSection : public UMovieSceneSection
{

 public: 
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves;  // Offset: 232 Size: 16
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves;  // Offset: 248 Size: 16
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves;  // Offset: 264 Size: 16
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves;  // Offset: 280 Size: 16
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves;  // Offset: 296 Size: 16
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves;  // Offset: 312 Size: 16



 // Functions 
 public:
	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
	void GetParameterNames(struct TSet<struct FName>& ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform& InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
}; 
 
 


//Class MovieSceneTracks.MovieSceneParticleSection Size 384
// Inherited 232 bytes 
class UMovieSceneParticleSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneParticleChannel ParticleKeys;  // Offset: 232 Size: 152



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneParticleTrack Size 168
// Inherited 144 bytes 
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> ParticleSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem Size 144
// Inherited 104 bytes 
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{

 public: 
	char pad_104[40];  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem Size 144
// Inherited 104 bytes 
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{

 public: 
	char pad_104[40];  // Offset: 104 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem Size 296
// Inherited 104 bytes 
class UMovieScenePiecewiseFloatBlenderSystem : public UMovieSceneBlenderSystem
{

 public: 
	char pad_104[192];  // Offset: 104 Size: 192



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem Size 176
// Inherited 104 bytes 
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{

 public: 
	char pad_104[72];  // Offset: 104 Size: 72



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePrimitiveMaterialSection Size 424
// Inherited 232 bytes 
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneObjectPathChannel MaterialChannel;  // Offset: 232 Size: 192



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack Size 208
// Inherited 192 bytes 
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8
	int32_t MaterialIndex;  // Offset: 200 Size: 4
	char pad_204[4];  // Offset: 204 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem Size 584
// Inherited 64 bytes 
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[520];  // Offset: 64 Size: 520



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem Size 64
// Inherited 64 bytes 
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneSkeletalAnimationSection Size 624
// Inherited 232 bytes 
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneSkeletalAnimationParams Params;  // Offset: 232 Size: 216
	struct UAnimSequence* AnimSequence;  // Offset: 448 Size: 8
	struct UAnimSequenceBase* Animation;  // Offset: 456 Size: 8
	float StartOffset;  // Offset: 464 Size: 4
	float EndOffset;  // Offset: 468 Size: 4
	float PlayRate;  // Offset: 472 Size: 4
	char bReverse : 1;  // Offset: 476 Size: 1
	char pad_476_1 : 7;  // Offset: 476 Size: 1
	char pad_477[4];  // Offset: 477 Size: 4
	struct FName SlotName;  // Offset: 480 Size: 8
	struct FVector StartLocationOffset;  // Offset: 488 Size: 12
	struct FRotator StartRotationOffset;  // Offset: 500 Size: 12
	char pad_512_1 : 7;  // Offset: 512 Size: 1
	bool bMatchWithPrevious : 1;  // Offset: 512 Size: 1
	char pad_513[3];  // Offset: 513 Size: 3
	struct FName MatchedBoneName;  // Offset: 516 Size: 8
	struct FVector MatchedLocationOffset;  // Offset: 524 Size: 12
	struct FRotator MatchedRotationOffset;  // Offset: 536 Size: 12
	char pad_548_1 : 7;  // Offset: 548 Size: 1
	bool bMatchTranslation : 1;  // Offset: 548 Size: 1
	char pad_549_1 : 7;  // Offset: 549 Size: 1
	bool bMatchIncludeZHeight : 1;  // Offset: 549 Size: 1
	char pad_550_1 : 7;  // Offset: 550 Size: 1
	bool bMatchRotationYaw : 1;  // Offset: 550 Size: 1
	char pad_551_1 : 7;  // Offset: 551 Size: 1
	bool bMatchRotationPitch : 1;  // Offset: 551 Size: 1
	char pad_552_1 : 7;  // Offset: 552 Size: 1
	bool bMatchRotationRoll : 1;  // Offset: 552 Size: 1
	char pad_553[71];  // Offset: 553 Size: 71



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack Size 232
// Inherited 144 bytes 
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> AnimationSections;  // Offset: 152 Size: 16
	char pad_168_1 : 7;  // Offset: 168 Size: 1
	bool bUseLegacySectionIndexBlend : 1;  // Offset: 168 Size: 1
	char pad_169[7];  // Offset: 169 Size: 7
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams;  // Offset: 176 Size: 48
	char pad_224_1 : 7;  // Offset: 224 Size: 1
	bool bBlendFirstChildOfRoot : 1;  // Offset: 224 Size: 1
	char pad_225[7];  // Offset: 225 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneSlomoSection Size 392
// Inherited 232 bytes 
class UMovieSceneSlomoSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneFloatChannel FloatCurve;  // Offset: 232 Size: 160



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneSlomoTrack Size 200
// Inherited 192 bytes 
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneStringSection Size 392
// Inherited 232 bytes 
class UMovieSceneStringSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneStringChannel StringCurve;  // Offset: 232 Size: 160



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneStringTrack Size 200
// Inherited 192 bytes 
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{

 public: 
	char pad_192[8];  // Offset: 192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneTransformOriginSystem Size 120
// Inherited 64 bytes 
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[56];  // Offset: 64 Size: 56



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneVectorPropertySystem Size 88
// Inherited 88 bytes 
class UMovieSceneVectorPropertySystem : public UMovieScenePropertySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneVectorTrack Size 200
// Inherited 192 bytes 
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{

 public: 
	int32_t NumChannelsUsed;  // Offset: 192 Size: 4
	char pad_196[4];  // Offset: 196 Size: 4



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneVisibilityTrack Size 200
// Inherited 200 bytes 
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem Size 144
// Inherited 64 bytes 
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[80];  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MovieSceneTracks.WeightAndEasingEvaluatorSystem Size 120
// Inherited 64 bytes 
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[56];  // Offset: 64 Size: 56



 // Functions 
 public:
}; 
 
 


