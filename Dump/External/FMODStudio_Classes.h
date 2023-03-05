#pragma once 
#include <FMODStudio_Structs.h>
 
 
 
class AFMODAmbientSound
{
public:
	AFMODAmbientSound(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODAudioComponent GetAudioComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UFMODAudioComponent(ptr_addr);
	}
	bool GetbAutoStart() {
		return memory.read<bool>(m_addr + 552);
	}

private:
	std::uint64_t m_addr = 0;
};


class AFMODManager
{
public:
	AFMODManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbEnableAmbientSound() {
		return memory.read<bool>(m_addr + 576);
	}
	bool GetbEnableAnimSound() {
		return memory.read<bool>(m_addr + 577);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODSnapshot
{
public:
	UFMODSnapshot(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODAnimNotifyPlay
{
public:
	UFMODAnimNotifyPlay(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbFollow() {
		return memory.read<char>(m_addr + 56);
	}
	struct FString GetAttachName() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UFMODEvent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODAsset
{
public:
	UFMODAsset(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetAssetGuid() {
		return memory.read<struct FGuid>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODAudioComponent
{
public:
	UFMODAudioComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UFMODEvent GetEvent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 520);
		return struct UFMODEvent(ptr_addr);
	}
	struct TMap<struct FName, float> GetParameterCache() {
		return memory.read<struct TMap<struct FName, float>>(m_addr + 528);
	}
	struct FString GetProgrammerSoundName() {
		return memory.read<struct FString>(m_addr + 616);
	}
	char GetbEnableTimelineCallbacks() {
		return memory.read<char>(m_addr + 632);
	}
	char GetbAutoDestroy() {
		return memory.read<char>(m_addr + 656);
	}
	char GetbStopWhenOwnerDestroyed() {
		return memory.read<char>(m_addr + 656);
	}
	struct FMulticastInlineDelegate GetOnEventStopped() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 664);
	}
	struct FMulticastInlineDelegate GetOnTimelineMarker() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 704);
	}
	struct FMulticastInlineDelegate GetOnTimelineBeat() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 720);
	}
	struct FFMODAttenuationDetails GetAttenuationDetails() {
		return memory.read<struct FFMODAttenuationDetails>(m_addr + 736);
	}
	struct FFMODOcclusionDetails GetOcclusionDetails() {
		return memory.read<struct FFMODOcclusionDetails>(m_addr + 748);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODBlueprintStatics
{
public:
	UFMODBlueprintStatics(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODBank
{
public:
	UFMODBank(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODBankLookup
{
public:
	UFMODBankLookup(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UDataTable GetDataTable() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 40);
		return struct UDataTable(ptr_addr);
	}
	struct FString GetMasterBankPath() {
		return memory.read<struct FString>(m_addr + 48);
	}
	struct FString GetMasterAssetsBankPath() {
		return memory.read<struct FString>(m_addr + 64);
	}
	struct FString GetMasterStringsBankPath() {
		return memory.read<struct FString>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODBus
{
public:
	UFMODBus(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODEvent
{
public:
	UFMODEvent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODEventControlSection
{
public:
	UFMODEventControlSection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FFMODEventControlChannel GetControlKeys() {
		return memory.read<struct FFMODEventControlChannel>(m_addr + 232);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODEventControlTrack
{
public:
	UFMODEventControlTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetControlSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODEventParameterTrack
{
public:
	UFMODEventParameterTrack(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct UMovieSceneSection> GetSections() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct TArray<struct UMovieSceneSection>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODPort
{
public:
	UFMODPort(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UFMODSettings
{
public:
	UFMODSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbLoadAllBanks() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbLoadAllSampleData() {
		return memory.read<bool>(m_addr + 41);
	}
	bool GetbEnableLiveUpdate() {
		return memory.read<bool>(m_addr + 42);
	}
	bool GetbEnableEditorLiveUpdate() {
		return memory.read<bool>(m_addr + 43);
	}
	struct FDirectoryPath GetBankOutputDirectory() {
		return memory.read<struct FDirectoryPath>(m_addr + 48);
	}
	enum class EFMODSpeakerMode GetOutputFormat() {
		return memory.read<enum class EFMODSpeakerMode>(m_addr + 64);
	}
	enum class EFMODOutput GetOutputType() {
		return memory.read<enum class EFMODOutput>(m_addr + 65);
	}
	struct TArray<struct FFMODProjectLocale> GetLocales() {
		return memory.read<struct TArray<struct FFMODProjectLocale>>(m_addr + 72);
	}
	bool GetbVol0Virtual() {
		return memory.read<bool>(m_addr + 88);
	}
	float GetVol0VirtualLevel() {
		return memory.read<float>(m_addr + 92);
	}
	int32_t GetSampleRate() {
		return memory.read<int32_t>(m_addr + 96);
	}
	bool GetbMatchHardwareSampleRate() {
		return memory.read<bool>(m_addr + 100);
	}
	int32_t GetRealChannelCount() {
		return memory.read<int32_t>(m_addr + 104);
	}
	int32_t GetTotalChannelCount() {
		return memory.read<int32_t>(m_addr + 108);
	}
	int32_t GetDSPBufferLength() {
		return memory.read<int32_t>(m_addr + 112);
	}
	int32_t GetDSPBufferCount() {
		return memory.read<int32_t>(m_addr + 116);
	}
	int32_t GetFileBufferSize() {
		return memory.read<int32_t>(m_addr + 120);
	}
	int32_t GetStudioUpdatePeriod() {
		return memory.read<int32_t>(m_addr + 124);
	}
	struct FString GetInitialOutputDriverName() {
		return memory.read<struct FString>(m_addr + 128);
	}
	bool GetbLockAllBuses() {
		return memory.read<bool>(m_addr + 144);
	}
	struct FCustomPoolSizes GetMemoryPoolSizes() {
		return memory.read<struct FCustomPoolSizes>(m_addr + 148);
	}
	int32_t GetLiveUpdatePort() {
		return memory.read<int32_t>(m_addr + 168);
	}
	int32_t GetEditorLiveUpdatePort() {
		return memory.read<int32_t>(m_addr + 172);
	}
	int32_t GetReloadBanksDelay() {
		return memory.read<int32_t>(m_addr + 176);
	}
	bool GetbEnableAPIErrorLogging() {
		return memory.read<bool>(m_addr + 180);
	}
	bool GetbEnableMemoryTracking() {
		return memory.read<bool>(m_addr + 181);
	}
	struct TArray<struct FString> GetPluginFiles() {
		return memory.read<struct TArray<struct FString>>(m_addr + 184);
	}
	struct FString GetContentBrowserPrefix() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FString GetForcePlatformName() {
		return memory.read<struct FString>(m_addr + 216);
	}
	struct FString GetMasterBankName() {
		return memory.read<struct FString>(m_addr + 232);
	}
	struct FString GetSkipLoadBankName() {
		return memory.read<struct FString>(m_addr + 248);
	}
	struct FString GetStudioBankKey() {
		return memory.read<struct FString>(m_addr + 264);
	}
	struct FString GetWavWriterPath() {
		return memory.read<struct FString>(m_addr + 280);
	}
	enum class EFMODLogging GetLoggingLevel() {
		return memory.read<enum class EFMODLogging>(m_addr + 296);
	}
	struct FString GetOcclusionParameter() {
		return memory.read<struct FString>(m_addr + 304);
	}
	struct FString GetAmbientVolumeParameter() {
		return memory.read<struct FString>(m_addr + 320);
	}
	struct FString GetAmbientLPFParameter() {
		return memory.read<struct FString>(m_addr + 336);
	}
	struct TMap<enum class EFMODPlatforms, struct FFMODPlatformSettings> GetPlatforms() {
		return memory.read<struct TMap<enum class EFMODPlatforms, struct FFMODPlatformSettings>>(m_addr + 352);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODSnapshotReverb
{
public:
	UFMODSnapshotReverb(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGuid GetAssetGuid() {
		return memory.read<struct FGuid>(m_addr + 96);
	}

private:
	std::uint64_t m_addr = 0;
};


class UFMODVCA
{
public:
	UFMODVCA(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


