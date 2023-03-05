namespace offsets
{
	namespace UBoxFalloff
	{
			constexpr auto Magnitude = 0xb0; // Size: 4, Type: float
			constexpr auto MinRange = 0xb4; // Size: 4, Type: float
			constexpr auto MaxRange = 0xb8; // Size: 4, Type: float
			constexpr auto Default = 0xbc; // Size: 4, Type: float
			constexpr auto Transform = 0xc0; // Size: 48, Type: struct FTransform
			constexpr auto Falloff = 0xf0; // Size: 1, Type: enum class EFieldFalloffType
	}
} 
