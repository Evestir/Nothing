namespace offsets
{
	namespace UMaterialExpressionFunctionInput
	{
			constexpr auto preview = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto InputName = 0x54; // Size: 8, Type: struct FName
			constexpr auto Description = 0x60; // Size: 16, Type: struct FString
			constexpr auto ID = 0x70; // Size: 16, Type: struct FGuid
			constexpr auto InputType = 0x80; // Size: 1, Type: enum class EFunctionInputType
			constexpr auto PreviewValue = 0x90; // Size: 16, Type: struct FVector4
			constexpr auto bUsePreviewValueAsDefault = 0xa0; // Size: 1, Type: char
			constexpr auto SortPriority = 0xa4; // Size: 4, Type: int32_t
			constexpr auto bCompilingFunctionPreview = 0xa8; // Size: 1, Type: char
	}
} 
