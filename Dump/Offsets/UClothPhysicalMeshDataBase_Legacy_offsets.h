namespace offsets
{
	namespace UClothPhysicalMeshDataBase_Legacy
	{
			constexpr auto Vertices = 0x28; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto Normals = 0x38; // Size: 16, Type: struct TArray<struct FVector>
			constexpr auto Indices = 0x48; // Size: 16, Type: struct TArray<uint32_t>
			constexpr auto InverseMasses = 0x58; // Size: 16, Type: struct TArray<float>
			constexpr auto BoneData = 0x68; // Size: 16, Type: struct TArray<struct FClothVertBoneData>
			constexpr auto NumFixedVerts = 0x78; // Size: 4, Type: int32_t
			constexpr auto MaxBoneWeights = 0x7c; // Size: 4, Type: int32_t
			constexpr auto SelfCollisionIndices = 0x80; // Size: 16, Type: struct TArray<uint32_t>
	}
} 
