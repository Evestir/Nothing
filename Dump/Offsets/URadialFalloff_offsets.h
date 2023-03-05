namespace offsets
{
	namespace URadialFalloff
	{
			constexpr auto Magnitude = 0xb0; // Size: 4, Type: float
			constexpr auto MinRange = 0xb4; // Size: 4, Type: float
			constexpr auto MaxRange = 0xb8; // Size: 4, Type: float
			constexpr auto Default = 0xbc; // Size: 4, Type: float
			constexpr auto Radius = 0xc0; // Size: 4, Type: float
			constexpr auto position = 0xc4; // Size: 12, Type: struct FVector
			constexpr auto Falloff = 0xd0; // Size: 1, Type: enum class EFieldFalloffType
	}
} 
