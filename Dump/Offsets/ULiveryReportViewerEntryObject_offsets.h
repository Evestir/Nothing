namespace offsets
{
	namespace ULiveryReportViewerEntryObject
	{
			constexpr auto ReportListType = 0x28; // Size: 1, Type: enum class ELiveryReportList
			constexpr auto ItemIndex = 0x2c; // Size: 4, Type: int32_t
			constexpr auto liveryId = 0x30; // Size: 16, Type: struct FString
			constexpr auto LiveryUnique = 0x40; // Size: 16, Type: struct FString
			constexpr auto LiveryDesign = 0x50; // Size: 64, Type: struct FLiveryDesignDesc
			constexpr auto SVGFilePathList = 0x90; // Size: 16, Type: struct TArray<struct FString>
			constexpr auto TransformList = 0xa0; // Size: 16, Type: struct TArray<struct FLiveryWrappingTransform>
	}
} 
