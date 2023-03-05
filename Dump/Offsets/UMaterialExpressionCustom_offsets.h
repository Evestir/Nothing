namespace offsets
{
	namespace UMaterialExpressionCustom
	{
			constexpr auto code = 0x40; // Size: 16, Type: struct FString
			constexpr auto OutputType = 0x50; // Size: 1, Type: enum class ECustomMaterialOutputType
			constexpr auto Description = 0x58; // Size: 16, Type: struct FString
			constexpr auto Inputs = 0x68; // Size: 16, Type: struct TArray<struct FCustomInput>
			constexpr auto AdditionalOutputs = 0x78; // Size: 16, Type: struct TArray<struct FCustomOutput>
			constexpr auto AdditionalDefines = 0x88; // Size: 16, Type: struct TArray<struct FCustomDefine>
			constexpr auto IncludeFilePaths = 0x98; // Size: 16, Type: struct TArray<struct FString>
	}
} 
