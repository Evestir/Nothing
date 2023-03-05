namespace offsets
{
	namespace UDatasmithVREDSceneImportData
	{
			constexpr auto bMergeNodes = 0x48; // Size: 1, Type: bool
			constexpr auto bOptimizeDuplicatedNodes = 0x49; // Size: 1, Type: bool
			constexpr auto bImportMats = 0x4a; // Size: 1, Type: bool
			constexpr auto MatsPath = 0x50; // Size: 16, Type: struct FString
			constexpr auto bImportVar = 0x60; // Size: 1, Type: bool
			constexpr auto bCleanVar = 0x61; // Size: 1, Type: bool
			constexpr auto VarPath = 0x68; // Size: 16, Type: struct FString
			constexpr auto bImportLightInfo = 0x78; // Size: 1, Type: bool
			constexpr auto LightInfoPath = 0x80; // Size: 16, Type: struct FString
			constexpr auto bImportClipInfo = 0x90; // Size: 1, Type: bool
			constexpr auto ClipInfoPath = 0x98; // Size: 16, Type: struct FString
	}
} 
