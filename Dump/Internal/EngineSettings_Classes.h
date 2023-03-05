#pragma once 
#include <EngineSettings_Structs.h>
 
 
 
//Class EngineSettings.HudSettings Size 64
// Inherited 40 bytes 
class UHudSettings : public UObject
{

 public: 
	char bShowHUD : 1;  // Offset: 40 Size: 1
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	char pad_41[8];  // Offset: 41 Size: 8
	struct TArray<struct FName> DebugDisplay;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 


//Class EngineSettings.ConsoleSettings Size 112
// Inherited 40 bytes 
class UConsoleSettings : public UObject
{

 public: 
	int32_t MaxScrollbackSize;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList;  // Offset: 48 Size: 16
	struct TArray<struct FString> AutoCompleteMapPaths;  // Offset: 64 Size: 16
	float BackgroundOpacityPercentage;  // Offset: 80 Size: 4
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bOrderTopToBottom : 1;  // Offset: 84 Size: 1
	char pad_85_1 : 7;  // Offset: 85 Size: 1
	bool bDisplayHelpInAutoComplete : 1;  // Offset: 85 Size: 1
	char pad_86[2];  // Offset: 86 Size: 2
	struct FColor InputColor;  // Offset: 88 Size: 4
	struct FColor HistoryColor;  // Offset: 92 Size: 4
	struct FColor AutoCompleteCommandColor;  // Offset: 96 Size: 4
	struct FColor AutoCompleteCVarColor;  // Offset: 100 Size: 4
	struct FColor AutoCompleteFadedColor;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 


//Class EngineSettings.GeneralProjectSettings Size 272
// Inherited 40 bytes 
class UGeneralProjectSettings : public UObject
{

 public: 
	struct FString CompanyName;  // Offset: 40 Size: 16
	struct FString CompanyDistinguishedName;  // Offset: 56 Size: 16
	struct FString CopyrightNotice;  // Offset: 72 Size: 16
	struct FString Description;  // Offset: 88 Size: 16
	struct FString Homepage;  // Offset: 104 Size: 16
	struct FString LicensingTerms;  // Offset: 120 Size: 16
	struct FString PrivacyPolicy;  // Offset: 136 Size: 16
	struct FGuid ProjectID;  // Offset: 152 Size: 16
	struct FString ProjectName;  // Offset: 168 Size: 16
	struct FString ProjectVersion;  // Offset: 184 Size: 16
	struct FString SupportContact;  // Offset: 200 Size: 16
	struct FText ProjectDisplayedTitle;  // Offset: 216 Size: 24
	struct FText ProjectDebugTitleInfo;  // Offset: 240 Size: 24
	char pad_264_1 : 7;  // Offset: 264 Size: 1
	bool bShouldWindowPreserveAspectRatio : 1;  // Offset: 264 Size: 1
	char pad_265_1 : 7;  // Offset: 265 Size: 1
	bool bUseBorderlessWindow : 1;  // Offset: 265 Size: 1
	char pad_266_1 : 7;  // Offset: 266 Size: 1
	bool bStartInVR : 1;  // Offset: 266 Size: 1
	char pad_267_1 : 7;  // Offset: 267 Size: 1
	bool bAllowWindowResize : 1;  // Offset: 267 Size: 1
	char pad_268_1 : 7;  // Offset: 268 Size: 1
	bool bAllowClose : 1;  // Offset: 268 Size: 1
	char pad_269_1 : 7;  // Offset: 269 Size: 1
	bool bAllowMaximize : 1;  // Offset: 269 Size: 1
	char pad_270_1 : 7;  // Offset: 270 Size: 1
	bool bAllowMinimize : 1;  // Offset: 270 Size: 1
	char pad_271[1];  // Offset: 271 Size: 1



 // Functions 
 public:
}; 
 
 


//Class EngineSettings.GameMapsSettings Size 240
// Inherited 40 bytes 
class UGameMapsSettings : public UObject
{

 public: 
	struct FString LocalMapOptions;  // Offset: 40 Size: 16
	struct FSoftObjectPath TransitionMap;  // Offset: 56 Size: 24
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bUseSplitscreen : 1;  // Offset: 80 Size: 1
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout;  // Offset: 81 Size: 1
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout;  // Offset: 82 Size: 1
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;  // Offset: 83 Size: 1
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bOffsetPlayerGamepadIds : 1;  // Offset: 84 Size: 1
	char pad_85[3];  // Offset: 85 Size: 3
	struct FSoftClassPath GameInstanceClass;  // Offset: 88 Size: 24
	struct FSoftObjectPath GameDefaultMap;  // Offset: 112 Size: 24
	struct FSoftObjectPath ServerDefaultMap;  // Offset: 136 Size: 24
	struct FSoftClassPath GlobalDefaultGameMode;  // Offset: 160 Size: 24
	struct FSoftClassPath GlobalDefaultServerGameMode;  // Offset: 184 Size: 24
	struct TArray<struct FGameModeName> GameModeMapPrefixes;  // Offset: 208 Size: 16
	struct TArray<struct FGameModeName> GameModeClassAliases;  // Offset: 224 Size: 16



 // Functions 
 public:
	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
	bool GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
	struct UGameMapsSettings* GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings
}; 
 
 


//Class EngineSettings.GameNetworkManagerSettings Size 88
// Inherited 40 bytes 
class UGameNetworkManagerSettings : public UObject
{

 public: 
	int32_t MinDynamicBandwidth;  // Offset: 40 Size: 4
	int32_t MaxDynamicBandwidth;  // Offset: 44 Size: 4
	int32_t TotalNetBandwidth;  // Offset: 48 Size: 4
	int32_t BadPingThreshold;  // Offset: 52 Size: 4
	char bIsStandbyCheckingEnabled : 1;  // Offset: 56 Size: 1
	char pad_56_1 : 7;  // Offset: 56 Size: 1
	char pad_57[4];  // Offset: 57 Size: 4
	float StandbyRxCheatTime;  // Offset: 60 Size: 4
	float StandbyTxCheatTime;  // Offset: 64 Size: 4
	float PercentMissingForRxStandby;  // Offset: 68 Size: 4
	float PercentMissingForTxStandby;  // Offset: 72 Size: 4
	float PercentForBadPing;  // Offset: 76 Size: 4
	float JoinInProgressStandbyWaitTime;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 


//Class EngineSettings.GameSessionSettings Size 56
// Inherited 40 bytes 
class UGameSessionSettings : public UObject
{

 public: 
	int32_t MaxSpectators;  // Offset: 40 Size: 4
	int32_t MaxPlayers;  // Offset: 44 Size: 4
	char bRequiresPushToTalk : 1;  // Offset: 48 Size: 1
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	char pad_49[8];  // Offset: 49 Size: 8



 // Functions 
 public:
}; 
 
 


//Class EngineSettings.GeneralEngineSettings Size 40
// Inherited 40 bytes 
class UGeneralEngineSettings : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


