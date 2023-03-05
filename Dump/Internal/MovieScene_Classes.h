#pragma once 
#include <MovieScene_Structs.h>
 
 
 
//Class MovieScene.TestMovieSceneSequence Size 104
// Inherited 96 bytes 
class UTestMovieSceneSequence : public UMovieSceneSequence
{

 public: 
	struct UMovieScene* MovieScene;  // Offset: 96 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSubSection Size 360
// Inherited 232 bytes 
class UMovieSceneSubSection : public UMovieSceneSection
{

 public: 
	struct FMovieSceneSectionParameters Parameters;  // Offset: 232 Size: 36
	float StartOffset;  // Offset: 268 Size: 4
	float TimeScale;  // Offset: 272 Size: 4
	float PrerollTime;  // Offset: 276 Size: 4
	char NetworkMask;  // Offset: 280 Size: 1
	char pad_281[7];  // Offset: 281 Size: 7
	struct UMovieSceneSequence* SubSequence;  // Offset: 288 Size: 8
	 ActorToRecord;  // Offset: 296 Size: 28
	char pad_324[4];  // Offset: 324 Size: 4
	struct FString TargetSequenceName;  // Offset: 328 Size: 16
	struct FDirectoryPath TargetPathToRecordTo;  // Offset: 344 Size: 16



 // Functions 
 public:
	void SetSequence(struct UMovieSceneSequence* Sequence); // Function MovieScene.MovieSceneSubSection.SetSequence
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSubSection.GetSequence
}; 
 
 


//Class MovieScene.TestMovieSceneSubSection Size 360
// Inherited 360 bytes 
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneTrack Size 144
// Inherited 80 bytes 
class UMovieSceneTrack : public UMovieSceneSignedObject
{

 public: 
	struct FMovieSceneTrackEvalOptions EvalOptions;  // Offset: 80 Size: 4
	char pad_84[1];  // Offset: 84 Size: 1
	char pad_85_1 : 7;  // Offset: 85 Size: 1
	bool bIsEvalDisabled : 1;  // Offset: 85 Size: 1
	char pad_86[2];  // Offset: 86 Size: 2
	struct TArray<int32_t> RowsDisabled;  // Offset: 88 Size: 16
	char pad_104[4];  // Offset: 104 Size: 4
	struct FGuid EvaluationFieldGuid;  // Offset: 108 Size: 16
	char pad_124[4];  // Offset: 124 Size: 4
	struct FMovieSceneTrackEvaluationField EvaluationField;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEvaluationHookSystem Size 144
// Inherited 64 bytes 
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{

 public: 
	struct TMap<struct FMovieSceneEvaluationInstanceKey, struct FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance;  // Offset: 64 Size: 80



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSignedObject Size 80
// Inherited 40 bytes 
class UMovieSceneSignedObject : public UObject
{

 public: 
	struct FGuid Signature;  // Offset: 40 Size: 16
	char pad_56[24];  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSection Size 232
// Inherited 80 bytes 
class UMovieSceneSection : public UMovieSceneSignedObject
{

 public: 
	struct FMovieSceneSectionEvalOptions EvalOptions;  // Offset: 80 Size: 2
	char pad_82[6];  // Offset: 82 Size: 6
	struct FMovieSceneEasingSettings Easing;  // Offset: 88 Size: 56
	struct FMovieSceneFrameRange SectionRange;  // Offset: 144 Size: 16
	struct FFrameNumber PreRollFrames;  // Offset: 160 Size: 4
	struct FFrameNumber PostRollFrames;  // Offset: 164 Size: 4
	int32_t RowIndex;  // Offset: 168 Size: 4
	int32_t OverlapPriority;  // Offset: 172 Size: 4
	char bIsActive : 1;  // Offset: 176 Size: 1
	char bIsLocked : 1;  // Offset: 176 Size: 1
	char pad_176_1 : 6;  // Offset: 176 Size: 1
	char pad_177[4];  // Offset: 177 Size: 4
	float StartTime;  // Offset: 180 Size: 4
	float EndTime;  // Offset: 184 Size: 4
	float PrerollTime;  // Offset: 188 Size: 4
	float PostrollTime;  // Offset: 192 Size: 4
	char bIsInfinite : 1;  // Offset: 196 Size: 1
	char pad_196_1 : 7;  // Offset: 196 Size: 1
	char pad_197[4];  // Offset: 197 Size: 4
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool bSupportsInfiniteRange : 1;  // Offset: 200 Size: 1
	struct FOptionalMovieSceneBlendType BlendType;  // Offset: 201 Size: 2
	char pad_203[29];  // Offset: 203 Size: 29



 // Functions 
 public:
	void SetRowIndex(int32_t NewRowIndex); // Function MovieScene.MovieSceneSection.SetRowIndex
	void SetPreRollFrames(int32_t InPreRollFrames); // Function MovieScene.MovieSceneSection.SetPreRollFrames
	void SetPostRollFrames(int32_t InPostRollFrames); // Function MovieScene.MovieSceneSection.SetPostRollFrames
	void SetOverlapPriority(int32_t NewPriority); // Function MovieScene.MovieSceneSection.SetOverlapPriority
	void SetIsLocked(bool bInIsLocked); // Function MovieScene.MovieSceneSection.SetIsLocked
	void SetIsActive(bool bInIsActive); // Function MovieScene.MovieSceneSection.SetIsActive
	void SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode); // Function MovieScene.MovieSceneSection.SetCompletionMode
	void SetBlendType(enum class EMovieSceneBlendType InBlendType); // Function MovieScene.MovieSceneSection.SetBlendType
	bool IsLocked(); // Function MovieScene.MovieSceneSection.IsLocked
	bool IsActive(); // Function MovieScene.MovieSceneSection.IsActive
	int32_t GetRowIndex(); // Function MovieScene.MovieSceneSection.GetRowIndex
	int32_t GetPreRollFrames(); // Function MovieScene.MovieSceneSection.GetPreRollFrames
	int32_t GetPostRollFrames(); // Function MovieScene.MovieSceneSection.GetPostRollFrames
	int32_t GetOverlapPriority(); // Function MovieScene.MovieSceneSection.GetOverlapPriority
	enum class EMovieSceneCompletionMode GetCompletionMode(); // Function MovieScene.MovieSceneSection.GetCompletionMode
	struct FOptionalMovieSceneBlendType GetBlendType(); // Function MovieScene.MovieSceneSection.GetBlendType
}; 
 
 


//Class MovieScene.MovieSceneSpawnTrack Size 176
// Inherited 144 bytes 
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16
	struct FGuid ObjectGuid;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneNameableTrack Size 144
// Inherited 144 bytes 
class UMovieSceneNameableTrack : public UMovieSceneTrack
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.NodeAndChannelMappings Size 40
// Inherited 40 bytes 
class UNodeAndChannelMappings : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSequence Size 96
// Inherited 80 bytes 
class UMovieSceneSequence : public UMovieSceneSignedObject
{

 public: 
	struct UMovieSceneCompiledData* CompiledData;  // Offset: 80 Size: 8
	enum class EMovieSceneCompletionMode DefaultCompletionMode;  // Offset: 88 Size: 1
	char pad_89_1 : 7;  // Offset: 89 Size: 1
	bool bParentContextsAreSignificant : 1;  // Offset: 89 Size: 1
	char pad_90_1 : 7;  // Offset: 90 Size: 1
	bool bPlayableDirectly : 1;  // Offset: 90 Size: 1
	enum class EMovieSceneSequenceFlags SequenceFlags;  // Offset: 91 Size: 1
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
	struct TArray<struct FMovieSceneObjectBindingID> FindBindingsByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingsByTag
	struct FMovieSceneObjectBindingID FindBindingByTag(struct FName InBindingName); // Function MovieScene.MovieSceneSequence.FindBindingByTag
}; 
 
 


//Class MovieScene.MovieSceneSequencePlayer Size 1256
// Inherited 40 bytes 
class UMovieSceneSequencePlayer : public UObject
{

 public: 
	char pad_40[568];  // Offset: 40 Size: 568
	struct FMulticastInlineDelegate OnPlay;  // Offset: 608 Size: 16
	struct FMulticastInlineDelegate OnPlayReverse;  // Offset: 624 Size: 16
	struct FMulticastInlineDelegate OnStop;  // Offset: 640 Size: 16
	struct FMulticastInlineDelegate OnPause;  // Offset: 656 Size: 16
	struct FMulticastInlineDelegate OnFinished;  // Offset: 672 Size: 16
	enum class EMovieScenePlayerStatus status;  // Offset: 688 Size: 1
	char pad_689[3];  // Offset: 689 Size: 3
	char bReversePlayback : 1;  // Offset: 692 Size: 1
	char pad_692_1 : 7;  // Offset: 692 Size: 1
	char pad_693[4];  // Offset: 693 Size: 4
	struct UMovieSceneSequence* Sequence;  // Offset: 696 Size: 8
	struct FFrameNumber StartTime;  // Offset: 704 Size: 4
	int32_t DurationFrames;  // Offset: 708 Size: 4
	float DurationSubFrames;  // Offset: 712 Size: 4
	int32_t CurrentNumLoops;  // Offset: 716 Size: 4
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // Offset: 720 Size: 20
	char pad_740[4];  // Offset: 740 Size: 4
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;  // Offset: 744 Size: 232
	char pad_976[104];  // Offset: 976 Size: 104
	struct FMovieSceneSequenceReplProperties NetSyncProps;  // Offset: 1080 Size: 16
	struct TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;  // Offset: 1096 Size: 16
	struct UMovieSceneSequenceTickManager* TickManager;  // Offset: 1112 Size: 8
	char pad_1120[136];  // Offset: 1120 Size: 136



 // Functions 
 public:
	void StopAtCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
	void Stop(); // Function MovieScene.MovieSceneSequencePlayer.Stop
	void SetTimeRange(float StartTime, float Duration); // Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
	void SetPlayRate(float PlayRate); // Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
	void SetPlaybackPosition(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	void SetFrameRate(struct FFrameRate FrameRate); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
	void SetFrameRange(int32_t StartFrame, int32_t Duration, float SubFrames); // Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
	void SetDisableCameraCuts(bool bInDisableCameraCuts); // Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	void ScrubToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
	bool ScrubToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
	void ScrubToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
	void Scrub(); // Function MovieScene.MovieSceneSequencePlayer.Scrub
	void RPC_OnStopEvent(struct FFrameTime StoppedTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, struct FFrameTime RelevantTime); // Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
	void RestoreState(); // Function MovieScene.MovieSceneSequencePlayer.RestoreState
	void PlayToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
	bool PlayToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
	void PlayToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
	void PlayTo(struct FMovieSceneSequencePlaybackParams PlaybackParams); // Function MovieScene.MovieSceneSequencePlayer.PlayTo
	void PlayReverse(); // Function MovieScene.MovieSceneSequencePlayer.PlayReverse
	void PlayLooping(int32_t NumLoops); // Function MovieScene.MovieSceneSequencePlayer.PlayLooping
	void Play(); // Function MovieScene.MovieSceneSequencePlayer.Play
	void Pause(); // Function MovieScene.MovieSceneSequencePlayer.Pause
	void JumpToSeconds(float TimeInSeconds); // Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
	bool JumpToMarkedFrame(struct FString InLabel); // Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
	void JumpToFrame(struct FFrameTime NewPosition); // Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
	bool IsReversed(); // Function MovieScene.MovieSceneSequencePlayer.IsReversed
	bool IsPlaying(); // Function MovieScene.MovieSceneSequencePlayer.IsPlaying
	bool IsPaused(); // Function MovieScene.MovieSceneSequencePlayer.IsPaused
	void GoToEndAndStop(); // Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	struct FQualifiedFrameTime GetStartTime(); // Function MovieScene.MovieSceneSequencePlayer.GetStartTime
	struct UMovieSceneSequence* GetSequence(); // Function MovieScene.MovieSceneSequencePlayer.GetSequence
	float GetPlayRate(); // Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
	struct TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(struct UObject* InObject); // Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
	struct FFrameRate GetFrameRate(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
	int32_t GetFrameDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
	struct FQualifiedFrameTime GetEndTime(); // Function MovieScene.MovieSceneSequencePlayer.GetEndTime
	struct FQualifiedFrameTime GetDuration(); // Function MovieScene.MovieSceneSequencePlayer.GetDuration
	bool GetDisableCameraCuts(); // Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	struct FQualifiedFrameTime GetCurrentTime(); // Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	void ChangePlaybackDirection(); // Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
}; 
 
 


//Class MovieScene.MovieSceneCompiledDataManager Size 560
// Inherited 40 bytes 
class UMovieSceneCompiledDataManager : public UObject
{

 public: 
	char pad_40[176];  // Offset: 40 Size: 176
	struct TMap<int32_t, struct FMovieSceneSequenceHierarchy> Hierarchies;  // Offset: 216 Size: 80
	struct TMap<int32_t, struct FMovieSceneEvaluationTemplate> TrackTemplates;  // Offset: 296 Size: 80
	struct TMap<int32_t, struct FMovieSceneEvaluationField> TrackTemplateFields;  // Offset: 376 Size: 80
	struct TMap<int32_t, struct FMovieSceneEntityComponentField> EntityComponentFields;  // Offset: 456 Size: 80
	char pad_536[24];  // Offset: 536 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEntitySystem Size 64
// Inherited 40 bytes 
class UMovieSceneEntitySystem : public UObject
{

 public: 
	struct UMovieSceneEntitySystemLinker* Linker;  // Offset: 40 Size: 8
	char pad_48[16];  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneDeterminismSource Size 40
// Inherited 40 bytes 
class UMovieSceneDeterminismSource : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSubTrack Size 160
// Inherited 144 bytes 
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneTrackInstanceSystem Size 72
// Inherited 64 bytes 
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{

 public: 
	struct UMovieSceneTrackInstanceInstantiator* Instantiator;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneCustomClockSource Size 40
// Inherited 40 bytes 
class UMovieSceneCustomClockSource : public UInterface
{

 public: 



 // Functions 
 public:
	void OnTick(float DeltaSeconds, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnTick
	void OnStopPlaying(struct FQualifiedFrameTime& InStopTime); // Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
	void OnStartPlaying(struct FQualifiedFrameTime& InStartTime); // Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
	struct FFrameTime OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate); // Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
}; 
 
 


//Class MovieScene.MovieSceneEntityProvider Size 40
// Inherited 40 bytes 
class UMovieSceneEntityProvider : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.TestMovieSceneSubTrack Size 176
// Inherited 160 bytes 
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> SectionArray;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEvaluationHook Size 40
// Inherited 40 bytes 
class UMovieSceneEvaluationHook : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieScenePlaybackClient Size 40
// Inherited 40 bytes 
class UMovieScenePlaybackClient : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.TestMovieSceneSection Size 232
// Inherited 232 bytes 
class UTestMovieSceneSection : public UMovieSceneSection
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEntitySystemLinker Size 1264
// Inherited 40 bytes 
class UMovieSceneEntitySystemLinker : public UObject
{

 public: 
	char pad_40[624];  // Offset: 40 Size: 624
	struct FMovieSceneEntitySystemGraph SystemGraph;  // Offset: 664 Size: 312
	char pad_976[288];  // Offset: 976 Size: 288



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEntityInstantiatorSystem Size 64
// Inherited 64 bytes 
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneTrackTemplateProducer Size 40
// Inherited 40 bytes 
class UMovieSceneTrackTemplateProducer : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneNodeGroup Size 40
// Inherited 40 bytes 
class UMovieSceneNodeGroup : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.TestMovieSceneEvalHookSection Size 280
// Inherited 256 bytes 
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{

 public: 
	char pad_256[24];  // Offset: 256 Size: 24



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneGenericBoundObjectInstantiator Size 64
// Inherited 64 bytes 
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneNodeGroupCollection Size 40
// Inherited 40 bytes 
class UMovieSceneNodeGroupCollection : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieScene Size 328
// Inherited 80 bytes 
class UMovieScene : public UMovieSceneSignedObject
{

 public: 
	struct TArray<struct FMovieSceneSpawnable> Spawnables;  // Offset: 80 Size: 16
	struct TArray<struct FMovieScenePossessable> Possessables;  // Offset: 96 Size: 16
	struct TArray<struct FMovieSceneBinding> ObjectBindings;  // Offset: 112 Size: 16
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups;  // Offset: 128 Size: 80
	struct TArray<struct UMovieSceneTrack*> MasterTracks;  // Offset: 208 Size: 16
	struct UMovieSceneTrack* CameraCutTrack;  // Offset: 224 Size: 8
	struct FMovieSceneFrameRange SelectionRange;  // Offset: 232 Size: 16
	struct FMovieSceneFrameRange PlaybackRange;  // Offset: 248 Size: 16
	struct FFrameRate TickResolution;  // Offset: 264 Size: 8
	struct FFrameRate DisplayRate;  // Offset: 272 Size: 8
	enum class EMovieSceneEvaluationType EvaluationType;  // Offset: 280 Size: 1
	enum class EUpdateClockSource ClockSource;  // Offset: 281 Size: 1
	char pad_282[6];  // Offset: 282 Size: 6
	struct FSoftObjectPath CustomClockSourcePath;  // Offset: 288 Size: 24
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames;  // Offset: 312 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBindingOverrides Size 144
// Inherited 40 bytes 
class UMovieSceneBindingOverrides : public UObject
{

 public: 
	struct TArray<struct FMovieSceneBindingOverrideData> BindingData;  // Offset: 40 Size: 16
	char pad_56[88];  // Offset: 56 Size: 88



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBindingOwnerInterface Size 40
// Inherited 40 bytes 
class UMovieSceneBindingOwnerInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBlenderSystem Size 104
// Inherited 64 bytes 
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[40];  // Offset: 64 Size: 40



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneCachePreAnimatedStateSystem Size 96
// Inherited 64 bytes 
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[32];  // Offset: 64 Size: 32



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBoolSection Size 384
// Inherited 232 bytes 
class UMovieSceneBoolSection : public UMovieSceneSection
{

 public: 
	char pad_232_1 : 7;  // Offset: 232 Size: 1
	bool DefaultValue : 1;  // Offset: 232 Size: 1
	char pad_233[7];  // Offset: 233 Size: 7
	struct FMovieSceneBoolChannel BoolCurve;  // Offset: 240 Size: 144



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneFolder Size 112
// Inherited 40 bytes 
class UMovieSceneFolder : public UObject
{

 public: 
	struct FName FolderName;  // Offset: 40 Size: 8
	struct TArray<struct UMovieSceneFolder*> ChildFolders;  // Offset: 48 Size: 16
	struct TArray<struct UMovieSceneTrack*> ChildMasterTracks;  // Offset: 64 Size: 16
	struct TArray<struct FString> ChildObjectBindingStrings;  // Offset: 80 Size: 16
	char pad_96[16];  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBoundSceneComponentInstantiator Size 64
// Inherited 64 bytes 
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSceneComponentImpersonator Size 40
// Inherited 40 bytes 
class UMovieSceneSceneComponentImpersonator : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneTrackInstanceInstantiator Size 240
// Inherited 64 bytes 
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[176];  // Offset: 64 Size: 176



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneCompiledData Size 1016
// Inherited 40 bytes 
class UMovieSceneCompiledData : public UObject
{

 public: 
	struct FMovieSceneEvaluationTemplate EvaluationTemplate;  // Offset: 40 Size: 352
	struct FMovieSceneSequenceHierarchy Hierarchy;  // Offset: 392 Size: 280
	struct FMovieSceneEntityComponentField EntityComponentField;  // Offset: 672 Size: 240
	struct FMovieSceneEvaluationField TrackTemplateField;  // Offset: 912 Size: 48
	struct TArray<struct FFrameTime> DeterminismFences;  // Offset: 960 Size: 16
	struct FGuid CompiledSignature;  // Offset: 976 Size: 16
	struct FGuid CompilerVersion;  // Offset: 992 Size: 16
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;  // Offset: 1008 Size: 1
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask;  // Offset: 1009 Size: 1
	enum class EMovieSceneSequenceFlags AccumulatedFlags;  // Offset: 1010 Size: 1
	char pad_1011[5];  // Offset: 1011 Size: 5



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneFloatDecomposer Size 40
// Inherited 40 bytes 
class UMovieSceneFloatDecomposer : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSpawnSection Size 392
// Inherited 384 bytes 
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{

 public: 
	char pad_384[8];  // Offset: 384 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneBuiltInEasingFunction Size 56
// Inherited 40 bytes 
class UMovieSceneBuiltInEasingFunction : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	enum class EMovieSceneBuiltInEasing Type;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7



 // Functions 
 public:
}; 
 
 


//Class MovieScene.TestMovieSceneTrack Size 176
// Inherited 144 bytes 
class UTestMovieSceneTrack : public UMovieSceneTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	char pad_152_1 : 7;  // Offset: 152 Size: 1
	bool bHighPassFilter : 1;  // Offset: 152 Size: 1
	char pad_153[7];  // Offset: 153 Size: 7
	struct TArray<struct UMovieSceneSection*> SectionArray;  // Offset: 160 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEasingExternalCurve Size 56
// Inherited 40 bytes 
class UMovieSceneEasingExternalCurve : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UCurveFloat* Curve;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneEasingFunction Size 40
// Inherited 40 bytes 
class UMovieSceneEasingFunction : public UInterface
{

 public: 



 // Functions 
 public:
	float OnEvaluate(float Interp); // Function MovieScene.MovieSceneEasingFunction.OnEvaluate
}; 
 
 


//Class MovieScene.MovieSceneEvalTimeSystem Size 80
// Inherited 64 bytes 
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{

 public: 
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneHookSection Size 256
// Inherited 232 bytes 
class UMovieSceneHookSection : public UMovieSceneSection
{

 public: 
	char pad_232[16];  // Offset: 232 Size: 16
	char bRequiresRangedHook : 1;  // Offset: 248 Size: 1
	char bRequiresTriggerHooks : 1;  // Offset: 248 Size: 1
	char pad_248_1 : 6;  // Offset: 248 Size: 1
	char pad_249[8];  // Offset: 249 Size: 8



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneKeyProxy Size 40
// Inherited 40 bytes 
class UMovieSceneKeyProxy : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneMasterInstantiatorSystem Size 64
// Inherited 64 bytes 
class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieScenePreAnimatedStateSystemInterface Size 40
// Inherited 40 bytes 
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneRestorePreAnimatedStateSystem Size 80
// Inherited 64 bytes 
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{

 public: 
	char pad_64[16];  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSequenceActor Size 40
// Inherited 40 bytes 
class UMovieSceneSequenceActor : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSequenceTickManager Size 208
// Inherited 40 bytes 
class UMovieSceneSequenceTickManager : public UObject
{

 public: 
	struct TArray<struct FMovieSceneSequenceActorPointers> SequenceActors;  // Offset: 40 Size: 16
	struct UMovieSceneEntitySystemLinker* Linker;  // Offset: 56 Size: 8
	char pad_64[144];  // Offset: 64 Size: 144



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneSpawnablesSystem Size 64
// Inherited 64 bytes 
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class MovieScene.TestMovieSceneEvalHookTrack Size 160
// Inherited 144 bytes 
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{

 public: 
	struct TArray<struct UMovieSceneSection*> SectionArray;  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class MovieScene.MovieSceneTrackInstance Size 80
// Inherited 40 bytes 
class UMovieSceneTrackInstance : public UObject
{

 public: 
	struct UObject* AnimatedObject;  // Offset: 40 Size: 8
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bIsMasterTrackInstance : 1;  // Offset: 48 Size: 1
	char pad_49[7];  // Offset: 49 Size: 7
	struct UMovieSceneEntitySystemLinker* Linker;  // Offset: 56 Size: 8
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs;  // Offset: 64 Size: 16



 // Functions 
 public:
}; 
 
 


