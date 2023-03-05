namespace offsets
{
	namespace AWallAssistSpline
	{
			constexpr auto BeginnerCareWallType = 0x220; // Size: 1, Type: enum class EBCWallType
			constexpr auto ThemeType = 0x221; // Size: 1, Type: enum class EBCWallThemeType
			constexpr auto WallMaterial = 0x228; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto SplineComp = 0x230; // Size: 8, Type: struct USplineComponent*
			constexpr auto MeshCount = 0x238; // Size: 4, Type: int32_t
			constexpr auto bDebugCollision = 0x23c; // Size: 1, Type: bool
			constexpr auto bActorMerge = 0x23d; // Size: 1, Type: bool
			constexpr auto BasePackageName = 0x240; // Size: 16, Type: struct FString
			constexpr auto SplineMesh = 0x270; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto SplineMesh_Collision = 0x298; // Size: 40, Type: struct TSoftObjectPtr<UStaticMesh>
			constexpr auto WallCollisionMaterial = 0x2c0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_ShortCut = 0x2e8; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_Fall_Type_00 = 0x310; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_Fall_Type_01 = 0x338; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_Fall_Type_02 = 0x360; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_Corner_Type_00 = 0x388; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
			constexpr auto Mat_Corner_Type_01 = 0x3b0; // Size: 40, Type: struct TSoftObjectPtr<UMaterialInterface>
	}
} 
