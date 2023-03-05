namespace offsets
{
	namespace UMockDataMeshTrackerComponent
	{
			constexpr auto OnMeshTrackerUpdated = 0x208; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto ScanWorld = 0x218; // Size: 1, Type: bool
			constexpr auto RequestNormals = 0x219; // Size: 1, Type: bool
			constexpr auto RequestVertexConfidence = 0x21a; // Size: 1, Type: bool
			constexpr auto VertexColorMode = 0x21b; // Size: 1, Type: enum class EMeshTrackerVertexColorMode
			constexpr auto BlockVertexColors = 0x220; // Size: 16, Type: struct TArray<struct FColor>
			constexpr auto VertexColorFromConfidenceZero = 0x230; // Size: 16, Type: struct FLinearColor
			constexpr auto VertexColorFromConfidenceOne = 0x240; // Size: 16, Type: struct FLinearColor
			constexpr auto UpdateInterval = 0x250; // Size: 4, Type: float
			constexpr auto MRMesh = 0x258; // Size: 8, Type: struct UMRMeshComponent*
	}
} 
