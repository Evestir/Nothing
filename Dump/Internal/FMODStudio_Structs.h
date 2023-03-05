#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct FMODStudio.FMODLocalizedBankRow Size 24
// Inherited 8 bytes 
class FFMODLocalizedBankRow : public FTableRowBase
{

 public: 
	struct FString Path;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODLocalizedBankTable Size 16
// Inherited 8 bytes 
class FFMODLocalizedBankTable : public FTableRowBase
{

 public: 
	struct UDataTable* Banks;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction FMODStudio.OnTimelineMarker__DelegateSignature Size 24
class FOnTimelineMarker__DelegateSignature
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	int32_t position;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction FMODStudio.OnTimelineBeat__DelegateSignature Size 24
class FOnTimelineBeat__DelegateSignature
{

 public: 
	int32_t Bar;  // Offset: 0 Size: 4
	int32_t Beat;  // Offset: 4 Size: 4
	int32_t position;  // Offset: 8 Size: 4
	float Tempo;  // Offset: 12 Size: 4
	int32_t TimeSignatureUpper;  // Offset: 16 Size: 4
	int32_t TimeSignatureLower;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.BusSetVolume Size 16
class FBusSetVolume
{

 public: 
	struct UFMODBus* Bus;  // Offset: 0 Size: 8
	float Volume;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //DelegateFunction FMODStudio.OnEnableAmbientSound__DelegateSignature Size 1
class FOnEnableAmbientSound__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODAttenuationDetails Size 12
class FFMODAttenuationDetails
{

 public: 
	char bOverrideAttenuation : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	float MinimumDistance;  // Offset: 4 Size: 4
	float MaximumDistance;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODOcclusionDetails Size 3
class FFMODOcclusionDetails
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnableOcclusion : 1;  // Offset: 0 Size: 1
	enum class ECollisionChannel OcclusionTraceChannel;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bUseComplexCollisionForOcclusion : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.BusSetMute Size 16
class FBusSetMute
{

 public: 
	struct UFMODBus* Bus;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bMute : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODEventParameterSectionTemplate Size 128
// Inherited 128 bytes 
class FFMODEventParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{

 public: 



 // Functions 
 public:
}; 
 
 //DelegateFunction FMODStudio.OnEnableAnimSound__DelegateSignature Size 1
class FOnEnableAnimSound__DelegateSignature
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODAssetLookupRow Size 40
// Inherited 8 bytes 
class FFMODAssetLookupRow : public FTableRowBase
{

 public: 
	struct FString PackageName;  // Offset: 8 Size: 16
	struct FString AssetName;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch Size 16
class FEventInstanceSetPitch
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	float Pitch;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODEventInstance Size 8
class FFMODEventInstance
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter Size 24
class FEventInstanceGetParameter
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	struct FName Name;  // Offset: 8 Size: 8
	float ReturnValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.GetLength Size 4
class FGetLength
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODEventControlChannel Size 152
// Inherited 152 bytes 
class FFMODEventControlChannel : public FMovieSceneByteChannel
{

 public: 



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceStop Size 16
class FEventInstanceStop
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool Release : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.UnloadBank Size 8
class FUnloadBank
{

 public: 
	struct UFMODBank* Bank;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODEventControlSectionTemplate Size 184
// Inherited 32 bytes 
class FFMODEventControlSectionTemplate : public FMovieSceneEvalTemplate
{

 public: 
	struct FFMODEventControlChannel ControlKeys;  // Offset: 32 Size: 152



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.IsBankLoaded Size 16
class FIsBankLoaded
{

 public: 
	struct UFMODBank* Bank;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODProjectLocale Size 40
class FFMODProjectLocale
{

 public: 
	struct FString LocaleName;  // Offset: 0 Size: 16
	struct FString LocaleCode;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool bDefault : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume Size 16
class FEventInstanceSetVolume
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	float Volume;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstancePlay Size 8
class FEventInstancePlay
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty Size 16
class FEventInstanceSetProperty
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	enum class EFMODEventProperty Property;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float Value;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.IsPlaying Size 1
class FIsPlaying
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.FMODPlatformSettings Size 96
class FFMODPlatformSettings
{

 public: 
	int32_t RealChannelCount;  // Offset: 0 Size: 4
	int32_t SampleRate;  // Offset: 4 Size: 4
	enum class EFMODSpeakerMode SpeakerMode;  // Offset: 8 Size: 1
	enum class EFMODOutput OutputType;  // Offset: 9 Size: 1
	char pad_10[2];  // Offset: 10 Size: 2
	int32_t CustomPoolSize;  // Offset: 12 Size: 4
	struct TMap<enum class EFMODCodec, int32_t> Codecs;  // Offset: 16 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct FMODStudio.CustomPoolSizes Size 20
class FCustomPoolSizes
{

 public: 
	int32_t Desktop;  // Offset: 0 Size: 4
	int32_t Mobile;  // Offset: 4 Size: 4
	int32_t PS4;  // Offset: 8 Size: 4
	int32_t SWITCH;  // Offset: 12 Size: 4
	int32_t XboxOne;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAmbientSound.OnEnableAmbientSound Size 1
class FOnEnableAmbientSound
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnable : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.GetProperty Size 8
class FGetProperty
{

 public: 
	enum class EFMODEventProperty Property;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ReturnValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused Size 16
class FEventInstanceSetPaused
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool paused : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.GetParameter Size 12
class FGetParameter
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.GetParameterValue Size 16
class FGetParameterValue
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float UserValue;  // Offset: 8 Size: 4
	float FinalValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.PlayEvent2D Size 32
class FPlayEvent2D
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UFMODEvent* Event;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bAutoPlay : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct FFMODEventInstance ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.GetTimelinePosition Size 4
class FGetTimelinePosition
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetEvent Size 8
class FSetEvent
{

 public: 
	struct UFMODEvent* NewEvent;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetParameter Size 12
class FSetParameter
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.SetLocale Size 16
class FSetLocale
{

 public: 
	struct FString Locale;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetPaused Size 1
class FSetPaused
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool paused : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetPitch Size 4
class FSetPitch
{

 public: 
	float Pitch;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName Size 16
class FSetProgrammerSoundName
{

 public: 
	struct FString Value;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetProperty Size 8
class FSetProperty
{

 public: 
	enum class EFMODEventProperty Property;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float Value;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetTimelinePosition Size 4
class FSetTimelinePosition
{

 public: 
	int32_t Time;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.LoadBank Size 16
class FLoadBank
{

 public: 
	struct UFMODBank* Bank;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bBlocking : 1;  // Offset: 8 Size: 1
	char pad_9_1 : 7;  // Offset: 9 Size: 1
	bool bLoadSampleData : 1;  // Offset: 9 Size: 1
	char pad_10[6];  // Offset: 10 Size: 6



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODAudioComponent.SetVolume Size 4
class FSetVolume
{

 public: 
	float Volume;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.BusSetPaused Size 16
class FBusSetPaused
{

 public: 
	struct UFMODBus* Bus;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bPaused : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName Size 12
class FSetGlobalParameterByName
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float Value;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents Size 16
class FBusStopAllEvents
{

 public: 
	struct UFMODBus* Bus;  // Offset: 0 Size: 8
	enum class EFMOD_STUDIO_STOP_MODE stopMode;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.FindEventByName Size 24
class FFindEventByName
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct UFMODEvent* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.FindAssetByName Size 24
class FFindAssetByName
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct UFMODAsset* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue Size 24
class FEventInstanceGetParameterValue
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	struct FName Name;  // Offset: 8 Size: 8
	float UserValue;  // Offset: 16 Size: 4
	float FinalValue;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName Size 16
class FGetGlobalParameterValueByName
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float UserValue;  // Offset: 8 Size: 4
	float FinalValue;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid Size 16
class FEventInstanceIsValid
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceKeyOff Size 8
class FEventInstanceKeyOff
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.PlayEventAttached Size 48
class FPlayEventAttached
{

 public: 
	struct UFMODEvent* Event;  // Offset: 0 Size: 8
	struct USceneComponent* AttachToComponent;  // Offset: 8 Size: 8
	struct FName AttachPointName;  // Offset: 16 Size: 8
	struct FVector Location;  // Offset: 24 Size: 12
	enum class EAttachLocation LocationType;  // Offset: 36 Size: 1
	char pad_37_1 : 7;  // Offset: 37 Size: 1
	bool bStopWhenAttachedToDestroyed : 1;  // Offset: 37 Size: 1
	char pad_38_1 : 7;  // Offset: 38 Size: 1
	bool bAutoPlay : 1;  // Offset: 38 Size: 1
	char pad_39_1 : 7;  // Offset: 39 Size: 1
	bool bAutoDestroy : 1;  // Offset: 39 Size: 1
	struct UFMODAudioComponent* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease Size 8
class FEventInstanceRelease
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter Size 24
class FEventInstanceSetParameter
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	struct FName Name;  // Offset: 8 Size: 8
	float Value;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform Size 64
class FEventInstanceSetTransform
{

 public: 
	struct FFMODEventInstance EventInstance;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform Location;  // Offset: 16 Size: 48



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.FindEventInstances Size 32
class FFindEventInstances
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UFMODEvent* Event;  // Offset: 8 Size: 8
	struct TArray<struct FFMODEventInstance> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers Size 16
class FGetOutputDrivers
{

 public: 
	struct TArray<struct FString> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName Size 12
class FGetGlobalParameterByName
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	float ReturnValue;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData Size 8
class FLoadBankSampleData
{

 public: 
	struct UFMODBank* Bank;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData Size 16
class FLoadEventSampleData
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UFMODEvent* Event;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation Size 80
class FPlayEventAtLocation
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UFMODEvent* Event;  // Offset: 8 Size: 8
	struct FTransform Location;  // Offset: 16 Size: 48
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bAutoPlay : 1;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7
	struct FFMODEventInstance ReturnValue;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex Size 4
class FSetOutputDriverByIndex
{

 public: 
	int32_t NewDriverIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName Size 16
class FSetOutputDriverByName
{

 public: 
	struct FString NewDriverName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData Size 8
class FUnloadBankSampleData
{

 public: 
	struct UFMODBank* Bank;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData Size 16
class FUnloadEventSampleData
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UFMODEvent* Event;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FMODStudio.FMODBlueprintStatics.VCASetVolume Size 16
class FVCASetVolume
{

 public: 
	struct UFMODVCA* Vca;  // Offset: 0 Size: 8
	float Volume;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 