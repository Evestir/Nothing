namespace offsets
{
	namespace UScenarioComponent
	{
			constexpr auto PlayerStartContainer = 0xc8; // Size: 80, Type: struct TMap<struct FString, struct APlayerStart*>
			constexpr auto ScenarioActionContainer = 0x118; // Size: 80, Type: struct TMap<struct FString, struct FScenarioGroup>
			constexpr auto RegisterActiveGroup = 0x168; // Size: 48, Type: struct FActiveScenario
			constexpr auto ScenarioSequenceActorList = 0x208; // Size: 16, Type: struct TArray<struct AActor*>
	}
} 
