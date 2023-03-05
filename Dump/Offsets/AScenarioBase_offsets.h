namespace offsets
{
	namespace AScenarioBase
	{
			constexpr auto Identifier = 0x230; // Size: 48, Type: struct FScenarioIdentifier
			constexpr auto Type = 0x260; // Size: 4, Type: enum class EScenarioActorType
			constexpr auto bDefaultActivate = 0x264; // Size: 1, Type: bool
			constexpr auto InitializeOrder = 0x265; // Size: 1, Type: int8_t
			constexpr auto ScenarioActorState = 0x266; // Size: 1, Type: enum class EScenarioActorState
			constexpr auto Controller = 0x268; // Size: 8, Type: struct APlayerController*
	}
} 
