#pragma once 
#include <EngineSettings_Structs.h>
 
 
 
class UHudSettings
{
public:
	UHudSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbShowHUD() {
		return memory.read<char>(m_addr + 40);
	}
	struct TArray<struct FName> GetDebugDisplay() {
		return memory.read<struct TArray<struct FName>>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UConsoleSettings
{
public:
	UConsoleSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxScrollbackSize() {
		return memory.read<int32_t>(m_addr + 40);
	}
	struct TArray<struct FAutoCompleteCommand> GetManualAutoCompleteList() {
		return memory.read<struct TArray<struct FAutoCompleteCommand>>(m_addr + 48);
	}
	struct TArray<struct FString> GetAutoCompleteMapPaths() {
		return memory.read<struct TArray<struct FString>>(m_addr + 64);
	}
	float GetBackgroundOpacityPercentage() {
		return memory.read<float>(m_addr + 80);
	}
	bool GetbOrderTopToBottom() {
		return memory.read<bool>(m_addr + 84);
	}
	bool GetbDisplayHelpInAutoComplete() {
		return memory.read<bool>(m_addr + 85);
	}
	struct FColor GetInputColor() {
		return memory.read<struct FColor>(m_addr + 88);
	}
	struct FColor GetHistoryColor() {
		return memory.read<struct FColor>(m_addr + 92);
	}
	struct FColor GetAutoCompleteCommandColor() {
		return memory.read<struct FColor>(m_addr + 96);
	}
	struct FColor GetAutoCompleteCVarColor() {
		return memory.read<struct FColor>(m_addr + 100);
	}
	struct FColor GetAutoCompleteFadedColor() {
		return memory.read<struct FColor>(m_addr + 104);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeneralProjectSettings
{
public:
	UGeneralProjectSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetCompanyName() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FString GetCompanyDistinguishedName() {
		return memory.read<struct FString>(m_addr + 56);
	}
	struct FString GetCopyrightNotice() {
		return memory.read<struct FString>(m_addr + 72);
	}
	struct FString GetDescription() {
		return memory.read<struct FString>(m_addr + 88);
	}
	struct FString GetHomepage() {
		return memory.read<struct FString>(m_addr + 104);
	}
	struct FString GetLicensingTerms() {
		return memory.read<struct FString>(m_addr + 120);
	}
	struct FString GetPrivacyPolicy() {
		return memory.read<struct FString>(m_addr + 136);
	}
	struct FGuid GetProjectID() {
		return memory.read<struct FGuid>(m_addr + 152);
	}
	struct FString GetProjectName() {
		return memory.read<struct FString>(m_addr + 168);
	}
	struct FString GetProjectVersion() {
		return memory.read<struct FString>(m_addr + 184);
	}
	struct FString GetSupportContact() {
		return memory.read<struct FString>(m_addr + 200);
	}
	struct FText GetProjectDisplayedTitle() {
		return memory.read<struct FText>(m_addr + 216);
	}
	struct FText GetProjectDebugTitleInfo() {
		return memory.read<struct FText>(m_addr + 240);
	}
	bool GetbShouldWindowPreserveAspectRatio() {
		return memory.read<bool>(m_addr + 264);
	}
	bool GetbUseBorderlessWindow() {
		return memory.read<bool>(m_addr + 265);
	}
	bool GetbStartInVR() {
		return memory.read<bool>(m_addr + 266);
	}
	bool GetbAllowWindowResize() {
		return memory.read<bool>(m_addr + 267);
	}
	bool GetbAllowClose() {
		return memory.read<bool>(m_addr + 268);
	}
	bool GetbAllowMaximize() {
		return memory.read<bool>(m_addr + 269);
	}
	bool GetbAllowMinimize() {
		return memory.read<bool>(m_addr + 270);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameMapsSettings
{
public:
	UGameMapsSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FString GetLocalMapOptions() {
		return memory.read<struct FString>(m_addr + 40);
	}
	struct FSoftObjectPath GetTransitionMap() {
		return memory.read<struct FSoftObjectPath>(m_addr + 56);
	}
	bool GetbUseSplitscreen() {
		return memory.read<bool>(m_addr + 80);
	}
	enum class ETwoPlayerSplitScreenType GetTwoPlayerSplitscreenLayout() {
		return memory.read<enum class ETwoPlayerSplitScreenType>(m_addr + 81);
	}
	enum class EThreePlayerSplitScreenType GetThreePlayerSplitscreenLayout() {
		return memory.read<enum class EThreePlayerSplitScreenType>(m_addr + 82);
	}
	enum class EFourPlayerSplitScreenType GetFourPlayerSplitscreenLayout() {
		return memory.read<enum class EFourPlayerSplitScreenType>(m_addr + 83);
	}
	bool GetbOffsetPlayerGamepadIds() {
		return memory.read<bool>(m_addr + 84);
	}
	struct FSoftClassPath GetGameInstanceClass() {
		return memory.read<struct FSoftClassPath>(m_addr + 88);
	}
	struct FSoftObjectPath GetGameDefaultMap() {
		return memory.read<struct FSoftObjectPath>(m_addr + 112);
	}
	struct FSoftObjectPath GetServerDefaultMap() {
		return memory.read<struct FSoftObjectPath>(m_addr + 136);
	}
	struct FSoftClassPath GetGlobalDefaultGameMode() {
		return memory.read<struct FSoftClassPath>(m_addr + 160);
	}
	struct FSoftClassPath GetGlobalDefaultServerGameMode() {
		return memory.read<struct FSoftClassPath>(m_addr + 184);
	}
	struct TArray<struct FGameModeName> GetGameModeMapPrefixes() {
		return memory.read<struct TArray<struct FGameModeName>>(m_addr + 208);
	}
	struct TArray<struct FGameModeName> GetGameModeClassAliases() {
		return memory.read<struct TArray<struct FGameModeName>>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameNetworkManagerSettings
{
public:
	UGameNetworkManagerSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMinDynamicBandwidth() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMaxDynamicBandwidth() {
		return memory.read<int32_t>(m_addr + 44);
	}
	int32_t GetTotalNetBandwidth() {
		return memory.read<int32_t>(m_addr + 48);
	}
	int32_t GetBadPingThreshold() {
		return memory.read<int32_t>(m_addr + 52);
	}
	char GetbIsStandbyCheckingEnabled() {
		return memory.read<char>(m_addr + 56);
	}
	float GetStandbyRxCheatTime() {
		return memory.read<float>(m_addr + 60);
	}
	float GetStandbyTxCheatTime() {
		return memory.read<float>(m_addr + 64);
	}
	float GetPercentMissingForRxStandby() {
		return memory.read<float>(m_addr + 68);
	}
	float GetPercentMissingForTxStandby() {
		return memory.read<float>(m_addr + 72);
	}
	float GetPercentForBadPing() {
		return memory.read<float>(m_addr + 76);
	}
	float GetJoinInProgressStandbyWaitTime() {
		return memory.read<float>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGameSessionSettings
{
public:
	UGameSessionSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxSpectators() {
		return memory.read<int32_t>(m_addr + 40);
	}
	int32_t GetMaxPlayers() {
		return memory.read<int32_t>(m_addr + 44);
	}
	char GetbRequiresPushToTalk() {
		return memory.read<char>(m_addr + 48);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeneralEngineSettings
{
public:
	UGeneralEngineSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


