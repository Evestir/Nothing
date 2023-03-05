namespace offsets
{
	namespace UAssetExportTask
	{
			constexpr auto Object = 0x28; // Size: 8, Type: struct UObject*
			constexpr auto Exporter = 0x30; // Size: 8, Type: struct UExporter*
			constexpr auto Filename = 0x38; // Size: 16, Type: struct FString
			constexpr auto bSelected = 0x48; // Size: 1, Type: bool
			constexpr auto bReplaceIdentical = 0x49; // Size: 1, Type: bool
			constexpr auto bPrompt = 0x4a; // Size: 1, Type: bool
			constexpr auto bAutomated = 0x4b; // Size: 1, Type: bool
			constexpr auto bUseFileArchive = 0x4c; // Size: 1, Type: bool
			constexpr auto bWriteEmptyFiles = 0x4d; // Size: 1, Type: bool
			constexpr auto IgnoreObjectList = 0x50; // Size: 16, Type: struct TArray<struct UObject*>
			constexpr auto Options = 0x60; // Size: 8, Type: struct UObject*
			constexpr auto errors = 0x68; // Size: 16, Type: struct TArray<struct FString>
	}
} 
