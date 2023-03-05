namespace offsets
{
	namespace AScenarioItemCube
	{
			constexpr auto bOnce = 0x2f8; // Size: 1, Type: bool
			constexpr auto OverrideRespawnTime = 0x2fc; // Size: 4, Type: float
			constexpr auto bContainsSpecificItem = 0x300; // Size: 1, Type: bool
			constexpr auto SpecificItem = 0x301; // Size: 1, Type: enum class EItemType
			constexpr auto Identifier = 0x308; // Size: 48, Type: struct FScenarioIdentifier
			constexpr auto Type = 0x338; // Size: 4, Type: enum class EScenarioActorType
			constexpr auto bDefaultActivate = 0x33c; // Size: 1, Type: bool
			constexpr auto InitializeOrder = 0x33d; // Size: 1, Type: int8_t
			constexpr auto ScenarioActorState = 0x33e; // Size: 1, Type: enum class EScenarioActorState
			constexpr auto ItemCubesComponent = 0x340; // Size: 8, Type: struct UScenarioItemCubesComponent*
	}
} 
