#pragma once 
#include <ClothingSystemRuntimeCommon_Structs.h>
 
 
 
//Class ClothingSystemRuntimeCommon.ClothingAssetCommon Size 240
// Inherited 72 bytes 
class UClothingAssetCommon : public UClothingAssetBase
{

 public: 
	struct UPhysicsAsset* PhysicsAsset;  // Offset: 72 Size: 8
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs;  // Offset: 80 Size: 80
	struct TArray<struct FClothLODDataCommon> LODData;  // Offset: 160 Size: 16
	struct TArray<int32_t> LodMap;  // Offset: 176 Size: 16
	struct TArray<struct FName> UsedBoneNames;  // Offset: 192 Size: 16
	struct TArray<int32_t> UsedBoneIndices;  // Offset: 208 Size: 16
	int32_t ReferenceBoneIndex;  // Offset: 224 Size: 4
	char pad_228[4];  // Offset: 228 Size: 4
	struct UClothingAssetCustomData* CustomData;  // Offset: 232 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeCommon.ClothConfigCommon Size 40
// Inherited 40 bytes 
class UClothConfigCommon : public UClothConfigBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon Size 40
// Inherited 40 bytes 
class UClothSharedConfigCommon : public UClothConfigCommon
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeCommon.ClothingAssetCustomData Size 40
// Inherited 40 bytes 
class UClothingAssetCustomData : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy Size 392
// Inherited 40 bytes 
class UClothLODDataCommon_Legacy : public UObject
{

 public: 
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;  // Offset: 40 Size: 8
	struct FClothPhysicalMeshData ClothPhysicalMeshData;  // Offset: 48 Size: 248
	struct FClothCollisionData CollisionData;  // Offset: 296 Size: 64
	char pad_360[32];  // Offset: 360 Size: 32



 // Functions 
 public:
}; 
 
 


