namespace offsets
{
	namespace UMaterialExpressionClamp
	{
			constexpr auto Input = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto Min = 0x54; // Size: 20, Type: struct FExpressionInput
			constexpr auto Max = 0x68; // Size: 20, Type: struct FExpressionInput
			constexpr auto ClampMode = 0x7c; // Size: 1, Type: enum class EClampMode
			constexpr auto MinDefault = 0x80; // Size: 4, Type: float
			constexpr auto MaxDefault = 0x84; // Size: 4, Type: float
	}
} 
