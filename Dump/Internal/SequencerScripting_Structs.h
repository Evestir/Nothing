#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct SequencerScripting.SequencerBindingProxy Size 24
class FSequencerBindingProxy
{

 public: 
	struct FGuid BindingID;  // Offset: 0 Size: 16
	struct UMovieSceneSequence* Sequence;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangent Size 4
class FGetArriveTangent
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildFolder Size 24
class FRemoveChildFolder
{

 public: 
	struct UMovieSceneFolder* TargetFolder;  // Offset: 0 Size: 8
	struct UMovieSceneFolder* FolderToRemove;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.ComputeEffectiveRange Size 20
class FComputeEffectiveRange
{

 public: 
	struct FSequencerScriptingRange ReturnValue;  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.GetUniqueTrackName Size 16
class FGetUniqueTrackName
{

 public: 
	struct UMovieScenePropertyTrack* Track;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.GetFolderName Size 16
class FGetFolderName
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct SequencerScripting.SequencerScriptingRange Size 20
class FSequencerScriptingRange
{

 public: 
	char bHasStart : 1;  // Offset: 0 Size: 1
	char bHasEnd : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 6;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	int32_t InclusiveStart;  // Offset: 4 Size: 4
	int32_t ExclusiveEnd;  // Offset: 8 Size: 4
	struct FFrameRate InternalRate;  // Offset: 12 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.MoveBindingContents Size 48
class FMoveBindingContents
{

 public: 
	struct FSequencerBindingProxy SourceBindingId;  // Offset: 0 Size: 24
	struct FSequencerBindingProxy DestinationBindingId;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.AddTrack Size 40
class FAddTrack
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	UMovieSceneTrack* TrackType;  // Offset: 24 Size: 8
	struct UMovieSceneTrack* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.AddChildObjectBinding Size 40
class FAddChildObjectBinding
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FSequencerBindingProxy InObjectBinding;  // Offset: 8 Size: 24
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetChildPossessables Size 40
class FGetChildPossessables
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStart Size 16
class FSetPlaybackStart
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t StartFrame;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringKey.GetTime Size 12
class FGetTime
{

 public: 
	enum class ESequenceTimeUnit TimeUnit;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FFrameTime ReturnValue;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByExactType Size 48
class FFindTracksByExactType
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	UMovieSceneTrack* TrackType;  // Offset: 24 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangentWeight Size 4
class FGetLeaveTangentWeight
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.AddChildMasterTrack Size 24
class FAddChildMasterTrack
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct UMovieSceneTrack* InMasterTrack;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetParent Size 48
class FGetParent
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FSequencerBindingProxy ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.FindTracksByType Size 48
class FFindTracksByType
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	UMovieSceneTrack* TrackType;  // Offset: 24 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetMarkedFrame Size 16
class FSetMarkedFrame
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t InMarkIndex;  // Offset: 8 Size: 4
	struct FFrameNumber InFrameNumber;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.GetDisplayName Size 32
class FGetDisplayName
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct FText ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetId Size 40
class FGetId
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FGuid ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPortableBindingID Size 64
class FGetPortableBindingID
{

 public: 
	struct UMovieSceneSequence* MasterSequence;  // Offset: 0 Size: 8
	struct UMovieSceneSequence* DestinationSequence;  // Offset: 8 Size: 8
	struct FSequencerBindingProxy InBinding;  // Offset: 16 Size: 24
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetInterpolationMode Size 1
class FSetInterpolationMode
{

 public: 
	enum class ERichCurveInterpMode InNewValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.RemoveKey Size 8
class FRemoveKey
{

 public: 
	struct UMovieSceneScriptingKey* Key;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.RemoveTrack Size 32
class FRemoveTrack
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct UMovieSceneTrack* TrackToRemove;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.SetFolderName Size 24
class FSetFolderName
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FName InFolderName;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetName Size 40
class FGetName
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FString ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetObjectTemplate Size 32
class FGetObjectTemplate
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct UObject* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.SetFolderColor Size 16
class FSetFolderColor
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FColor InFolderColor;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndSeconds Size 24
class FGetEndSeconds
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.SetPropertyNameAndPath Size 32
class FSetPropertyNameAndPath
{

 public: 
	struct UMovieScenePropertyTrack* Track;  // Offset: 0 Size: 8
	struct FName InPropertyName;  // Offset: 8 Size: 8
	struct FString InPropertyPath;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.IsValid Size 32
class FIsValid
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool ReturnValue : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetPossessedObjectClass Size 32
class FGetPossessedObjectClass
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	UObject* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveStart Size 20
class FRemoveStart
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventRepeaterSection Size 16
class FAddEventRepeaterSection
{

 public: 
	struct UMovieSceneEventTrack* InTrack;  // Offset: 0 Size: 8
	struct UMovieSceneEventRepeaterSection* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildObjectBinding Size 40
class FRemoveChildObjectBinding
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FSequencerBindingProxy InObjectBinding;  // Offset: 8 Size: 24
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.GetTracks Size 40
class FGetTracks
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.Remove Size 24
class FRemove
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetInterpolationMode Size 1
class FGetInterpolationMode
{

 public: 
	enum class ERichCurveInterpMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.SetDisplayName Size 32
class FSetDisplayName
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct FText InName;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.GetDefault Size 16
class FGetDefault
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.GetChildFolders Size 24
class FGetChildFolders
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.SetName Size 40
class FSetName
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FString InName;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.AddKey Size 40
class FAddKey
{

 public: 
	struct FFrameNumber InTime;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FString NewValue;  // Offset: 8 Size: 16
	float SubFrame;  // Offset: 24 Size: 4
	enum class ESequenceTimeUnit TimeUnit;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct UMovieSceneScriptingStringKey* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneBindingExtensions.SetParent Size 48
class FSetParent
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FSequencerBindingProxy InParentBinding;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneEventTrackExtensions.AddEventTriggerSection Size 16
class FAddEventTriggerSection
{

 public: 
	struct UMovieSceneEventTrack* InTrack;  // Offset: 0 Size: 8
	struct UMovieSceneEventTriggerSection* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.AddChildFolder Size 24
class FAddChildFolder
{

 public: 
	struct UMovieSceneFolder* TargetFolder;  // Offset: 0 Size: 8
	struct UMovieSceneFolder* FolderToAdd;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.GetChildMasterTracks Size 24
class FGetChildMasterTracks
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.GetChildObjectBindings Size 24
class FGetChildObjectBindings
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.RemoveEnd Size 20
class FRemoveEnd
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.GetFolderColor Size 16
class FGetFolderColor
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct FColor ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringKey.SetTime Size 12
class FSetTime
{

 public: 
	struct FFrameNumber NewFrameNumber;  // Offset: 0 Size: 4
	float SubFrame;  // Offset: 4 Size: 4
	enum class ESequenceTimeUnit TimeUnit;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneFolderExtensions.RemoveChildMasterTrack Size 24
class FRemoveChildMasterTrack
{

 public: 
	struct UMovieSceneFolder* Folder;  // Offset: 0 Size: 8
	struct UMovieSceneTrack* InMasterTrack;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.GetKeys Size 16
class FGetKeys
{

 public: 
	struct TArray<struct UMovieSceneScriptingKey*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SortMarkedFrames Size 8
class FSortMarkedFrames
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.GetObjectPropertyClass Size 16
class FGetObjectPropertyClass
{

 public: 
	struct UMovieSceneObjectPropertyTrack* Track;  // Offset: 0 Size: 8
	UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyName Size 16
class FGetPropertyName
{

 public: 
	struct UMovieScenePropertyTrack* Track;  // Offset: 0 Size: 8
	struct FName ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.GetPropertyPath Size 24
class FGetPropertyPath
{

 public: 
	struct UMovieScenePropertyTrack* Track;  // Offset: 0 Size: 8
	struct FString ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieScenePropertyTrackExtensions.SetObjectPropertyClass Size 16
class FSetObjectPropertyClass
{

 public: 
	struct UMovieSceneObjectPropertyTrack* Track;  // Offset: 0 Size: 8
	UObject* PropertyClass;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringKey.GetValue Size 16
class FGetValue
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringKey.SetValue Size 16
class FSetValue
{

 public: 
	struct FString InNewValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.SetDefault Size 16
class FSetDefault
{

 public: 
	struct FString InDefaultValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingStringChannel.HasDefault Size 1
class FHasDefault
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.EvaluateKeys Size 48
class FEvaluateKeys
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	struct FFrameRate FrameRate;  // Offset: 20 Size: 8
	char pad_28[4];  // Offset: 28 Size: 4
	struct TArray<float> ReturnValue;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangentWeight Size 4
class FSetArriveTangentWeight
{

 public: 
	float InNewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.GetNumKeys Size 4
class FGetNumKeys
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetArriveTangentWeight Size 4
class FGetArriveTangentWeight
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentMode Size 1
class FSetTangentMode
{

 public: 
	enum class ERichCurveTangentMode InNewValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetLeaveTangent Size 4
class FGetLeaveTangent
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentMode Size 1
class FGetTangentMode
{

 public: 
	enum class ERichCurveTangentMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.GetTangentWeightMode Size 1
class FGetTangentWeightMode
{

 public: 
	enum class ERichCurveTangentWeightMode ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetMarkedFrames Size 24
class FGetMarkedFrames
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct FMovieSceneMarkedFrame> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetArriveTangent Size 4
class FSetArriveTangent
{

 public: 
	float InNewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangent Size 4
class FSetLeaveTangent
{

 public: 
	float InNewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetLeaveTangentWeight Size 4
class FSetLeaveTangentWeight
{

 public: 
	float InNewValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatKey.SetTangentWeightMode Size 1
class FSetTangentWeightMode
{

 public: 
	enum class ERichCurveTangentWeightMode InNewValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPostInfinityExtrapolation Size 1
class FGetPostInfinityExtrapolation
{

 public: 
	enum class ERichCurveExtrapolation ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.GetPreInfinityExtrapolation Size 1
class FGetPreInfinityExtrapolation
{

 public: 
	enum class ERichCurveExtrapolation ReturnValue;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPostInfinityExtrapolation Size 1
class FSetPostInfinityExtrapolation
{

 public: 
	enum class ERichCurveExtrapolation InExtrapolation;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneScriptingFloatChannel.SetPreInfinityExtrapolation Size 1
class FSetPreInfinityExtrapolation
{

 public: 
	enum class ERichCurveExtrapolation InExtrapolation;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.FindChannelsByType Size 32
class FFindChannelsByType
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	UMovieSceneScriptingChannel* ChannelType;  // Offset: 8 Size: 8
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.GetChannels Size 24
class FGetChannels
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneScriptingChannel*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.GetEndFrame Size 24
class FGetEndFrame
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	int32_t ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.GetEndFrameSeconds Size 16
class FGetEndFrameSeconds
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetSpawnables Size 24
class FGetSpawnables
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.GetParentSequenceFrame Size 32
class FGetParentSequenceFrame
{

 public: 
	struct UMovieSceneSubSection* Section;  // Offset: 0 Size: 8
	int32_t InFrame;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UMovieSceneSequence* ParentSequence;  // Offset: 16 Size: 8
	int32_t ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartFrame Size 24
class FGetStartFrame
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	int32_t ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetMovieScene Size 16
class FGetMovieScene
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct UMovieScene* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.GetStartFrameSeconds Size 16
class FGetStartFrameSeconds
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.HasEndFrame Size 16
class FHasEndFrame
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameBounded Size 16
class FSetEndFrameBounded
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsBounded : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.HasStartFrame Size 16
class FHasStartFrame
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndFrame Size 24
class FSetEndFrame
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	int32_t End;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetEndFrameSeconds Size 16
class FSetEndFrameSeconds
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	float EndTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetRange Size 16
class FSetRange
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	int32_t StartFrame;  // Offset: 8 Size: 4
	int32_t EndFrame;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetRangeSeconds Size 16
class FSetRangeSeconds
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	float StartTime;  // Offset: 8 Size: 4
	float EndTime;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartFrame Size 24
class FSetStartFrame
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	int32_t Start;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.SetColorTint Size 16
class FSetColorTint
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct FColor ColorTint;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameBounded Size 16
class FSetStartFrameBounded
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bIsBounded : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSectionExtensions.SetStartFrameSeconds Size 16
class FSetStartFrameSeconds
{

 public: 
	struct UMovieSceneSection* Section;  // Offset: 0 Size: 8
	float StartTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddMarkedFrame Size 48
class FAddMarkedFrame
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FMovieSceneMarkedFrame InMarkedFrame;  // Offset: 8 Size: 32
	int32_t ReturnValue;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddMasterTrack Size 24
class FAddMasterTrack
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	UMovieSceneTrack* TrackType;  // Offset: 8 Size: 8
	struct UMovieSceneTrack* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddPossessable Size 40
class FAddPossessable
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct UObject* ObjectToPossess;  // Offset: 8 Size: 8
	struct FSequencerBindingProxy ReturnValue;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddRootFolderToSequence Size 32
class FAddRootFolderToSequence
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FString NewFolderName;  // Offset: 8 Size: 16
	struct UMovieSceneFolder* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromClass Size 40
class FAddSpawnableFromClass
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	UObject* ClassToSpawn;  // Offset: 8 Size: 8
	struct FSequencerBindingProxy ReturnValue;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEndSeconds Size 16
class FSetPlaybackEndSeconds
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	float EndTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.AddSpawnableFromInstance Size 40
class FAddSpawnableFromInstance
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct UObject* ObjectToSpawn;  // Offset: 8 Size: 8
	struct FSequencerBindingProxy ReturnValue;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.LocateBoundObjects Size 56
class FLocateBoundObjects
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FSequencerBindingProxy InBinding;  // Offset: 8 Size: 24
	struct UObject* Context;  // Offset: 32 Size: 8
	struct TArray<struct UObject*> ReturnValue;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrame Size 16
class FDeleteMarkedFrame
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t DeleteIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.DeleteMarkedFrames Size 8
class FDeleteMarkedFrames
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingById Size 48
class FFindBindingById
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FGuid BindingID;  // Offset: 8 Size: 16
	struct FSequencerBindingProxy ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindBindingByName Size 48
class FFindBindingByName
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FString Name;  // Offset: 8 Size: 16
	struct FSequencerBindingProxy ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByFrameNumber Size 16
class FFindMarkedFrameByFrameNumber
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameNumber InFrameNumber;  // Offset: 8 Size: 4
	int32_t ReturnValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindMarkedFrameByLabel Size 32
class FFindMarkedFrameByLabel
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FString InLabel;  // Offset: 8 Size: 16
	int32_t ReturnValue;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByExactType Size 32
class FFindMasterTracksByExactType
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	UMovieSceneTrack* TrackType;  // Offset: 8 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindMasterTracksByType Size 32
class FFindMasterTracksByType
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	UMovieSceneTrack* TrackType;  // Offset: 8 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.FindNextMarkedFrame Size 24
class FFindNextMarkedFrame
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameNumber InFrameNumber;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bForward : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3
	int32_t ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetBindingID Size 48
class FGetBindingID
{

 public: 
	struct FSequencerBindingProxy InBinding;  // Offset: 0 Size: 24
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 24 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.HasStart Size 24
class FHasStart
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetBindings Size 24
class FGetBindings
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetClockSource Size 16
class FGetClockSource
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	enum class EUpdateClockSource ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetDisplayRate Size 16
class FGetDisplayRate
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameRate ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetEvaluationType Size 16
class FGetEvaluationType
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	enum class EMovieSceneEvaluationType ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetMasterTracks Size 24
class FGetMasterTracks
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneTrack*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEnd Size 16
class FGetPlaybackEnd
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackEndSeconds Size 16
class FGetPlaybackEndSeconds
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStartSeconds Size 16
class FGetPlaybackStartSeconds
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackRange Size 32
class FGetPlaybackRange
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FSequencerScriptingRange ReturnValue;  // Offset: 8 Size: 20
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPlaybackStart Size 16
class FGetPlaybackStart
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetPossessables Size 24
class FGetPossessables
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct FSequencerBindingProxy> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetRootFoldersInSequence Size 24
class FGetRootFoldersInSequence
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneFolder*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.MakeRange Size 40
class FMakeRange
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t StartFrame;  // Offset: 8 Size: 4
	int32_t Duration;  // Offset: 12 Size: 4
	struct FSequencerScriptingRange ReturnValue;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetTickResolution Size 16
class FGetTickResolution
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameRate ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetTimecodeSource Size 32
class FGetTimecodeSource
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FTimecode ReturnValue;  // Offset: 8 Size: 20
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeEnd Size 16
class FGetViewRangeEnd
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetViewRangeStart Size 16
class FGetViewRangeStart
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeEnd Size 16
class FGetWorkRangeEnd
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.GetWorkRangeStart Size 16
class FGetWorkRangeStart
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.IsReadOnly Size 16
class FIsReadOnly
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.MakeBindingID Size 64
class FMakeBindingID
{

 public: 
	struct UMovieSceneSequence* MasterSequence;  // Offset: 0 Size: 8
	struct FSequencerBindingProxy InBinding;  // Offset: 8 Size: 24
	enum class EMovieSceneObjectBindingSpace Space;  // Offset: 32 Size: 1
	char pad_33[3];  // Offset: 33 Size: 3
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 36 Size: 24
	char pad_60[4];  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.MakeRangeSeconds Size 40
class FMakeRangeSeconds
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	float StartTime;  // Offset: 8 Size: 4
	float Duration;  // Offset: 12 Size: 4
	struct FSequencerScriptingRange ReturnValue;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.RemoveMasterTrack Size 24
class FRemoveMasterTrack
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct UMovieSceneTrack* MasterTrack;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool ReturnValue : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.ResolveBindingID Size 56
class FResolveBindingID
{

 public: 
	struct UMovieSceneSequence* MasterSequence;  // Offset: 0 Size: 8
	struct FMovieSceneObjectBindingID InObjectBindingID;  // Offset: 8 Size: 24
	struct FSequencerBindingProxy ReturnValue;  // Offset: 32 Size: 24



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetClockSource Size 16
class FSetClockSource
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	enum class EUpdateClockSource InClockSource;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetDisplayRate Size 16
class FSetDisplayRate
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameRate DisplayRate;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetEvaluationType Size 16
class FSetEvaluationType
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	enum class EMovieSceneEvaluationType InEvaluationType;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackStartSeconds Size 16
class FSetPlaybackStartSeconds
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	float StartTime;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetPlaybackEnd Size 16
class FSetPlaybackEnd
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	int32_t EndFrame;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetReadOnly Size 16
class FSetReadOnly
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bInReadOnly : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolution Size 16
class FSetTickResolution
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameRate TickResolution;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetTickResolutionDirectly Size 16
class FSetTickResolutionDirectly
{

 public: 
	struct UMovieSceneSequence* Sequence;  // Offset: 0 Size: 8
	struct FFrameRate TickResolution;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeEnd Size 16
class FSetViewRangeEnd
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float EndTimeInSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetViewRangeStart Size 16
class FSetViewRangeStart
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float StartTimeInSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeEnd Size 16
class FSetWorkRangeEnd
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float EndTimeInSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneSequenceExtensions.SetWorkRangeStart Size 16
class FSetWorkRangeStart
{

 public: 
	struct UMovieSceneSequence* InSequence;  // Offset: 0 Size: 8
	float StartTimeInSeconds;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.AddSection Size 16
class FAddSection
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct UMovieSceneSection* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.GetColorTint Size 16
class FGetColorTint
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct FColor ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.GetSections Size 24
class FGetSections
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct TArray<struct UMovieSceneSection*> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.GetSectionToKey Size 16
class FGetSectionToKey
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct UMovieSceneSection* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.GetSortingOrder Size 16
class FGetSortingOrder
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.RemoveSection Size 16
class FRemoveSection
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct UMovieSceneSection* Section;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.SetSectionToKey Size 16
class FSetSectionToKey
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	struct UMovieSceneSection* Section;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneTrackExtensions.SetSortingOrder Size 16
class FSetSortingOrder
{

 public: 
	struct UMovieSceneTrack* Track;  // Offset: 0 Size: 8
	int32_t SortingOrder;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneVectorTrackExtensions.GetNumChannelsUsed Size 16
class FGetNumChannelsUsed
{

 public: 
	struct UMovieSceneVectorTrack* Track;  // Offset: 0 Size: 8
	int32_t ReturnValue;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.MovieSceneVectorTrackExtensions.SetNumChannelsUsed Size 16
class FSetNumChannelsUsed
{

 public: 
	struct UMovieSceneVectorTrack* Track;  // Offset: 0 Size: 8
	int32_t InNumChannelsUsed;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.GetStartSeconds Size 24
class FGetStartSeconds
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	float ReturnValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.HasEnd Size 24
class FHasEnd
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool ReturnValue : 1;  // Offset: 20 Size: 1
	char pad_21[3];  // Offset: 21 Size: 3



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.SetEndSeconds Size 24
class FSetEndSeconds
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	float End;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function SequencerScripting.SequencerScriptingRangeExtensions.SetStartSeconds Size 24
class FSetStartSeconds
{

 public: 
	struct FSequencerScriptingRange Range;  // Offset: 0 Size: 20
	float Start;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 