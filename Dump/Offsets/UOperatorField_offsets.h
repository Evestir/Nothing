namespace offsets
{
	namespace UOperatorField
	{
			constexpr auto Magnitude = 0xb0; // Size: 4, Type: float
			constexpr auto RightField = 0xb8; // Size: 8, Type: struct UFieldNodeBase*
			constexpr auto LeftField = 0xc0; // Size: 8, Type: struct UFieldNodeBase*
			constexpr auto Operation = 0xc8; // Size: 1, Type: enum class EFieldOperationType
	}
} 
