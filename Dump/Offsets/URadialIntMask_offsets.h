namespace offsets
{
	namespace URadialIntMask
	{
			constexpr auto Radius = 0xb0; // Size: 4, Type: float
			constexpr auto position = 0xb4; // Size: 12, Type: struct FVector
			constexpr auto InteriorValue = 0xc0; // Size: 4, Type: int32_t
			constexpr auto ExteriorValue = 0xc4; // Size: 4, Type: int32_t
			constexpr auto SetMaskCondition = 0xc8; // Size: 1, Type: enum class ESetMaskConditionType
	}
} 
