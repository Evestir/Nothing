#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function MovieScene.MovieSceneSection.SetPostRollFrames Size 4
class FSetPostRollFrames
{

 public: 
	int32_t InPostRollFrames;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneChannel Size 8
class FMovieSceneChannel
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneKeyHandleMap Size 96
// Inherited 96 bytes 
class FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneBinding Size 48
class FMovieSceneBinding
{

 public: 
	struct FGuid ObjectGuid;  // Offset: 0 Size: 16
	struct FString BindingName;  // Offset: 16 Size: 16
	struct TArray<struct UMovieSceneTrack*> Tracks;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneFloatValue Size 28
class FMovieSceneFloatValue
{

 public: 
	float Value;  // Offset: 0 Size: 4
	struct FMovieSceneTangentData Tangent;  // Offset: 4 Size: 20
	enum class ERichCurveInterpMode InterpMode;  // Offset: 24 Size: 1
	enum class ERichCurveTangentMode TangentMode;  // Offset: 25 Size: 1
	char PaddingByte;  // Offset: 26 Size: 1
	char pad_27[1];  // Offset: 27 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTangentData Size 20
class FMovieSceneTangentData
{

 public: 
	float ArriveTangent;  // Offset: 0 Size: 4
	float LeaveTangent;  // Offset: 4 Size: 4
	float ArriveTangentWeight;  // Offset: 8 Size: 4
	float LeaveTangentWeight;  // Offset: 12 Size: 4
	enum class ERichCurveTangentWeightMode TangentWeightMode;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate Size 8
class FMovieSceneFieldEntry_ChildTemplate
{

 public: 
	uint16_t ChildIndex;  // Offset: 0 Size: 2
	enum class ESectionEvaluationFlags Flags;  // Offset: 2 Size: 1
	char pad_3[1];  // Offset: 3 Size: 1
	struct FFrameNumber ForcedTime;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneByteChannel Size 152
// Inherited 8 bytes 
class FMovieSceneByteChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> Times;  // Offset: 8 Size: 16
	char DefaultValue;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bHasDefaultValue : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6
	struct TArray<char> Values;  // Offset: 32 Size: 16
	struct UEnum* Enum;  // Offset: 48 Size: 8
	char pad_56[96];  // Offset: 56 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneFloatChannel Size 160
// Inherited 8 bytes 
class FMovieSceneFloatChannel : public FMovieSceneChannel
{

 public: 
	enum class ERichCurveExtrapolation PreInfinityExtrap;  // Offset: 8 Size: 1
	enum class ERichCurveExtrapolation PostInfinityExtrap;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6
	struct TArray<struct FFrameNumber> Times;  // Offset: 16 Size: 16
	struct TArray<struct FMovieSceneFloatValue> Values;  // Offset: 32 Size: 16
	float DefaultValue;  // Offset: 48 Size: 4
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	bool bHasDefaultValue : 1;  // Offset: 52 Size: 1
	char pad_53[3];  // Offset: 53 Size: 3
	struct FMovieSceneKeyHandleMap KeyHandles;  // Offset: 56 Size: 96
	struct FFrameRate TickResolution;  // Offset: 152 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.TrackInstanceInputComponent Size 16
class FTrackInstanceInputComponent
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	int32_t OutputIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneIntegerChannel Size 144
// Inherited 8 bytes 
class FMovieSceneIntegerChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> Times;  // Offset: 8 Size: 16
	int32_t DefaultValue;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bHasDefaultValue : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct TArray<int32_t> Values;  // Offset: 32 Size: 16
	char pad_48[96];  // Offset: 48 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvalTemplateBase Size 16
class FMovieSceneEvalTemplateBase
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackLabels Size 16
class FMovieSceneTrackLabels
{

 public: 
	struct TArray<struct FString> Strings;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvalTemplate Size 32
// Inherited 16 bytes 
class FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{

 public: 
	enum class EMovieSceneCompletionMode CompletionMode;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3
	struct TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;  // Offset: 20 Size: 8
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneBoolChannel Size 144
// Inherited 8 bytes 
class FMovieSceneBoolChannel : public FMovieSceneChannel
{

 public: 
	struct TArray<struct FFrameNumber> Times;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool DefaultValue : 1;  // Offset: 24 Size: 1
	char pad_25_1 : 7;  // Offset: 25 Size: 1
	bool bHasDefaultValue : 1;  // Offset: 25 Size: 1
	char pad_26[6];  // Offset: 26 Size: 6
	struct TArray<bool> Values;  // Offset: 32 Size: 16
	char pad_48[96];  // Offset: 48 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneMarkedFrame Size 32
class FMovieSceneMarkedFrame
{

 public: 
	struct FFrameNumber FrameNumber;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString Label;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bIsDeterminismFence : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackImplementation Size 16
// Inherited 16 bytes 
class FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvalTemplatePtr Size 136
class FMovieSceneEvalTemplatePtr
{

 public: 
	char pad_0[136];  // Offset: 0 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieScenePropertyBinding Size 20
class FMovieScenePropertyBinding
{

 public: 
	struct FName PropertyName;  // Offset: 0 Size: 8
	struct FName PropertyPath;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bCanUseClassLookup : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes Size 56
class FMovieSceneEntitySystemGraphNodes
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieScenePropertySectionTemplate Size 56
// Inherited 32 bytes 
class FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FMovieScenePropertySectionData PropertyData;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieScenePropertySectionData Size 24
class FMovieScenePropertySectionData
{

 public: 
	struct FName PropertyName;  // Offset: 0 Size: 8
	struct FString PropertyPath;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSectionGroup Size 16
class FMovieSceneSectionGroup
{

 public: 
	struct TArray<struct TWeakObjectPtr<UMovieSceneSection>> Sections;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings Size 20
class FMovieSceneSequencePlaybackSettings
{

 public: 
	char bAutoPlay : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	struct FMovieSceneSequenceLoopCount LoopCount;  // Offset: 4 Size: 4
	float PlayRate;  // Offset: 8 Size: 4
	float StartTime;  // Offset: 12 Size: 4
	char bRandomStartTime : 1;  // Offset: 16 Size: 1
	char bRestoreState : 1;  // Offset: 16 Size: 1
	char bDisableMovementInput : 1;  // Offset: 16 Size: 1
	char bDisableLookAtInput : 1;  // Offset: 16 Size: 1
	char bHidePlayer : 1;  // Offset: 16 Size: 1
	char bHideHud : 1;  // Offset: 16 Size: 1
	char bDisableCameraCuts : 1;  // Offset: 16 Size: 1
	char bPauseAtEnd : 1;  // Offset: 16 Size: 1
	char pad_17[3];  // Offset: 17 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceLoopCount Size 4
class FMovieSceneSequenceLoopCount
{

 public: 
	int32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSegmentIdentifier Size 4
class FMovieSceneSegmentIdentifier
{

 public: 
	int32_t IdentifierIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey Size 12
class FMovieSceneEvaluationFieldEntityKey
{

 public: 
	struct TWeakObjectPtr<UObject> EntityOwner;  // Offset: 0 Size: 8
	uint32_t EntityID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack Size 12
class FMovieSceneFieldEntry_EvaluationTrack
{

 public: 
	struct FMovieSceneEvaluationFieldTrackPtr TrackPtr;  // Offset: 0 Size: 8
	uint16_t NumChildren;  // Offset: 8 Size: 2
	char pad_10[2];  // Offset: 10 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneExpansionState Size 1
class FMovieSceneExpansionState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bExpanded : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationHookComponent Size 32
class FMovieSceneEvaluationHookComponent
{

 public: 
	struct TScriptInterface<IMovieSceneEvaluationHook> Interface;  // Offset: 0 Size: 16
	char pad_16[16];  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackInstanceComponent Size 16
class FMovieSceneTrackInstanceComponent
{

 public: 
	struct UMovieSceneSection* Owner;  // Offset: 0 Size: 8
	UMovieSceneTrackInstance* TrackInstanceClass;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.EasingComponentData Size 8
class FEasingComponentData
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings Size 24
class FGetObjectBindings
{

 public: 
	struct UObject* InObject;  // Offset: 0 Size: 8
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr Size 8
class FMovieSceneEvaluationFieldTrackPtr
{

 public: 
	struct FMovieSceneSequenceID SequenceID;  // Offset: 0 Size: 4
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneDeterminismData Size 24
class FMovieSceneDeterminismData
{

 public: 
	struct TArray<struct FFrameTime> Fences;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bParentSequenceRequiresLowerFence : 1;  // Offset: 16 Size: 1
	char pad_17_1 : 7;  // Offset: 17 Size: 1
	bool bParentSequenceRequiresUpperFence : 1;  // Offset: 17 Size: 1
	char pad_18[6];  // Offset: 18 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData Size 32
class FMovieSceneEvaluationFieldEntityMetaData
{

 public: 
	struct FString OverrideBoundPropertyPath;  // Offset: 0 Size: 16
	struct FFrameNumber ForcedTime;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	enum class ESectionEvaluationFlags Flags;  // Offset: 24 Size: 1
	char bEvaluateInSequencePreRoll : 1;  // Offset: 25 Size: 1
	char bEvaluateInSequencePostRoll : 1;  // Offset: 25 Size: 1
	char pad_25_1 : 6;  // Offset: 25 Size: 1
	char pad_26[7];  // Offset: 26 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneObjectBindingIDs Size 16
class FMovieSceneObjectBindingIDs
{

 public: 
	struct TArray<struct FMovieSceneObjectBindingID> IDs;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree Size 96
class FMovieSceneEvaluationFieldEntityTree
{

 public: 
	char pad_0[96];  // Offset: 0 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneObjectBindingID Size 24
class FMovieSceneObjectBindingID
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	int32_t SequenceID;  // Offset: 16 Size: 4
	int32_t ResolveParentIndex;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationOperand Size 20
class FMovieSceneEvaluationOperand
{

 public: 
	struct FGuid ObjectBindingId;  // Offset: 0 Size: 16
	struct FMovieSceneSequenceID SequenceID;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEditorData Size 240
class FMovieSceneEditorData
{

 public: 
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates;  // Offset: 0 Size: 80
	struct TArray<struct FString> PinnedNodes;  // Offset: 80 Size: 16
	double ViewStart;  // Offset: 96 Size: 8
	double ViewEnd;  // Offset: 104 Size: 8
	double WorkStart;  // Offset: 112 Size: 8
	double WorkEnd;  // Offset: 120 Size: 8
	struct TSet<struct FFrameNumber> MarkedFrames;  // Offset: 128 Size: 80
	struct FFloatRange WorkingRange;  // Offset: 208 Size: 16
	struct FFloatRange ViewRange;  // Offset: 224 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTimecodeSource Size 24
class FMovieSceneTimecodeSource
{

 public: 
	struct FTimecode Timecode;  // Offset: 0 Size: 20
	struct FFrameNumber DeltaFrame;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneBindingOverrideData Size 36
class FMovieSceneBindingOverrideData
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBindingId;  // Offset: 0 Size: 24
	struct TWeakObjectPtr<UObject> Object;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bOverridesDefault : 1;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackEvalOptions Size 4
class FMovieSceneTrackEvalOptions
{

 public: 
	char bCanEvaluateNearestSection : 1;  // Offset: 0 Size: 1
	char bEvalNearestSection : 1;  // Offset: 0 Size: 1
	char bEvaluateInPreroll : 1;  // Offset: 0 Size: 1
	char bEvaluateInPostroll : 1;  // Offset: 0 Size: 1
	char bEvaluateNearestSection : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 3;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.OptionalMovieSceneBlendType Size 2
class FOptionalMovieSceneBlendType
{

 public: 
	enum class EMovieSceneBlendType BlendType;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bIsValid : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct Size 1
class FMovieSceneCompiledSequenceFlagStruct
{

 public: 
	char bParentSequenceRequiresLowerFence : 1;  // Offset: 0 Size: 1
	char bParentSequenceRequiresUpperFence : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 6;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct Size 1
class FMovieSceneSequenceCompilerMaskStruct
{

 public: 
	char bHierarchy : 1;  // Offset: 0 Size: 1
	char bEvaluationTemplate : 1;  // Offset: 0 Size: 1
	char bEvaluationTemplateField : 1;  // Offset: 0 Size: 1
	char bEntityComponentField : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 4;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetIsLocked Size 1
class FSetIsLocked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIsLocked : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEntitySystemGraph Size 312
class FMovieSceneEntitySystemGraph
{

 public: 
	char pad_0[128];  // Offset: 0 Size: 128
	struct FMovieSceneEntitySystemGraphNodes nodes;  // Offset: 128 Size: 56
	char pad_184[128];  // Offset: 184 Size: 128



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode Size 40
class FMovieSceneEntitySystemGraphNode
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32
	struct UMovieSceneEntitySystem* System;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneFrameRange Size 16
class FMovieSceneFrameRange
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.IsPaused Size 1
class FIsPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceInstanceData Size 8
class FMovieSceneSequenceInstanceData
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEmptyStruct Size 1
class FMovieSceneEmptyStruct
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackInstanceEntry Size 16
class FMovieSceneTrackInstanceEntry
{

 public: 
	struct UObject* BoundObject;  // Offset: 0 Size: 8
	struct UMovieSceneTrackInstance* TrackInstance;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationField Size 48
class FMovieSceneEvaluationField
{

 public: 
	struct TArray<struct FMovieSceneFrameRange> Ranges;  // Offset: 0 Size: 16
	struct TArray<struct FMovieSceneEvaluationGroup> Groups;  // Offset: 16 Size: 16
	struct TArray<struct FMovieSceneEvaluationMetaData> MetaData;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationMetaData Size 32
class FMovieSceneEvaluationMetaData
{

 public: 
	struct TArray<struct FMovieSceneSequenceID> ActiveSequences;  // Offset: 0 Size: 16
	struct TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey Size 16
class FMovieSceneOrderedEvaluationKey
{

 public: 
	struct FMovieSceneEvaluationKey Key;  // Offset: 0 Size: 12
	uint16_t SetupIndex;  // Offset: 12 Size: 2
	uint16_t TearDownIndex;  // Offset: 14 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr Size 12
// Inherited 8 bytes 
class FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{

 public: 
	struct FMovieSceneSegmentIdentifier SegmentID;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationKey Size 12
class FMovieSceneEvaluationKey
{

 public: 
	struct FMovieSceneSequenceID SequenceID;  // Offset: 0 Size: 4
	struct FMovieSceneTrackIdentifier TrackIdentifier;  // Offset: 4 Size: 4
	uint32_t SectionIndex;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackIdentifier Size 4
class FMovieSceneTrackIdentifier
{

 public: 
	uint32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer Size 16
class FMovieSceneEvaluationHookEventContainer
{

 public: 
	struct TArray<struct FMovieSceneEvaluationHookEvent> events;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationTemplate Size 352
class FMovieSceneEvaluationTemplate
{

 public: 
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;  // Offset: 0 Size: 80
	char pad_80[80];  // Offset: 80 Size: 80
	struct FGuid SequenceSignature;  // Offset: 160 Size: 16
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4
	struct FMovieSceneTemplateGenerationLedger TemplateLedger;  // Offset: 184 Size: 168



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceID Size 4
class FMovieSceneSequenceID
{

 public: 
	uint32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationGroup Size 48
class FMovieSceneEvaluationGroup
{

 public: 
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;  // Offset: 0 Size: 16
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;  // Offset: 16 Size: 16
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData Size 16
class FMovieSceneEvaluationFieldSharedEntityMetaData
{

 public: 
	struct FGuid ObjectBindingId;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex Size 8
class FMovieSceneEvaluationGroupLUTIndex
{

 public: 
	int32_t NumInitPtrs;  // Offset: 0 Size: 4
	int32_t NumEvalPtrs;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEntityComponentField Size 240
class FMovieSceneEntityComponentField
{

 public: 
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;  // Offset: 0 Size: 96
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;  // Offset: 96 Size: 96
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities;  // Offset: 192 Size: 16
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;  // Offset: 208 Size: 16
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;  // Offset: 224 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity Size 16
class FMovieSceneEvaluationFieldEntity
{

 public: 
	struct FMovieSceneEvaluationFieldEntityKey Key;  // Offset: 0 Size: 12
	int32_t SharedMetaDataIndex;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey Size 4
class FMovieSceneEvaluationInstanceKey
{

 public: 
	char pad_0[4];  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationHookEvent Size 56
class FMovieSceneEvaluationHookEvent
{

 public: 
	struct FMovieSceneEvaluationHookComponent Hook;  // Offset: 0 Size: 32
	char pad_32[24];  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger Size 168
class FMovieSceneTemplateGenerationLedger
{

 public: 
	struct FMovieSceneTrackIdentifier LastTrackIdentifier;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;  // Offset: 8 Size: 80
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;  // Offset: 88 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber Size 4
class FMovieSceneEvaluationTemplateSerialNumber
{

 public: 
	uint32_t Value;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEvaluationTrack Size 120
class FMovieSceneEvaluationTrack
{

 public: 
	struct FGuid ObjectBindingId;  // Offset: 0 Size: 16
	uint16_t EvaluationPriority;  // Offset: 16 Size: 2
	enum class EEvaluationMethod EvaluationMethod;  // Offset: 18 Size: 1
	char pad_19[1];  // Offset: 19 Size: 1
	struct TWeakObjectPtr<UMovieSceneTrack> SourceTrack;  // Offset: 20 Size: 8
	char pad_28[4];  // Offset: 28 Size: 4
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates;  // Offset: 32 Size: 16
	struct FMovieSceneTrackImplementationPtr TrackTemplate;  // Offset: 48 Size: 56
	struct FName EvaluationGroup;  // Offset: 104 Size: 8
	char bEvaluateInPreroll : 1;  // Offset: 112 Size: 1
	char bEvaluateInPostroll : 1;  // Offset: 112 Size: 1
	char bTearDownPriority : 1;  // Offset: 112 Size: 1
	char pad_112_1 : 5;  // Offset: 112 Size: 1
	char pad_113[8];  // Offset: 113 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTimeTransform Size 12
class FMovieSceneTimeTransform
{

 public: 
	float TimeScale;  // Offset: 0 Size: 4
	struct FFrameTime Offset;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackImplementationPtr Size 56
class FMovieSceneTrackImplementationPtr
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSubSectionData Size 28
class FMovieSceneSubSectionData
{

 public: 
	struct TWeakObjectPtr<UMovieSceneSubSection> Section;  // Offset: 0 Size: 8
	struct FGuid ObjectBindingId;  // Offset: 8 Size: 16
	enum class ESectionEvaluationFlags Flags;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance Size 232
class FMovieSceneRootEvaluationTemplateInstance
{

 public: 
	struct TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence;  // Offset: 0 Size: 8
	struct UMovieSceneCompiledDataManager* CompiledDataManager;  // Offset: 8 Size: 8
	char pad_16[8];  // Offset: 16 Size: 8
	struct UMovieSceneEntitySystemLinker* EntitySystemLinker;  // Offset: 24 Size: 8
	char pad_32[112];  // Offset: 32 Size: 112
	struct TMap<struct FMovieSceneSequenceID, struct UObject*> DirectorInstances;  // Offset: 144 Size: 80
	char pad_224[8];  // Offset: 224 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneKeyStruct Size 8
class FMovieSceneKeyStruct
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneKeyTimeStruct Size 40
// Inherited 8 bytes 
class FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{

 public: 
	struct FFrameNumber Time;  // Offset: 8 Size: 4
	char pad_12[28];  // Offset: 12 Size: 28



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct Size 80
class FGeneratedMovieSceneKeyStruct
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneObjectPathChannel Size 192
// Inherited 8 bytes 
class FMovieSceneObjectPathChannel : public FMovieSceneChannel
{

 public: 
	UObject* PropertyClass;  // Offset: 8 Size: 8
	struct TArray<struct FFrameNumber> Times;  // Offset: 16 Size: 16
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;  // Offset: 32 Size: 16
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue;  // Offset: 48 Size: 48
	char pad_96[96];  // Offset: 96 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry Size 24
class FMovieSceneSubSequenceTreeEntry
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue Size 48
class FMovieSceneObjectPathChannelKeyValue
{

 public: 
	struct TSoftObjectPtr<UObject> SoftPtr;  // Offset: 0 Size: 40
	struct UObject* HardPtr;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieScenePossessable Size 72
class FMovieScenePossessable
{

 public: 
	struct TArray<struct FName> Tags;  // Offset: 0 Size: 16
	struct FGuid Guid;  // Offset: 16 Size: 16
	struct FString Name;  // Offset: 32 Size: 16
	UObject* PossessedObjectClass;  // Offset: 48 Size: 8
	struct FGuid ParentGuid;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneCustomClockSource.OnTick Size 8
class FOnTick
{

 public: 
	float DeltaSeconds;  // Offset: 0 Size: 4
	float InPlayRate;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneEasingSettings Size 56
class FMovieSceneEasingSettings
{

 public: 
	int32_t AutoEaseInDuration;  // Offset: 0 Size: 4
	int32_t AutoEaseOutDuration;  // Offset: 4 Size: 4
	struct TScriptInterface<IMovieSceneEasingFunction> EaseIn;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bManualEaseIn : 1;  // Offset: 24 Size: 1
	char pad_25[3];  // Offset: 25 Size: 3
	int32_t ManualEaseInDuration;  // Offset: 28 Size: 4
	struct TScriptInterface<IMovieSceneEasingFunction> EaseOut;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bManualEaseOut : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	int32_t ManualEaseOutDuration;  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSectionEvalOptions Size 2
class FMovieSceneSectionEvalOptions
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bCanEditCompletionMode : 1;  // Offset: 0 Size: 1
	enum class EMovieSceneCompletionMode CompletionMode;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSectionParameters Size 36
class FMovieSceneSectionParameters
{

 public: 
	struct FFrameNumber StartFrameOffset;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bCanLoop : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FFrameNumber EndFrameOffset;  // Offset: 8 Size: 4
	struct FFrameNumber FirstLoopStartFrameOffset;  // Offset: 12 Size: 4
	float TimeScale;  // Offset: 16 Size: 4
	int32_t HierarchicalBias;  // Offset: 20 Size: 4
	float StartOffset;  // Offset: 24 Size: 4
	float PrerollTime;  // Offset: 28 Size: 4
	float PostrollTime;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSegment Size 88
class FMovieSceneSegment
{

 public: 
	char pad_0[88];  // Offset: 0 Size: 88



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.SectionEvaluationData Size 12
class FSectionEvaluationData
{

 public: 
	int32_t ImplIndex;  // Offset: 0 Size: 4
	struct FFrameNumber ForcedTime;  // Offset: 4 Size: 4
	enum class ESectionEvaluationFlags Flags;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceHierarchy Size 280
class FMovieSceneSequenceHierarchy
{

 public: 
	struct FMovieSceneSequenceHierarchyNode RootNode;  // Offset: 0 Size: 24
	struct FMovieSceneSubSequenceTree Tree;  // Offset: 24 Size: 96
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;  // Offset: 120 Size: 80
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;  // Offset: 200 Size: 80



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts Size 1
class FGetDisableCameraCuts
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetRowIndex Size 4
class FGetRowIndex
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode Size 24
class FMovieSceneSequenceHierarchyNode
{

 public: 
	struct FMovieSceneSequenceID parentId;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<struct FMovieSceneSequenceID> Children;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSubSequenceData Size 264
class FMovieSceneSubSequenceData
{

 public: 
	struct FSoftObjectPath Sequence;  // Offset: 0 Size: 24
	struct FMovieSceneSequenceTransform OuterToInnerTransform;  // Offset: 24 Size: 32
	struct FMovieSceneSequenceTransform RootToSequenceTransform;  // Offset: 56 Size: 32
	struct FFrameRate TickResolution;  // Offset: 88 Size: 8
	struct FMovieSceneSequenceID DeterministicSequenceID;  // Offset: 96 Size: 4
	struct FMovieSceneFrameRange ParentPlayRange;  // Offset: 100 Size: 16
	struct FFrameNumber ParentStartFrameOffset;  // Offset: 116 Size: 4
	struct FFrameNumber ParentEndFrameOffset;  // Offset: 120 Size: 4
	struct FFrameNumber ParentFirstLoopStartFrameOffset;  // Offset: 124 Size: 4
	char pad_128_1 : 7;  // Offset: 128 Size: 1
	bool bCanLoop : 1;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	struct FMovieSceneFrameRange PlayRange;  // Offset: 132 Size: 16
	struct FMovieSceneFrameRange FullPlayRange;  // Offset: 148 Size: 16
	struct FMovieSceneFrameRange UnwarpedPlayRange;  // Offset: 164 Size: 16
	struct FMovieSceneFrameRange PreRollRange;  // Offset: 180 Size: 16
	struct FMovieSceneFrameRange PostRollRange;  // Offset: 196 Size: 16
	int16_t HierarchicalBias;  // Offset: 212 Size: 2
	char pad_214_1 : 7;  // Offset: 214 Size: 1
	bool bHasHierarchicalEasing : 1;  // Offset: 214 Size: 1
	char pad_215[1];  // Offset: 215 Size: 1
	struct FMovieSceneSequenceInstanceDataPtr InstanceData;  // Offset: 216 Size: 24
	char pad_240[8];  // Offset: 240 Size: 8
	struct FGuid SubSectionSignature;  // Offset: 248 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr Size 24
class FMovieSceneSequenceInstanceDataPtr
{

 public: 
	char pad_0[24];  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceTransform Size 32
class FMovieSceneSequenceTransform
{

 public: 
	struct FMovieSceneTimeTransform LinearTransform;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneNestedSequenceTransform Size 20
class FMovieSceneNestedSequenceTransform
{

 public: 
	struct FMovieSceneTimeTransform LinearTransform;  // Offset: 0 Size: 12
	struct FMovieSceneTimeWarping Warping;  // Offset: 12 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetOverlapPriority Size 4
class FGetOverlapPriority
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTimeWarping Size 8
class FMovieSceneTimeWarping
{

 public: 
	struct FFrameNumber Start;  // Offset: 0 Size: 4
	struct FFrameNumber End;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSubSequenceTree Size 96
class FMovieSceneSubSequenceTree
{

 public: 
	char pad_0[96];  // Offset: 0 Size: 96



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequencePlaybackParams Size 40
class FMovieSceneSequencePlaybackParams
{

 public: 
	struct FFrameTime Frame;  // Offset: 0 Size: 8
	float Time;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct FString MarkedFrame;  // Offset: 16 Size: 16
	enum class EMovieScenePositionType PositionType;  // Offset: 32 Size: 1
	enum class EUpdatePositionMethod UpdateMethod;  // Offset: 33 Size: 1
	char pad_34[6];  // Offset: 34 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceReplProperties Size 16
class FMovieSceneSequenceReplProperties
{

 public: 
	struct FFrameTime LastKnownPosition;  // Offset: 0 Size: 8
	enum class EMovieScenePlayerStatus LastKnownStatus;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	int32_t LastKnownNumLoops;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSequenceActorPointers Size 24
class FMovieSceneSequenceActorPointers
{

 public: 
	struct AActor* SequenceActor;  // Offset: 0 Size: 8
	struct TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneWarpCounter Size 16
class FMovieSceneWarpCounter
{

 public: 
	struct TArray<uint32_t> WarpCounts;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetPostRollFrames Size 4
class FGetPostRollFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneSpawnable Size 144
class FMovieSceneSpawnable
{

 public: 
	struct FTransform SpawnTransform;  // Offset: 0 Size: 48
	struct TArray<struct FName> Tags;  // Offset: 48 Size: 16
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bContinuouslyRespawn : 1;  // Offset: 64 Size: 1
	char pad_65_1 : 7;  // Offset: 65 Size: 1
	bool bNetAddressableName : 1;  // Offset: 65 Size: 1
	char pad_66_1 : 7;  // Offset: 66 Size: 1
	bool bEvaluateTracksWhenNotSpawned : 1;  // Offset: 66 Size: 1
	char pad_67[1];  // Offset: 67 Size: 1
	struct FGuid Guid;  // Offset: 68 Size: 16
	char pad_84[4];  // Offset: 84 Size: 4
	struct FString Name;  // Offset: 88 Size: 16
	struct UObject* ObjectTemplate;  // Offset: 104 Size: 8
	struct TArray<struct FGuid> ChildPossessables;  // Offset: 112 Size: 16
	enum class ESpawnOwnership Ownership;  // Offset: 128 Size: 1
	char pad_129[3];  // Offset: 129 Size: 3
	struct FName LevelName;  // Offset: 132 Size: 8
	char pad_140[4];  // Offset: 140 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.TestMovieSceneEvalTemplate Size 32
// Inherited 32 bytes 
class FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{

 public: 



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackDisplayOptions Size 4
class FMovieSceneTrackDisplayOptions
{

 public: 
	char bShowVerticalFrames : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackEvaluationField Size 16
class FMovieSceneTrackEvaluationField
{

 public: 
	struct TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry Size 32
class FMovieSceneTrackEvaluationFieldEntry
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	struct FFrameNumberRange Range;  // Offset: 8 Size: 16
	struct FFrameNumber ForcedTime;  // Offset: 24 Size: 4
	enum class ESectionEvaluationFlags Flags;  // Offset: 28 Size: 1
	char pad_29[1];  // Offset: 29 Size: 1
	int16_t LegacySortOrder;  // Offset: 30 Size: 2



 // Functions 
 public:
}; 
 
 //ScriptStruct MovieScene.MovieSceneTrackInstanceInput Size 16
class FMovieSceneTrackInstanceInput
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetBlendType Size 2
class FGetBlendType
{

 public: 
	struct FOptionalMovieSceneBlendType ReturnValue;  // Offset: 0 Size: 2



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetCompletionMode Size 1
class FGetCompletionMode
{

 public: 
	enum class EMovieSceneCompletionMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.GetPreRollFrames Size 4
class FGetPreRollFrames
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.IsActive Size 1
class FIsActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.IsLocked Size 1
class FIsLocked
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetBlendType Size 1
class FSetBlendType
{

 public: 
	enum class EMovieSceneBlendType InBlendType;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetCompletionMode Size 1
class FSetCompletionMode
{

 public: 
	enum class EMovieSceneCompletionMode InCompletionMode;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.JumpToFrame Size 8
class FJumpToFrame
{

 public: 
	struct FFrameTime NewPosition;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetIsActive Size 1
class FSetIsActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInIsActive : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetOverlapPriority Size 4
class FSetOverlapPriority
{

 public: 
	int32_t NewPriority;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetPreRollFrames Size 4
class FSetPreRollFrames
{

 public: 
	int32_t InPreRollFrames;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSection.SetRowIndex Size 4
class FSetRowIndex
{

 public: 
	int32_t NewRowIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequence.FindBindingByTag Size 32
class FFindBindingByTag
{

 public: 
	struct FName InBindingName;  // Offset: 0 Size: 8
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequence.FindBindingsByTag Size 24
class FFindBindingsByTag
{

 public: 
	struct FName InBindingName;  // Offset: 0 Size: 8
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects Size 40
class FGetBoundObjects
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBinding;  // Offset: 0 Size: 24
	struct TArray<struct UObject*> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime Size 16
class FGetCurrentTime
{

 public: 
	struct FQualifiedFrameTime ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetDuration Size 16
class FGetDuration
{

 public: 
	struct FQualifiedFrameTime ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetEndTime Size 16
class FGetEndTime
{

 public: 
	struct FQualifiedFrameTime ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration Size 4
class FGetFrameDuration
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetFrameRate Size 8
class FGetFrameRate
{

 public: 
	struct FFrameRate ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetPlayRate Size 4
class FGetPlayRate
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSubSection.GetSequence Size 8
class FGetSequence
{

 public: 
	struct UMovieSceneSequence* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.GetStartTime Size 16
class FGetStartTime
{

 public: 
	struct FQualifiedFrameTime ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.IsReversed Size 1
class FIsReversed
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame Size 24
class FJumpToMarkedFrame
{

 public: 
	struct FString InLabel;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds Size 4
class FJumpToSeconds
{

 public: 
	float TimeInSeconds;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.PlayLooping Size 4
class FPlayLooping
{

 public: 
	int32_t NumLoops;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.PlayTo Size 40
class FPlayTo
{

 public: 
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.PlayToFrame Size 8
class FPlayToFrame
{

 public: 
	struct FFrameTime NewPosition;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame Size 24
class FPlayToMarkedFrame
{

 public: 
	struct FString InLabel;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds Size 4
class FPlayToSeconds
{

 public: 
	float TimeInSeconds;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent Size 12
class FRPC_ExplicitServerUpdateEvent
{

 public: 
	enum class EUpdatePositionMethod Method;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FFrameTime RelevantTime;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent Size 8
class FRPC_OnStopEvent
{

 public: 
	struct FFrameTime StoppedTime;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame Size 8
class FScrubToFrame
{

 public: 
	struct FFrameTime NewPosition;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame Size 24
class FScrubToMarkedFrame
{

 public: 
	struct FString InLabel;  // Offset: 0 Size: 16
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds Size 4
class FScrubToSeconds
{

 public: 
	float TimeInSeconds;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts Size 1
class FSetDisableCameraCuts
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bInDisableCameraCuts : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetFrameRange Size 12
class FSetFrameRange
{

 public: 
	int32_t StartFrame;  // Offset: 0 Size: 4
	int32_t Duration;  // Offset: 4 Size: 4
	float SubFrames;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetFrameRate Size 8
class FSetFrameRate
{

 public: 
	struct FFrameRate FrameRate;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition Size 40
class FSetPlaybackPosition
{

 public: 
	struct FMovieSceneSequencePlaybackParams PlaybackParams;  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetPlayRate Size 4
class FSetPlayRate
{

 public: 
	float PlayRate;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSequencePlayer.SetTimeRange Size 8
class FSetTimeRange
{

 public: 
	float StartTime;  // Offset: 0 Size: 4
	float Duration;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneSubSection.SetSequence Size 8
class FSetSequence
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime Size 28
class FOnRequestCurrentTime
{

 public: 
	struct FQualifiedFrameTime InCurrentTime;  // Offset: 0 Size: 16
	float InPlayRate;  // Offset: 16 Size: 4
	struct FFrameTime ReturnValue;  // Offset: 20 Size: 8



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying Size 16
class FOnStartPlaying
{

 public: 
	struct FQualifiedFrameTime InStartTime;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying Size 16
class FOnStopPlaying
{

 public: 
	struct FQualifiedFrameTime InStopTime;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function MovieScene.MovieSceneEasingFunction.OnEvaluate Size 8
class FOnEvaluate
{

 public: 
	float Interp;  // Offset: 0 Size: 4
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 