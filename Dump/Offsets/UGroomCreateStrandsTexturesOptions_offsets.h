namespace offsets
{
	namespace UGroomCreateStrandsTexturesOptions
	{
			constexpr auto Resolution = 0x28; // Size: 4, Type: int32_t
			constexpr auto TraceType = 0x2c; // Size: 1, Type: enum class EStrandsTexturesTraceType
			constexpr auto TraceDistance = 0x30; // Size: 4, Type: float
			constexpr auto MeshType = 0x34; // Size: 1, Type: enum class EStrandsTexturesMeshType
			constexpr auto StaticMesh = 0x38; // Size: 8, Type: struct UStaticMesh*
			constexpr auto SkeletalMesh = 0x40; // Size: 8, Type: struct USkeletalMesh*
			constexpr auto LODIndex = 0x48; // Size: 4, Type: int32_t
			constexpr auto SectionIndex = 0x4c; // Size: 4, Type: int32_t
			constexpr auto UVChannelIndex = 0x50; // Size: 4, Type: int32_t
			constexpr auto GroupIndex = 0x58; // Size: 16, Type: struct TArray<int32_t>
	}
} 
