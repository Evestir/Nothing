namespace offsets
{
	namespace UNodeMappingContainer
	{
			constexpr auto SourceItems = 0x28; // Size: 80, Type: struct TMap<struct FName, struct FNodeItem>
			constexpr auto TargetItems = 0x78; // Size: 80, Type: struct TMap<struct FName, struct FNodeItem>
			constexpr auto SourceToTarget = 0xc8; // Size: 80, Type: struct TMap<struct FName, struct FName>
			constexpr auto SourceAsset = 0x118; // Size: 40, Type: struct TSoftObjectPtr<UObject>
			constexpr auto TargetAsset = 0x140; // Size: 40, Type: struct TSoftObjectPtr<UObject>
	}
} 
