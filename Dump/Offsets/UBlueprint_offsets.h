namespace offsets
{
	namespace UBlueprint
	{
			constexpr auto ParentClass = 0x50; // Size: 8, Type: UObject*
			constexpr auto BlueprintType = 0x58; // Size: 1, Type: enum class EBlueprintType
			constexpr auto bRecompileOnLoad = 0x59; // Size: 1, Type: char
			constexpr auto bHasBeenRegenerated = 0x59; // Size: 1, Type: char
			constexpr auto bIsRegeneratingOnLoad = 0x59; // Size: 1, Type: char
			constexpr auto BlueprintSystemVersion = 0x5c; // Size: 4, Type: int32_t
			constexpr auto SimpleConstructionScript = 0x60; // Size: 8, Type: struct USimpleConstructionScript*
			constexpr auto ComponentTemplates = 0x68; // Size: 16, Type: struct TArray<struct UActorComponent*>
			constexpr auto Timelines = 0x78; // Size: 16, Type: struct TArray<struct UTimelineTemplate*>
			constexpr auto ComponentClassOverrides = 0x88; // Size: 16, Type: struct TArray<struct FBPComponentClassOverride>
			constexpr auto InheritableComponentHandler = 0x98; // Size: 8, Type: struct UInheritableComponentHandler*
	}
} 
