namespace offsets
{
	namespace UGameMapsSettings
	{
			constexpr auto LocalMapOptions = 0x28; // Size: 16, Type: struct FString
			constexpr auto TransitionMap = 0x38; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto bUseSplitscreen = 0x50; // Size: 1, Type: bool
			constexpr auto TwoPlayerSplitscreenLayout = 0x51; // Size: 1, Type: enum class ETwoPlayerSplitScreenType
			constexpr auto ThreePlayerSplitscreenLayout = 0x52; // Size: 1, Type: enum class EThreePlayerSplitScreenType
			constexpr auto FourPlayerSplitscreenLayout = 0x53; // Size: 1, Type: enum class EFourPlayerSplitScreenType
			constexpr auto bOffsetPlayerGamepadIds = 0x54; // Size: 1, Type: bool
			constexpr auto GameInstanceClass = 0x58; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameDefaultMap = 0x70; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto ServerDefaultMap = 0x88; // Size: 24, Type: struct FSoftObjectPath
			constexpr auto GlobalDefaultGameMode = 0xa0; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GlobalDefaultServerGameMode = 0xb8; // Size: 24, Type: struct FSoftClassPath
			constexpr auto GameModeMapPrefixes = 0xd0; // Size: 16, Type: struct TArray<struct FGameModeName>
			constexpr auto GameModeClassAliases = 0xe0; // Size: 16, Type: struct TArray<struct FGameModeName>
	}
} 
