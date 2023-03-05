namespace offsets
{
	namespace AKdGameState
	{
			constexpr auto Custom_ServerWorldTimeSecondsDelta = 0x278; // Size: 4, Type: float
			constexpr auto ModeName = 0x340; // Size: 16, Type: struct FString
			constexpr auto TrackName = 0x350; // Size: 16, Type: struct FString
			constexpr auto OptionsString = 0x360; // Size: 16, Type: struct FString
			constexpr auto DiffServerTime = 0x370; // Size: 4, Type: float
			constexpr auto GameStateComponents = 0x378; // Size: 16, Type: struct TArray<struct FRegisterComponent>
			constexpr auto PreCacheAssetContainer = 0x388; // Size: 80, Type: struct TSet<struct UObject*>
			constexpr auto OnBeginGameDelegate = 0x3f0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnEndGameDelegate = 0x400; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto SnappingServerWorldTimeSecondsDelta = 0x41c; // Size: 4, Type: float
	}
} 
