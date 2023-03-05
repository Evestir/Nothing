namespace offsets
{
	namespace UUVProjectionTool
	{
			constexpr auto BasicProperties = 0x90; // Size: 8, Type: struct UUVProjectionToolProperties*
			constexpr auto AdvancedProperties = 0x98; // Size: 8, Type: struct UUVProjectionAdvancedProperties*
			constexpr auto MaterialSettings = 0xa0; // Size: 8, Type: struct UExistingMeshMaterialProperties*
			constexpr auto Previews = 0xa8; // Size: 16, Type: struct TArray<struct UMeshOpPreviewWithBackgroundCompute*>
			constexpr auto CheckerMaterial = 0xb8; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto TransformGizmos = 0xc0; // Size: 16, Type: struct TArray<struct UTransformGizmo*>
			constexpr auto TransformProxies = 0xd0; // Size: 16, Type: struct TArray<struct UTransformProxy*>
	}
} 
