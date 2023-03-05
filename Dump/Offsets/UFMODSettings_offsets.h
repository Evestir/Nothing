namespace offsets
{
	namespace UFMODSettings
	{
			constexpr auto bLoadAllBanks = 0x28; // Size: 1, Type: bool
			constexpr auto bLoadAllSampleData = 0x29; // Size: 1, Type: bool
			constexpr auto bEnableLiveUpdate = 0x2a; // Size: 1, Type: bool
			constexpr auto bEnableEditorLiveUpdate = 0x2b; // Size: 1, Type: bool
			constexpr auto BankOutputDirectory = 0x30; // Size: 16, Type: struct FDirectoryPath
			constexpr auto OutputFormat = 0x40; // Size: 1, Type: enum class EFMODSpeakerMode
			constexpr auto OutputType = 0x41; // Size: 1, Type: enum class EFMODOutput
			constexpr auto Locales = 0x48; // Size: 16, Type: struct TArray<struct FFMODProjectLocale>
			constexpr auto bVol0Virtual = 0x58; // Size: 1, Type: bool
			constexpr auto Vol0VirtualLevel = 0x5c; // Size: 4, Type: float
			constexpr auto SampleRate = 0x60; // Size: 4, Type: int32_t
			constexpr auto bMatchHardwareSampleRate = 0x64; // Size: 1, Type: bool
			constexpr auto RealChannelCount = 0x68; // Size: 4, Type: int32_t
			constexpr auto TotalChannelCount = 0x6c; // Size: 4, Type: int32_t
			constexpr auto DSPBufferLength = 0x70; // Size: 4, Type: int32_t
			constexpr auto DSPBufferCount = 0x74; // Size: 4, Type: int32_t
			constexpr auto FileBufferSize = 0x78; // Size: 4, Type: int32_t
			constexpr auto StudioUpdatePeriod = 0x7c; // Size: 4, Type: int32_t
			constexpr auto InitialOutputDriverName = 0x80; // Size: 16, Type: struct FString
			constexpr auto bLockAllBuses = 0x90; // Size: 1, Type: bool
			constexpr auto MemoryPoolSizes = 0x94; // Size: 20, Type: struct FCustomPoolSizes
			constexpr auto LiveUpdatePort = 0xa8; // Size: 4, Type: int32_t
			constexpr auto EditorLiveUpdatePort = 0xac; // Size: 4, Type: int32_t
			constexpr auto ReloadBanksDelay = 0xb0; // Size: 4, Type: int32_t
			constexpr auto bEnableAPIErrorLogging = 0xb4; // Size: 1, Type: bool
			constexpr auto bEnableMemoryTracking = 0xb5; // Size: 1, Type: bool
			constexpr auto PluginFiles = 0xb8; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto ContentBrowserPrefix = 0xc8; // Size: 16, Type: struct FString
			constexpr auto ForcePlatformName = 0xd8; // Size: 16, Type: struct FString
			constexpr auto MasterBankName = 0xe8; // Size: 16, Type: struct FString
			constexpr auto SkipLoadBankName = 0xf8; // Size: 16, Type: struct FString
			constexpr auto StudioBankKey = 0x108; // Size: 16, Type: struct FString
			constexpr auto WavWriterPath = 0x118; // Size: 16, Type: struct FString
			constexpr auto LoggingLevel = 0x128; // Size: 1, Type: enum class EFMODLogging
			constexpr auto OcclusionParameter = 0x130; // Size: 16, Type: struct FString
			constexpr auto AmbientVolumeParameter = 0x140; // Size: 16, Type: struct FString
			constexpr auto AmbientLPFParameter = 0x150; // Size: 16, Type: struct FString
			constexpr auto Platforms = 0x160; // Size: 80, Type: struct TMap<enum class EFMODPlatforms, struct FFMODPlatformSettings>
	}
} 
