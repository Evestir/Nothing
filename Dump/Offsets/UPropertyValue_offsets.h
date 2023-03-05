namespace offsets
{
	namespace UPropertyValue
	{
			constexpr auto Properties = 0x88; // Size: 16, Type: struct TArray<struct TFieldPath<FNone>>
			constexpr auto PropertyIndices = 0x98; // Size: 16, Type: struct TArray<int32_t>
			constexpr auto CapturedPropSegments = 0xa8; // Size: 16, Type: struct TArray<struct FCapturedPropSegment>
			constexpr auto FullDisplayString = 0xb8; // Size: 16, Type: struct FString
			constexpr auto PropertySetterName = 0xc8; // Size: 8, Type: struct FName
			constexpr auto PropertySetterParameterDefaults = 0xd0; // Size: 80, Type: struct TMap<struct FString, struct FString>
			constexpr auto bHasRecordedData = 0x120; // Size: 1, Type: bool
			constexpr auto LeafPropertyClass = 0x128; // Size: 8, Type: UObject*
			constexpr auto ValueBytes = 0x138; // Size: 16, Type: struct TArray<char>
			constexpr auto PropCategory = 0x148; // Size: 1, Type: enum class EPropertyValueCategory
	}
} 
