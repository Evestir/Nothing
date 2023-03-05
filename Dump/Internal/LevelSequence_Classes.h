#pragma once 
#include <LevelSequence_Structs.h>
 
 
 
//Class LevelSequence.DefaultLevelSequenceInstanceData Size 112
// Inherited 40 bytes 
class UDefaultLevelSequenceInstanceData : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct AActor* TransformOriginActor;  // Offset: 48 Size: 8
	char pad_56[8];  // Offset: 56 Size: 8
	struct FTransform TransformOrigin;  // Offset: 64 Size: 48



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.LevelSequenceDirector Size 56
// Inherited 40 bytes 
class ULevelSequenceDirector : public UObject
{

 public: 
	struct ULevelSequencePlayer* Player;  // Offset: 40 Size: 8
	int32_t SubSequenceID;  // Offset: 48 Size: 4
	int32_t MovieScenePlayerIndex;  // Offset: 52 Size: 4



 // Functions 
 public:
	void OnCreated(); // Function LevelSequence.LevelSequenceDirector.OnCreated
	struct UMovieSceneSequence* GetSequence(); // Function LevelSequence.LevelSequenceDirector.GetSequence
	struct TArray<struct UObject*> GetBoundObjects(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObjects
	struct UObject* GetBoundObject(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundObject
	struct TArray<struct AActor*> GetBoundActors(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActors
	struct AActor* GetBoundActor(struct FMovieSceneObjectBindingID ObjectBinding); // Function LevelSequence.LevelSequenceDirector.GetBoundActor
}; 
 
 


//Class LevelSequence.LevelSequencePlayer Size 1536
// Inherited 1256 bytes 
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{

 public: 
	struct FMulticastInlineDelegate OnCameraCut;  // Offset: 1256 Size: 16
	char pad_1272[264];  // Offset: 1272 Size: 264



 // Functions 
 public:
	struct UCameraComponent* GetActiveCameraComponent(); // Function LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	struct ULevelSequencePlayer* CreateLevelSequencePlayer(struct UObject* WorldContextObject, struct ULevelSequence* LevelSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ALevelSequenceActor*& OutActor); // Function LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
}; 
 
 


//Class LevelSequence.LevelSequenceActor Size 680
// Inherited 544 bytes 
class ALevelSequenceActor : public AActor
{

 public: 
	char pad_544[24];  // Offset: 544 Size: 24
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings;  // Offset: 568 Size: 20
	char pad_588[4];  // Offset: 588 Size: 4
	struct ULevelSequencePlayer* SequencePlayer;  // Offset: 592 Size: 8
	struct FSoftObjectPath LevelSequence;  // Offset: 600 Size: 24
	struct FLevelSequenceCameraSettings CameraSettings;  // Offset: 624 Size: 2
	char pad_626[6];  // Offset: 626 Size: 6
	struct ULevelSequenceBurnInOptions* BurnInOptions;  // Offset: 632 Size: 8
	struct UMovieSceneBindingOverrides* BindingOverrides;  // Offset: 640 Size: 8
	char bAutoPlay : 1;  // Offset: 648 Size: 1
	char bOverrideInstanceData : 1;  // Offset: 648 Size: 1
	char bReplicatePlayback : 1;  // Offset: 648 Size: 1
	char pad_648_1 : 5;  // Offset: 648 Size: 1
	char pad_649[8];  // Offset: 649 Size: 8
	struct UObject* DefaultInstanceData;  // Offset: 656 Size: 8
	struct ULevelSequenceBurnIn* BurnInInstance;  // Offset: 664 Size: 8
	char pad_672_1 : 7;  // Offset: 672 Size: 1
	bool bShowBurnin : 1;  // Offset: 672 Size: 1
	char pad_673[7];  // Offset: 673 Size: 7



 // Functions 
 public:
	void ShowBurnin(); // Function LevelSequence.LevelSequenceActor.ShowBurnin
	void SetSequence(struct ULevelSequence* InSequence); // Function LevelSequence.LevelSequenceActor.SetSequence
	void SetReplicatePlayback(bool ReplicatePlayback); // Function LevelSequence.LevelSequenceActor.SetReplicatePlayback
	void SetBindingByTag(struct FName BindingTag, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBindingByTag
	void SetBinding(struct FMovieSceneObjectBindingID Binding, struct TArray<struct AActor*>& Actors, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.SetBinding
	void ResetBindings(); // Function LevelSequence.LevelSequenceActor.ResetBindings
	void ResetBinding(struct FMovieSceneObjectBindingID Binding); // Function LevelSequence.LevelSequenceActor.ResetBinding
	void RemoveBindingByTag(struct FName Tag, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBindingByTag
	void RemoveBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor); // Function LevelSequence.LevelSequenceActor.RemoveBinding
	void OnLevelSequenceLoaded__DelegateSignature(); // DelegateFunction LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	struct ULevelSequence* LoadSequence(); // Function LevelSequence.LevelSequenceActor.LoadSequence
	void HideBurnin(); // Function LevelSequence.LevelSequenceActor.HideBurnin
	struct ULevelSequencePlayer* GetSequencePlayer(); // Function LevelSequence.LevelSequenceActor.GetSequencePlayer
	struct ULevelSequence* GetSequence(); // Function LevelSequence.LevelSequenceActor.GetSequence
	struct TArray<struct FMovieSceneObjectBindingID> FindNamedBindings(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBindings
	struct FMovieSceneObjectBindingID FindNamedBinding(struct FName Tag); // Function LevelSequence.LevelSequenceActor.FindNamedBinding
	void AddBindingByTag(struct FName BindingTag, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBindingByTag
	void AddBinding(struct FMovieSceneObjectBindingID Binding, struct AActor* Actor, bool bAllowBindingsFromAsset); // Function LevelSequence.LevelSequenceActor.AddBinding
}; 
 
 


//Class LevelSequence.LevelSequenceAnimSequenceLink Size 56
// Inherited 40 bytes 
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{

 public: 
	struct TArray<struct FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.AnimSequenceLevelSequenceLink Size 80
// Inherited 40 bytes 
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{

 public: 
	struct FGuid SkelTrackGuid;  // Offset: 40 Size: 16
	struct FSoftObjectPath PathToLevelSequence;  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.LevelSequenceMetaData Size 40
// Inherited 40 bytes 
class ULevelSequenceMetaData : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.LevelSequenceBurnInInitSettings Size 40
// Inherited 40 bytes 
class ULevelSequenceBurnInInitSettings : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.LevelSequenceMediaController Size 584
// Inherited 544 bytes 
class ALevelSequenceMediaController : public AActor
{

 public: 
	char pad_544[8];  // Offset: 544 Size: 8
	struct ALevelSequenceActor* Sequence;  // Offset: 552 Size: 8
	struct UMediaComponent* MediaComponent;  // Offset: 560 Size: 8
	float ServerStartTimeSeconds;  // Offset: 568 Size: 4
	char pad_572[12];  // Offset: 572 Size: 12



 // Functions 
 public:
	void SynchronizeToServer(float DesyncThresholdSeconds); // Function LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	void Play(); // Function LevelSequence.LevelSequenceMediaController.Play
	void OnRep_ServerStartTimeSeconds(); // Function LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	struct ALevelSequenceActor* GetSequence(); // Function LevelSequence.LevelSequenceMediaController.GetSequence
	struct UMediaComponent* GetMediaComponent(); // Function LevelSequence.LevelSequenceMediaController.GetMediaComponent
}; 
 
 


//Class LevelSequence.LevelSequence Size 456
// Inherited 96 bytes 
class ULevelSequence : public UMovieSceneSequence
{

 public: 
	char pad_96[8];  // Offset: 96 Size: 8
	struct UMovieScene* MovieScene;  // Offset: 104 Size: 8
	struct FLevelSequenceObjectReferenceMap ObjectReferences;  // Offset: 112 Size: 80
	struct FLevelSequenceBindingReferences BindingReferences;  // Offset: 192 Size: 160
	struct TMap<struct FString, struct FLevelSequenceObject> PossessedObjects;  // Offset: 352 Size: 80
	UObject* DirectorClass;  // Offset: 432 Size: 8
	struct TArray<struct UAssetUserData*> AssetUserData;  // Offset: 440 Size: 16



 // Functions 
 public:
	void RemoveMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.RemoveMetaDataByClass
	struct UObject* FindOrAddMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	struct UObject* FindMetaDataByClass(UObject* InClass); // Function LevelSequence.LevelSequence.FindMetaDataByClass
	struct UObject* CopyMetaData(struct UObject* InMetaData); // Function LevelSequence.LevelSequence.CopyMetaData
}; 
 
 


//Class LevelSequence.LevelSequenceBurnInOptions Size 80
// Inherited 40 bytes 
class ULevelSequenceBurnInOptions : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bUseBurnIn : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct FSoftClassPath BurnInClass;  // Offset: 48 Size: 24
	struct ULevelSequenceBurnInInitSettings* Settings;  // Offset: 72 Size: 8



 // Functions 
 public:
	void SetBurnIn(struct FSoftClassPath InBurnInClass); // Function LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
}; 
 
 


//Class LevelSequence.LevelSequenceBurnIn Size 800
// Inherited 608 bytes 
class ULevelSequenceBurnIn : public UUserWidget
{

 public: 
	struct FLevelSequencePlayerSnapshot FrameInformation;  // Offset: 608 Size: 184
	struct ALevelSequenceActor* LevelSequenceActor;  // Offset: 792 Size: 8



 // Functions 
 public:
	void SetSettings(struct UObject* InSettings); // Function LevelSequence.LevelSequenceBurnIn.SetSettings
	ULevelSequenceBurnInInitSettings* GetSettingsClass(); // Function LevelSequence.LevelSequenceBurnIn.GetSettingsClass
}; 
 
 


//Class LevelSequence.LegacyLevelSequenceDirectorBlueprint Size 160
// Inherited 160 bytes 
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LevelSequence.LevelSequenceProjectSettings Size 104
// Inherited 56 bytes 
class ULevelSequenceProjectSettings : public UDeveloperSettings
{

 public: 
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	bool bDefaultLockEngineToDisplayRate : 1;  // Offset: 56 Size: 1
	char pad_57[7];  // Offset: 57 Size: 7
	struct FString DefaultDisplayRate;  // Offset: 64 Size: 16
	struct FString DefaultTickResolution;  // Offset: 80 Size: 16
	enum class EUpdateClockSource DefaultClockSource;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


