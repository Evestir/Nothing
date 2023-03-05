#pragma once 
#include <FMODStudio_Structs.h>
 
 
 
//Class FMODStudio.FMODAmbientSound Size 560
// Inherited 544 bytes 
class AFMODAmbientSound : public AActor
{

 public: 
	struct UFMODAudioComponent* AudioComponent;  // Offset: 544 Size: 8
	char pad_552_1 : 7;  // Offset: 552 Size: 1
	bool bAutoStart : 1;  // Offset: 552 Size: 1
	char pad_553[7];  // Offset: 553 Size: 7



 // Functions 
 public:
	void OnEnableAmbientSound(bool bEnable); // Function FMODStudio.FMODAmbientSound.OnEnableAmbientSound
}; 
 
 


//Class FMODStudio.FMODManager Size 584
// Inherited 544 bytes 
class AFMODManager : public AActor
{

 public: 
	char pad_544[32];  // Offset: 544 Size: 32
	char pad_576_1 : 7;  // Offset: 576 Size: 1
	bool bEnableAmbientSound : 1;  // Offset: 576 Size: 1
	char pad_577_1 : 7;  // Offset: 577 Size: 1
	bool bEnableAnimSound : 1;  // Offset: 577 Size: 1
	char pad_578[6];  // Offset: 578 Size: 6



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODSnapshot Size 56
// Inherited 56 bytes 
class UFMODSnapshot : public UFMODEvent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODAnimNotifyPlay Size 88
// Inherited 56 bytes 
class UFMODAnimNotifyPlay : public UAnimNotify
{

 public: 
	char bFollow : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[8];  // Offset: 57 Size: 8
	struct FString AttachName;  // Offset: 64 Size: 16
	struct UFMODEvent* Event;  // Offset: 80 Size: 8



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODAsset Size 56
// Inherited 40 bytes 
class UFMODAsset : public UObject
{

 public: 
	struct FGuid AssetGuid;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODAudioComponent Size 928
// Inherited 528 bytes 
class UFMODAudioComponent : public USceneComponent
{

 public: 
	struct UFMODEvent* Event;  // Offset: 520 Size: 8
	struct TMap<struct FName, float> ParameterCache;  // Offset: 528 Size: 80
	struct FString ProgrammerSoundName;  // Offset: 616 Size: 16
	char bEnableTimelineCallbacks : 1;  // Offset: 632 Size: 1
	char pad_632_1 : 7;  // Offset: 632 Size: 1
	char pad_633[24];  // Offset: 633 Size: 24
	char bAutoDestroy : 1;  // Offset: 656 Size: 1
	char bStopWhenOwnerDestroyed : 1;  // Offset: 656 Size: 1
	char pad_656_1 : 6;  // Offset: 656 Size: 1
	char pad_657[8];  // Offset: 657 Size: 8
	struct FMulticastInlineDelegate OnEventStopped;  // Offset: 664 Size: 16
	char pad_680[24];  // Offset: 680 Size: 24
	struct FMulticastInlineDelegate OnTimelineMarker;  // Offset: 704 Size: 16
	struct FMulticastInlineDelegate OnTimelineBeat;  // Offset: 720 Size: 16
	struct FFMODAttenuationDetails AttenuationDetails;  // Offset: 736 Size: 12
	struct FFMODOcclusionDetails OcclusionDetails;  // Offset: 748 Size: 3
	char pad_751[177];  // Offset: 751 Size: 177



 // Functions 
 public:
	void Stop(); // Function FMODStudio.FMODAudioComponent.Stop
	void SetVolume(float Volume); // Function FMODStudio.FMODAudioComponent.SetVolume
	void SetTimelinePosition(int32_t Time); // Function FMODStudio.FMODAudioComponent.SetTimelinePosition
	void SetProperty(enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODAudioComponent.SetProperty
	void SetProgrammerSoundName(struct FString Value); // Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName
	void SetPitch(float Pitch); // Function FMODStudio.FMODAudioComponent.SetPitch
	void SetPaused(bool paused); // Function FMODStudio.FMODAudioComponent.SetPaused
	void SetParameter(struct FName Name, float Value); // Function FMODStudio.FMODAudioComponent.SetParameter
	void SetEvent(struct UFMODEvent* NewEvent); // Function FMODStudio.FMODAudioComponent.SetEvent
	void Release(); // Function FMODStudio.FMODAudioComponent.Release
	void PlayInSequence(); // Function FMODStudio.FMODAudioComponent.PlayInSequence
	void Play(); // Function FMODStudio.FMODAudioComponent.Play
	void KeyOff(); // Function FMODStudio.FMODAudioComponent.KeyOff
	bool IsPlaying(); // Function FMODStudio.FMODAudioComponent.IsPlaying
	int32_t GetTimelinePosition(); // Function FMODStudio.FMODAudioComponent.GetTimelinePosition
	float GetProperty(enum class EFMODEventProperty Property); // Function FMODStudio.FMODAudioComponent.GetProperty
	void GetParameterValue(struct FName Name, float& UserValue, float& FinalValue); // Function FMODStudio.FMODAudioComponent.GetParameterValue
	float GetParameter(struct FName Name); // Function FMODStudio.FMODAudioComponent.GetParameter
	int32_t GetLength(); // Function FMODStudio.FMODAudioComponent.GetLength
}; 
 
 


//Class FMODStudio.FMODBlueprintStatics Size 40
// Inherited 40 bytes 
class UFMODBlueprintStatics : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void VCASetVolume(struct UFMODVCA* Vca, float Volume); // Function FMODStudio.FMODBlueprintStatics.VCASetVolume
	void UnloadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData
	void UnloadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData
	void UnloadBank(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBank
	void SetOutputDriverByName(struct FString NewDriverName); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName
	void SetOutputDriverByIndex(int32_t NewDriverIndex); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex
	void SetLocale(struct FString Locale); // Function FMODStudio.FMODBlueprintStatics.SetLocale
	void SetGlobalParameterByName(struct FName Name, float Value); // Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName
	struct UFMODAudioComponent* PlayEventAttached(struct UFMODEvent* Event, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy); // Function FMODStudio.FMODBlueprintStatics.PlayEventAttached
	struct FFMODEventInstance PlayEventAtLocation(struct UObject* WorldContextObject, struct UFMODEvent* Event, struct FTransform& Location, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation
	struct FFMODEventInstance PlayEvent2D(struct UObject* WorldContextObject, struct UFMODEvent* Event, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEvent2D
	void MixerSuspend(); // Function FMODStudio.FMODBlueprintStatics.MixerSuspend
	void MixerResume(); // Function FMODStudio.FMODBlueprintStatics.MixerResume
	void LoadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData
	void LoadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData
	void LoadBank(struct UFMODBank* Bank, bool bBlocking, bool bLoadSampleData); // Function FMODStudio.FMODBlueprintStatics.LoadBank
	bool IsBankLoaded(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.IsBankLoaded
	struct TArray<struct FString> GetOutputDrivers(); // Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers
	void GetGlobalParameterValueByName(struct FName Name, float& UserValue, float& FinalValue); // Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName
	float GetGlobalParameterByName(struct FName Name); // Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName
	struct TArray<struct FFMODEventInstance> FindEventInstances(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.FindEventInstances
	struct UFMODEvent* FindEventByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindEventByName
	struct UFMODAsset* FindAssetByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindAssetByName
	void EventInstanceStop(struct FFMODEventInstance EventInstance, bool Release); // Function FMODStudio.FMODBlueprintStatics.EventInstanceStop
	void EventInstanceSetVolume(struct FFMODEventInstance EventInstance, float Volume); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume
	void EventInstanceSetTransform(struct FFMODEventInstance EventInstance, struct FTransform& Location); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform
	void EventInstanceSetProperty(struct FFMODEventInstance EventInstance, enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty
	void EventInstanceSetPitch(struct FFMODEventInstance EventInstance, float Pitch); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch
	void EventInstanceSetPaused(struct FFMODEventInstance EventInstance, bool paused); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused
	void EventInstanceSetParameter(struct FFMODEventInstance EventInstance, struct FName Name, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter
	void EventInstanceRelease(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease
	void EventInstancePlay(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstancePlay
	void EventInstanceKeyOff(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff
	bool EventInstanceIsValid(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid
	void EventInstanceGetParameterValue(struct FFMODEventInstance EventInstance, struct FName Name, float& UserValue, float& FinalValue); // Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue
	float EventInstanceGetParameter(struct FFMODEventInstance EventInstance, struct FName Name); // Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter
	void BusStopAllEvents(struct UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE stopMode); // Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents
	void BusSetVolume(struct UFMODBus* Bus, float Volume); // Function FMODStudio.FMODBlueprintStatics.BusSetVolume
	void BusSetPaused(struct UFMODBus* Bus, bool bPaused); // Function FMODStudio.FMODBlueprintStatics.BusSetPaused
	void BusSetMute(struct UFMODBus* Bus, bool bMute); // Function FMODStudio.FMODBlueprintStatics.BusSetMute
}; 
 
 


//Class FMODStudio.FMODBank Size 56
// Inherited 56 bytes 
class UFMODBank : public UFMODAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODBankLookup Size 96
// Inherited 40 bytes 
class UFMODBankLookup : public UObject
{

 public: 
	struct UDataTable* DataTable;  // Offset: 40 Size: 8
	struct FString MasterBankPath;  // Offset: 48 Size: 16
	struct FString MasterAssetsBankPath;  // Offset: 64 Size: 16
	struct FString MasterStringsBankPath;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODBus Size 56
// Inherited 56 bytes 
class UFMODBus : public UFMODAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODEvent Size 56
// Inherited 56 bytes 
class UFMODEvent : public UFMODAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODEventControlSection Size 384
// Inherited 232 bytes 
class UFMODEventControlSection : public UMovieSceneSection
{

 public: 
	struct FFMODEventControlChannel ControlKeys;  // Offset: 232 Size: 152



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODEventControlTrack Size 168
// Inherited 144 bytes 
class UFMODEventControlTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> ControlSections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODEventParameterTrack Size 168
// Inherited 144 bytes 
class UFMODEventParameterTrack : public UMovieSceneNameableTrack
{

 public: 
	char pad_144[8];  // Offset: 144 Size: 8
	struct TArray<struct UMovieSceneSection*> Sections;  // Offset: 152 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODPort Size 56
// Inherited 56 bytes 
class UFMODPort : public UFMODAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODSettings Size 448
// Inherited 40 bytes 
class UFMODSettings : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bLoadAllBanks : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bLoadAllSampleData : 1;  // Offset: 41 Size: 1
	char pad_42_1 : 7;  // Offset: 42 Size: 1
	bool bEnableLiveUpdate : 1;  // Offset: 42 Size: 1
	char pad_43_1 : 7;  // Offset: 43 Size: 1
	bool bEnableEditorLiveUpdate : 1;  // Offset: 43 Size: 1
	char pad_44[4];  // Offset: 44 Size: 4
	struct FDirectoryPath BankOutputDirectory;  // Offset: 48 Size: 16
	enum class EFMODSpeakerMode OutputFormat;  // Offset: 64 Size: 1
	enum class EFMODOutput OutputType;  // Offset: 65 Size: 1
	char pad_66[6];  // Offset: 66 Size: 6
	struct TArray<struct FFMODProjectLocale> Locales;  // Offset: 72 Size: 16
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bVol0Virtual : 1;  // Offset: 88 Size: 1
	char pad_89[3];  // Offset: 89 Size: 3
	float Vol0VirtualLevel;  // Offset: 92 Size: 4
	int32_t SampleRate;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bMatchHardwareSampleRate : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	int32_t RealChannelCount;  // Offset: 104 Size: 4
	int32_t TotalChannelCount;  // Offset: 108 Size: 4
	int32_t DSPBufferLength;  // Offset: 112 Size: 4
	int32_t DSPBufferCount;  // Offset: 116 Size: 4
	int32_t FileBufferSize;  // Offset: 120 Size: 4
	int32_t StudioUpdatePeriod;  // Offset: 124 Size: 4
	struct FString InitialOutputDriverName;  // Offset: 128 Size: 16
	char pad_144_1 : 7;  // Offset: 144 Size: 1
	bool bLockAllBuses : 1;  // Offset: 144 Size: 1
	char pad_145[3];  // Offset: 145 Size: 3
	struct FCustomPoolSizes MemoryPoolSizes;  // Offset: 148 Size: 20
	int32_t LiveUpdatePort;  // Offset: 168 Size: 4
	int32_t EditorLiveUpdatePort;  // Offset: 172 Size: 4
	int32_t ReloadBanksDelay;  // Offset: 176 Size: 4
	char pad_180_1 : 7;  // Offset: 180 Size: 1
	bool bEnableAPIErrorLogging : 1;  // Offset: 180 Size: 1
	char pad_181_1 : 7;  // Offset: 181 Size: 1
	bool bEnableMemoryTracking : 1;  // Offset: 181 Size: 1
	char pad_182[2];  // Offset: 182 Size: 2
	struct TArray<struct FString> PluginFiles;  // Offset: 184 Size: 16
	struct FString ContentBrowserPrefix;  // Offset: 200 Size: 16
	struct FString ForcePlatformName;  // Offset: 216 Size: 16
	struct FString MasterBankName;  // Offset: 232 Size: 16
	struct FString SkipLoadBankName;  // Offset: 248 Size: 16
	struct FString StudioBankKey;  // Offset: 264 Size: 16
	struct FString WavWriterPath;  // Offset: 280 Size: 16
	enum class EFMODLogging LoggingLevel;  // Offset: 296 Size: 1
	char pad_297[7];  // Offset: 297 Size: 7
	struct FString OcclusionParameter;  // Offset: 304 Size: 16
	struct FString AmbientVolumeParameter;  // Offset: 320 Size: 16
	struct FString AmbientLPFParameter;  // Offset: 336 Size: 16
	struct TMap<enum class EFMODPlatforms, struct FFMODPlatformSettings> Platforms;  // Offset: 352 Size: 80
	char pad_432[16];  // Offset: 432 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODSnapshotReverb Size 112
// Inherited 96 bytes 
class UFMODSnapshotReverb : public UReverbEffect
{

 public: 
	struct FGuid AssetGuid;  // Offset: 96 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FMODStudio.FMODVCA Size 56
// Inherited 56 bytes 
class UFMODVCA : public UFMODAsset
{

 public: 



 // Functions 
 public:
}; 
 
 


