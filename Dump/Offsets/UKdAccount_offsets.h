namespace offsets
{
	namespace UKdAccount
	{
			constexpr auto KartInst = 0x170; // Size: 8, Type: struct UKdService*
			constexpr auto GameInstance = 0x178; // Size: 8, Type: struct UGameInstance*
			constexpr auto serverSetting = 0x258; // Size: 48, Type: struct FServerSettingToClient
			constexpr auto CheatHandler = 0x2f0; // Size: 8, Type: struct UKdAccountCheatHandler*
			constexpr auto FuncLib = 0x2f8; // Size: 8, Type: struct UAccountFuncLibImpl*
			constexpr auto SeasonRacingPassSet = 0x408; // Size: 8, Type: struct UKtRacingPassSet*
			constexpr auto ServerConnection = 0xbb8; // Size: 8, Type: struct UServerConnection*
			constexpr auto LoginTask = 0xbf0; // Size: 8, Type: struct UKdServerLoginTask*
			constexpr auto GfsServerConnection = 0x13d8; // Size: 8, Type: struct UGfsServerConnection*
			constexpr auto GfsServer = 0x13e0; // Size: 8, Type: struct UGfsServer*
			constexpr auto PrevClientState = 0x1548; // Size: 1, Type: enum class EClientState
			constexpr auto NowClientState = 0x1549; // Size: 1, Type: enum class EClientState
			constexpr auto RaceGameResults = 0x15a8; // Size: 80, Type: struct TMap<struct FString, struct FRaceGameResult>
	}
} 
