#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FFMODLocalizedBankRow
{
public:
	FFMODLocalizedBankRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPath() {
		return memory.read<struct FString>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODLocalizedBankTable
{
public:
	FFMODLocalizedBankTable(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetBanks() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UDataTable(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTimelineMarker__DelegateSignature
{
public:
	FOnTimelineMarker__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	int32_t Getposition() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnTimelineBeat__DelegateSignature
{
public:
	FOnTimelineBeat__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetBar() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetBeat() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t Getposition() {
		return memory.read<int32_t>(m_addr + 8);
	}
	float GetTempo() {
		return memory.read<float>(m_addr + 12);
	}
	int32_t GetTimeSignatureUpper() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetTimeSignatureLower() {
		return memory.read<int32_t>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FBusSetVolume
{
public:
	FBusSetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBus GetBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBus(ptr_addr);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEnableAmbientSound__DelegateSignature
{
public:
	FOnEnableAmbientSound__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODAttenuationDetails
{
public:
	FFMODAttenuationDetails(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbOverrideAttenuation() {
		return memory.read<char>(m_addr + 0);
	}
	float GetMinimumDistance() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMaximumDistance() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODOcclusionDetails
{
public:
	FFMODOcclusionDetails(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableOcclusion() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class ECollisionChannel GetOcclusionTraceChannel() {
		return memory.read<enum class ECollisionChannel>(m_addr + 1);
	}
	bool GetbUseComplexCollisionForOcclusion() {
		return memory.read<bool>(m_addr + 2);
	}

private:
	std::uint64_t m_addr = 0;
};class FBusSetMute
{
public:
	FBusSetMute(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBus GetBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBus(ptr_addr);
	}
	bool GetbMute() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODEventParameterSectionTemplate
{
public:
	FFMODEventParameterSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FOnEnableAnimSound__DelegateSignature
{
public:
	FOnEnableAnimSound__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODAssetLookupRow
{
public:
	FFMODAssetLookupRow(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetPackageName() {
		return memory.read<struct FString>(m_addr + 8);
	}
	struct FString GetAssetName() {
		return memory.read<struct FString>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetPitch
{
public:
	FEventInstanceSetPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	float GetPitch() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODEventInstance
{
public:
	FFMODEventInstance(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FEventInstanceGetParameter
{
public:
	FEventInstanceGetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetLength
{
public:
	FGetLength(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODEventControlChannel
{
public:
	FFMODEventControlChannel(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FEventInstanceStop
{
public:
	FEventInstanceStop(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	bool GetRelease() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadBank
{
public:
	FUnloadBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODEventControlSectionTemplate
{
public:
	FFMODEventControlSectionTemplate(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventControlChannel GetControlKeys() {
		return memory.read<struct FFMODEventControlChannel>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsBankLoaded
{
public:
	FIsBankLoaded(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBank(ptr_addr);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODProjectLocale
{
public:
	FFMODProjectLocale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLocaleName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct FString GetLocaleCode() {
		return memory.read<struct FString>(m_addr + 16);
	}
	bool GetbDefault() {
		return memory.read<bool>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetVolume
{
public:
	FEventInstanceSetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstancePlay
{
public:
	FEventInstancePlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetProperty
{
public:
	FEventInstanceSetProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	enum class EFMODEventProperty GetProperty() {
		return memory.read<enum class EFMODEventProperty>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsPlaying
{
public:
	FIsPlaying(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FFMODPlatformSettings
{
public:
	FFMODPlatformSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetRealChannelCount() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 4);
	}
	enum class EFMODSpeakerMode GetSpeakerMode() {
		return memory.read<enum class EFMODSpeakerMode>(m_addr + 8);
	}
	enum class EFMODOutput GetOutputType() {
		return memory.read<enum class EFMODOutput>(m_addr + 9);
	}
	int32_t GetCustomPoolSize() {
		return memory.read<int32_t>(m_addr + 12);
	}
	struct TMap<enum class EFMODCodec, int32_t> GetCodecs() {
		return memory.read<struct TMap<enum class EFMODCodec, int32_t>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FCustomPoolSizes
{
public:
	FCustomPoolSizes(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetDesktop() {
		return memory.read<int32_t>(m_addr + 0);
	}
	int32_t GetMobile() {
		return memory.read<int32_t>(m_addr + 4);
	}
	int32_t GetPS4() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetSWITCH() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetXboxOne() {
		return memory.read<int32_t>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnEnableAmbientSound
{
public:
	FOnEnableAmbientSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnable() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetProperty
{
public:
	FGetProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFMODEventProperty GetProperty() {
		return memory.read<enum class EFMODEventProperty>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetPaused
{
public:
	FEventInstanceSetPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	bool Getpaused() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameter
{
public:
	FGetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetParameterValue
{
public:
	FGetParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetUserValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFinalValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayEvent2D
{
public:
	FPlayEvent2D(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFMODEvent(ptr_addr);
	}
	bool GetbAutoPlay() {
		return memory.read<bool>(m_addr + 16);
	}
	struct FFMODEventInstance GetReturnValue() {
		return memory.read<struct FFMODEventInstance>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetTimelinePosition
{
public:
	FGetTimelinePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetReturnValue() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetEvent
{
public:
	FSetEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetNewEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetParameter
{
public:
	FSetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetLocale
{
public:
	FSetLocale(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLocale() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPaused
{
public:
	FSetPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool Getpaused() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetPitch
{
public:
	FSetPitch(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetPitch() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetProgrammerSoundName
{
public:
	FSetProgrammerSoundName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetValue() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetProperty
{
public:
	FSetProperty(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EFMODEventProperty GetProperty() {
		return memory.read<enum class EFMODEventProperty>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTimelinePosition
{
public:
	FSetTimelinePosition(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTime() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBank
{
public:
	FLoadBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBank(ptr_addr);
	}
	bool GetbBlocking() {
		return memory.read<bool>(m_addr + 8);
	}
	bool GetbLoadSampleData() {
		return memory.read<bool>(m_addr + 9);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetVolume
{
public:
	FSetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetVolume() {
		return memory.read<float>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FBusSetPaused
{
public:
	FBusSetPaused(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBus GetBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBus(ptr_addr);
	}
	bool GetbPaused() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetGlobalParameterByName
{
public:
	FSetGlobalParameterByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FBusStopAllEvents
{
public:
	FBusStopAllEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBus GetBus() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBus(ptr_addr);
	}
	enum class EFMOD_STUDIO_STOP_MODE GetstopMode() {
		return memory.read<enum class EFMOD_STUDIO_STOP_MODE>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindEventByName
{
public:
	FFindEventByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UFMODEvent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindAssetByName
{
public:
	FFindAssetByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetName() {
		return memory.read<struct FString>(m_addr + 0);
	}
	struct UFMODAsset GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFMODAsset(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceGetParameterValue
{
public:
	FEventInstanceGetParameterValue(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetUserValue() {
		return memory.read<float>(m_addr + 16);
	}
	float GetFinalValue() {
		return memory.read<float>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGlobalParameterValueByName
{
public:
	FGetGlobalParameterValueByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetUserValue() {
		return memory.read<float>(m_addr + 8);
	}
	float GetFinalValue() {
		return memory.read<float>(m_addr + 12);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceIsValid
{
public:
	FEventInstanceIsValid(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceKeyOff
{
public:
	FEventInstanceKeyOff(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayEventAttached
{
public:
	FPlayEventAttached(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODEvent(ptr_addr);
	}
	struct USceneComponent GetAttachToComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct USceneComponent(ptr_addr);
	}
	struct FName GetAttachPointName() {
		return memory.read<struct FName>(m_addr + 16);
	}
	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	enum class EAttachLocation GetLocationType() {
		return memory.read<enum class EAttachLocation>(m_addr + 36);
	}
	bool GetbStopWhenAttachedToDestroyed() {
		return memory.read<bool>(m_addr + 37);
	}
	bool GetbAutoPlay() {
		return memory.read<bool>(m_addr + 38);
	}
	bool GetbAutoDestroy() {
		return memory.read<bool>(m_addr + 39);
	}
	struct UFMODAudioComponent GetReturnValue() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UFMODAudioComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceRelease
{
public:
	FEventInstanceRelease(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetParameter
{
public:
	FEventInstanceSetParameter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 8);
	}
	float GetValue() {
		return memory.read<float>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FEventInstanceSetTransform
{
public:
	FEventInstanceSetTransform(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventInstance GetEventInstance() {
		return memory.read<struct FFMODEventInstance>(m_addr + 0);
	}
	struct FTransform GetLocation() {
		return memory.read<struct FTransform>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FFindEventInstances
{
public:
	FFindEventInstances(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFMODEvent(ptr_addr);
	}
	struct TArray<struct FFMODEventInstance> GetReturnValue() {
		return memory.read<struct TArray<struct FFMODEventInstance>>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetOutputDrivers
{
public:
	FGetOutputDrivers(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FString> GetReturnValue() {
		return memory.read<struct TArray<struct FString>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGetGlobalParameterByName
{
public:
	FGetGlobalParameterByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FName GetName() {
		return memory.read<struct FName>(m_addr + 0);
	}
	float GetReturnValue() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadBankSampleData
{
public:
	FLoadBankSampleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FLoadEventSampleData
{
public:
	FLoadEventSampleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FPlayEventAtLocation
{
public:
	FPlayEventAtLocation(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFMODEvent(ptr_addr);
	}
	struct FTransform GetLocation() {
		return memory.read<struct FTransform>(m_addr + 16);
	}
	bool GetbAutoPlay() {
		return memory.read<bool>(m_addr + 64);
	}
	struct FFMODEventInstance GetReturnValue() {
		return memory.read<struct FFMODEventInstance>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOutputDriverByIndex
{
public:
	FSetOutputDriverByIndex(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetNewDriverIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetOutputDriverByName
{
public:
	FSetOutputDriverByName(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetNewDriverName() {
		return memory.read<struct FString>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadBankSampleData
{
public:
	FUnloadBankSampleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODBank GetBank() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODBank(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FUnloadEventSampleData
{
public:
	FUnloadEventSampleData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UObject GetWorldContextObject() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UObject(ptr_addr);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FVCASetVolume
{
public:
	FVCASetVolume(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODVCA GetVca() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UFMODVCA(ptr_addr);
	}
	float GetVolume() {
		return memory.read<float>(m_addr + 8);
	}

private:
	std::uint64_t m_addr = 0;
};