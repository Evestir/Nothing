namespace offsets
{
	namespace UARTrackedGeometry
	{
			constexpr auto UniqueId = 0x28; // Size: 16, Type: struct FGuid
			constexpr auto LocalToTrackingTransform = 0x40; // Size: 48, Type: struct FTransform
			constexpr auto LocalToAlignedTrackingTransform = 0x70; // Size: 48, Type: struct FTransform
			constexpr auto TrackingState = 0xa0; // Size: 1, Type: enum class EARTrackingState
			constexpr auto UnderlyingMesh = 0xb0; // Size: 8, Type: struct UMRMeshComponent*
			constexpr auto ObjectClassification = 0xb8; // Size: 1, Type: enum class EARObjectClassification
			constexpr auto SpatialMeshUsageFlags = 0xb9; // Size: 1, Type: enum class EARSpatialMeshUsageFlags
			constexpr auto LastUpdateFrameNumber = 0xd0; // Size: 4, Type: int32_t
			constexpr auto DebugName = 0xe0; // Size: 8, Type: struct FName
	}
} 
