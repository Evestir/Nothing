namespace offsets
{
	namespace UExporter
	{
			constexpr auto SupportedClass = 0x28; // Size: 8, Type: UObject*
			constexpr auto ExportRootScope = 0x30; // Size: 8, Type: struct UObject*
			constexpr auto FormatExtension = 0x38; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto FormatDescription = 0x48; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto PreferredFormatIndex = 0x58; // Size: 4, Type: int32_t
			constexpr auto TextIndent = 0x5c; // Size: 4, Type: int32_t
			constexpr auto bText = 0x60; // Size: 1, Type: char
			constexpr auto bSelectedOnly = 0x60; // Size: 1, Type: char
			constexpr auto bForceFileOperations = 0x60; // Size: 1, Type: char
			constexpr auto ExportTask = 0x68; // Size: 8, Type: struct UAssetExportTask*
	}
} 
