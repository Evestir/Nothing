namespace offsets
{
	namespace UMaterialExpressionNoise
	{
			constexpr auto position = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto FilterWidth = 0x54; // Size: 20, Type: struct FExpressionInput
			constexpr auto Scale = 0x68; // Size: 4, Type: float
			constexpr auto Quality = 0x6c; // Size: 4, Type: int32_t
			constexpr auto NoiseFunction = 0x70; // Size: 1, Type: enum class ENoiseFunction
			constexpr auto bTurbulence = 0x74; // Size: 1, Type: char
			constexpr auto Levels = 0x78; // Size: 4, Type: int32_t
			constexpr auto OutputMin = 0x7c; // Size: 4, Type: float
			constexpr auto OutputMax = 0x80; // Size: 4, Type: float
			constexpr auto LevelScale = 0x84; // Size: 4, Type: float
			constexpr auto bTiling = 0x88; // Size: 1, Type: char
			constexpr auto RepeatSize = 0x8c; // Size: 4, Type: uint32_t
	}
} 
