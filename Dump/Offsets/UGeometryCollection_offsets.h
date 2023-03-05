namespace offsets
{
	namespace UGeometryCollection
	{
			constexpr auto EnableClustering = 0x30; // Size: 1, Type: bool
			constexpr auto ClusterGroupIndex = 0x34; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevel = 0x38; // Size: 4, Type: int32_t
			constexpr auto DamageThreshold = 0x40; // Size: 16, Type: struct TArray<float>
			constexpr auto ClusterConnectionType = 0x50; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto GeometrySource = 0x58; // Size: 16, Type: struct TArray<struct FGeometryCollectionSource>
			constexpr auto Materials = 0x68; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto CollisionType = 0x78; // Size: 1, Type: enum class ECollisionTypeEnum
			constexpr auto ImplicitType = 0x79; // Size: 1, Type: enum class EImplicitTypeEnum
			constexpr auto MinLevelSetResolution = 0x7c; // Size: 4, Type: int32_t
			constexpr auto MaxLevelSetResolution = 0x80; // Size: 4, Type: int32_t
			constexpr auto MinClusterLevelSetResolution = 0x84; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevelSetResolution = 0x88; // Size: 4, Type: int32_t
			constexpr auto CollisionObjectReductionPercentage = 0x8c; // Size: 4, Type: float
			constexpr auto bMassAsDensity = 0x90; // Size: 1, Type: bool
			constexpr auto Mass = 0x94; // Size: 4, Type: float
			constexpr auto MinimumMassClamp = 0x98; // Size: 4, Type: float
			constexpr auto CollisionParticlesFraction = 0x9c; // Size: 4, Type: float
			constexpr auto MaximumCollisionParticles = 0xa0; // Size: 4, Type: int32_t
			constexpr auto SizeSpecificData = 0xa8; // Size: 16, Type: struct TArray<struct FGeometryCollectionSizeSpecificData>
			constexpr auto EnableRemovePiecesOnFracture = 0xb8; // Size: 1, Type: bool
			constexpr auto RemoveOnFractureMaterials = 0xc0; // Size: 16, Type: struct TArray<struct UMaterialInterface*>
			constexpr auto PersistentGuid = 0xd0; // Size: 16, Type: struct FGuid
			constexpr auto StateGuid = 0xe0; // Size: 16, Type: struct FGuid
			constexpr auto BoneSelectedMaterialIndex = 0xf0; // Size: 4, Type: int32_t
	}
} 
