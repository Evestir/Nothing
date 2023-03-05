namespace offsets
{
	namespace UBuildPatchManifest
	{
			constexpr auto ManifestFileVersion = 0x28; // Size: 1, Type: char
			constexpr auto bIsFileData = 0x29; // Size: 1, Type: bool
			constexpr auto AppID = 0x2c; // Size: 4, Type: uint32_t
			constexpr auto AppName = 0x30; // Size: 16, Type: struct FString
			constexpr auto BuildVersion = 0x40; // Size: 16, Type: struct FString
			constexpr auto LaunchExe = 0x50; // Size: 16, Type: struct FString
			constexpr auto LaunchCommand = 0x60; // Size: 16, Type: struct FString
			constexpr auto PrereqIds = 0x70; // Size: 80, Type: struct TSet<struct FString>
			constexpr auto PrereqName = 0xc0; // Size: 16, Type: struct FString
			constexpr auto PrereqPath = 0xd0; // Size: 16, Type: struct FString
			constexpr auto PrereqArgs = 0xe0; // Size: 16, Type: struct FString
			constexpr auto FileManifestList = 0xf0; // Size: 16, Type: struct TArray<struct FFileManifestData>
			constexpr auto ChunkList = 0x100; // Size: 16, Type: struct TArray<struct FChunkInfoData>
			constexpr auto CustomFields = 0x110; // Size: 16, Type: struct TArray<struct FCustomFieldData>
	}
} 
