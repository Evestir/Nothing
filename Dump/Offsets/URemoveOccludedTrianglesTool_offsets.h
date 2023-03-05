namespace offsets
{
	namespace URemoveOccludedTrianglesTool
	{
			constexpr auto BasicProperties = 0x90; // Size: 8, Type: struct URemoveOccludedTrianglesToolProperties*
			constexpr auto AdvancedProperties = 0x98; // Size: 8, Type: struct URemoveOccludedTrianglesAdvancedProperties*
			constexpr auto Previews = 0xa0; // Size: 16, Type: struct TArray<struct UMeshOpPreviewWithBackgroundCompute*>
			constexpr auto PreviewCopies = 0xb0; // Size: 16, Type: struct TArray<struct UPreviewMesh*>
	}
} 
