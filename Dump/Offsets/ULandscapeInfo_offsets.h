namespace offsets
{
	namespace ULandscapeInfo
	{
			constexpr auto LandscapeActor = 0x28; // Size: 28, Type: 
			constexpr auto LandscapeGuid = 0x44; // Size: 16, Type: struct FGuid
			constexpr auto ComponentSizeQuads = 0x54; // Size: 4, Type: int32_t
			constexpr auto SubsectionSizeQuads = 0x58; // Size: 4, Type: int32_t
			constexpr auto ComponentNumSubsections = 0x5c; // Size: 4, Type: int32_t
			constexpr auto DrawScale = 0x60; // Size: 12, Type: struct FVector
			constexpr auto Proxies = 0x110; // Size: 16, Type: struct TArray<struct ALandscapeStreamingProxy*>
	}
} 
