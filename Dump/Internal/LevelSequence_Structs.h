#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function LevelSequence.LevelSequence.FindMetaDataByClass Size 16
class FFindMetaDataByClass
{

 public: 
	UObject* InClass;  // Offset: 0 Size: 8
	struct UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.RemoveBinding Size 32
class FRemoveBinding
{

 public: 
	struct FMovieSceneObjectBindingID Binding;  // Offset: 0 Size: 24
	struct AActor* Actor;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction LevelSequence.OnLevelSequencePlayerCameraCutEvent__DelegateSignature Size 8
class FOnLevelSequencePlayerCameraCutEvent__DelegateSignature
{

 public: 
	struct UCameraComponent* CameraComponent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer Size 56
class FCreateLevelSequencePlayer
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct ULevelSequence* LevelSequence;  // Offset: 8 Size: 8
	struct FMovieSceneSequencePlaybackSettings Settings;  // Offset: 16 Size: 20
	char pad_36[4];  // Offset: 36 Size: 4
	struct ALevelSequenceActor* OutActor;  // Offset: 40 Size: 8
	struct ULevelSequencePlayer* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.AddBinding Size 40
class FAddBinding
{

 public: 
	struct FMovieSceneObjectBindingID Binding;  // Offset: 0 Size: 24
	struct AActor* Actor;  // Offset: 24 Size: 8
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bAllowBindingsFromAsset : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceMediaController.GetMediaComponent Size 8
class FGetMediaComponent
{

 public: 
	struct UMediaComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.LoadSequence Size 8
class FLoadSequence
{

 public: 
	struct ULevelSequence* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.SetBinding Size 48
class FSetBinding
{

 public: 
	struct FMovieSceneObjectBindingID Binding;  // Offset: 0 Size: 24
	struct TArray<struct AActor*> Actors;  // Offset: 24 Size: 16
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bAllowBindingsFromAsset : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.AddBindingByTag Size 24
class FAddBindingByTag
{

 public: 
	struct FName BindingTag;  // Offset: 0 Size: 8
	struct AActor* Actor;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bAllowBindingsFromAsset : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.FindNamedBinding Size 32
class FFindNamedBinding
{

 public: 
	struct FName Tag;  // Offset: 0 Size: 8
	struct FMovieSceneObjectBindingID ReturnValue;  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.RemoveBindingByTag Size 16
class FRemoveBindingByTag
{

 public: 
	struct FName Tag;  // Offset: 0 Size: 8
	struct AActor* Actor;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.FindNamedBindings Size 24
class FFindNamedBindings
{

 public: 
	struct FName Tag;  // Offset: 0 Size: 8
	struct TArray<struct FMovieSceneObjectBindingID> ReturnValue;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceBindingReference Size 56
class FLevelSequenceBindingReference
{

 public: 
	struct FString PackageName;  // Offset: 0 Size: 16
	struct FSoftObjectPath ExternalObjectPath;  // Offset: 16 Size: 24
	struct FString ObjectPath;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceMediaController.GetSequence Size 8
class FGetSequence
{

 public: 
	struct ALevelSequenceActor* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.GetSequencePlayer Size 8
class FGetSequencePlayer
{

 public: 
	struct ULevelSequencePlayer* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent Size 8
class FGetActiveCameraComponent
{

 public: 
	struct UCameraComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.ResetBinding Size 24
class FResetBinding
{

 public: 
	struct FMovieSceneObjectBindingID Binding;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceObject Size 56
class FLevelSequenceObject
{

 public: 
	 ObjectOrOwner;  // Offset: 0 Size: 28
	char pad_28[4];  // Offset: 28 Size: 4
	struct FString ComponentName;  // Offset: 32 Size: 16
	struct TWeakObjectPtr<UObject> CachedComponent;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.SetBindingByTag Size 32
class FSetBindingByTag
{

 public: 
	struct FName BindingTag;  // Offset: 0 Size: 8
	struct TArray<struct AActor*> Actors;  // Offset: 8 Size: 16
	char pad_24_1 : 7;  // Offset: 24 Size: 1
	bool bAllowBindingsFromAsset : 1;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.SetReplicatePlayback Size 1
class FSetReplicatePlayback
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReplicatePlayback : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceCameraSettings Size 2
class FLevelSequenceCameraSettings
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bOverrideAspectRatioAxisConstraint : 1;  // Offset: 0 Size: 1
	enum class EAspectRatioAxisConstraint AspectRatioAxisConstraint;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceActor.SetSequence Size 8
class FSetSequence
{

 public: 
	struct ULevelSequence* InSequence;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.BoundActorProxy Size 1
class FBoundActorProxy
{

 public: 
	char pad_0[1];  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceAnimSequenceLinkItem Size 48
class FLevelSequenceAnimSequenceLinkItem
{

 public: 
	struct FGuid SkelTrackGuid;  // Offset: 0 Size: 16
	struct FSoftObjectPath PathToAnimSequence;  // Offset: 16 Size: 24
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bExportTransforms : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bExportCurves : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool bRecordInWorldSpace : 1;  // Offset: 42 Size: 1
	char pad_43[5];  // Offset: 43 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceBindingReferences Size 160
class FLevelSequenceBindingReferences
{

 public: 
	struct TMap<struct FGuid, struct FLevelSequenceBindingReferenceArray> BindingIdToReferences;  // Offset: 0 Size: 80
	struct TSet<struct FGuid> AnimSequenceInstances;  // Offset: 80 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceBindingReferenceArray Size 16
class FLevelSequenceBindingReferenceArray
{

 public: 
	struct TArray<struct FLevelSequenceBindingReference> References;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass Size 8
class FGetSettingsClass
{

 public: 
	ULevelSequenceBurnInInitSettings* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceObjectReferenceMap Size 80
class FLevelSequenceObjectReferenceMap
{

 public: 
	char pad_0[80];  // Offset: 0 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceLegacyObjectReference Size 32
class FLevelSequenceLegacyObjectReference
{

 public: 
	char pad_0[32];  // Offset: 0 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequencePlayerSnapshot Size 184
class FLevelSequencePlayerSnapshot
{

 public: 
	struct FString MasterName;  // Offset: 0 Size: 16
	struct FQualifiedFrameTime MasterTime;  // Offset: 16 Size: 16
	struct FQualifiedFrameTime SourceTime;  // Offset: 32 Size: 16
	struct FString CurrentShotName;  // Offset: 48 Size: 16
	struct FQualifiedFrameTime CurrentShotLocalTime;  // Offset: 64 Size: 16
	struct FQualifiedFrameTime CurrentShotSourceTime;  // Offset: 80 Size: 16
	struct FString SourceTimecode;  // Offset: 96 Size: 16
	struct TSoftObjectPtr<UCameraComponent> CameraComponent;  // Offset: 112 Size: 40
	struct FLevelSequenceSnapshotSettings Settings;  // Offset: 152 Size: 12
	char pad_164[4];  // Offset: 164 Size: 4
	struct ULevelSequence* ActiveShot;  // Offset: 168 Size: 8
	struct FMovieSceneSequenceID ShotID;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequence.CopyMetaData Size 16
class FCopyMetaData
{

 public: 
	struct UObject* InMetaData;  // Offset: 0 Size: 8
	struct UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct LevelSequence.LevelSequenceSnapshotSettings Size 12
class FLevelSequenceSnapshotSettings
{

 public: 
	char ZeroPadAmount;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FFrameRate FrameRate;  // Offset: 4 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceDirector.GetBoundActor Size 32
class FGetBoundActor
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBinding;  // Offset: 0 Size: 24
	struct AActor* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceDirector.GetBoundActors Size 40
class FGetBoundActors
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBinding;  // Offset: 0 Size: 24
	struct TArray<struct AActor*> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceDirector.GetBoundObject Size 32
class FGetBoundObject
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBinding;  // Offset: 0 Size: 24
	struct UObject* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceDirector.GetBoundObjects Size 40
class FGetBoundObjects
{

 public: 
	struct FMovieSceneObjectBindingID ObjectBinding;  // Offset: 0 Size: 24
	struct TArray<struct UObject*> ReturnValue;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass Size 16
class FFindOrAddMetaDataByClass
{

 public: 
	UObject* InClass;  // Offset: 0 Size: 8
	struct UObject* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer Size 4
class FSynchronizeToServer
{

 public: 
	float DesyncThresholdSeconds;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequence.RemoveMetaDataByClass Size 8
class FRemoveMetaDataByClass
{

 public: 
	UObject* InClass;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn Size 24
class FSetBurnIn
{

 public: 
	struct FSoftClassPath InBurnInClass;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function LevelSequence.LevelSequenceBurnIn.SetSettings Size 8
class FSetSettings
{

 public: 
	struct UObject* InSettings;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 