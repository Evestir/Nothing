#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionData Size 64
class FClothCollisionData
{

 public: 
	struct TArray<struct FClothCollisionPrim_Sphere> Spheres;  // Offset: 0 Size: 16
	struct TArray<struct FClothCollisionPrim_SphereConnection> SphereConnections;  // Offset: 16 Size: 16
	struct TArray<struct FClothCollisionPrim_Convex> Convexes;  // Offset: 32 Size: 16
	struct TArray<struct FClothCollisionPrim_Box> Boxes;  // Offset: 48 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere Size 20
class FClothCollisionPrim_Sphere
{

 public: 
	int32_t BoneIndex;  // Offset: 0 Size: 4
	float Radius;  // Offset: 4 Size: 4
	struct FVector LocalPosition;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection Size 8
class FClothCollisionPrim_SphereConnection
{

 public: 
	int32_t SphereIndices[2];  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Box Size 48
class FClothCollisionPrim_Box
{

 public: 
	struct FVector LocalPosition;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FQuat LocalRotation;  // Offset: 16 Size: 16
	struct FVector HalfExtents;  // Offset: 32 Size: 12
	int32_t BoneIndex;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles Size 4
class FGetNumKinematicParticles
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex Size 40
class FClothCollisionPrim_Convex
{

 public: 
	struct TArray<struct FClothCollisionPrim_ConvexFace> Faces;  // Offset: 0 Size: 16
	struct TArray<struct FVector> SurfacePoints;  // Offset: 16 Size: 16
	int32_t BoneIndex;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths Size 4
class FGetNumCloths
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace Size 32
class FClothCollisionPrim_ConvexFace
{

 public: 
	struct FPlane Plane;  // Offset: 0 Size: 16
	struct TArray<int32_t> Indices;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeInterface.ClothVertBoneData Size 76
class FClothVertBoneData
{

 public: 
	int32_t NumInfluences;  // Offset: 0 Size: 4
	uint16_t BoneIndices[c];  // Offset: 4 Size: 24
	float BoneWeights[c];  // Offset: 28 Size: 48



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride Size 12
class FEnableGravityOverride
{

 public: 
	struct FVector InVector;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor Size 24
class FGetClothingInteractor
{

 public: 
	struct FString ClothingAssetName;  // Offset: 0 Size: 16
	struct UClothingInteractor* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles Size 4
class FGetNumDynamicParticles
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations Size 4
class FGetNumIterations
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps Size 4
class FGetNumSubsteps
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime Size 4
class FGetSimulationTime
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness Size 4
class FSetAnimDriveSpringStiffness
{

 public: 
	float InStiffness;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations Size 4
class FSetNumIterations
{

 public: 
	int32_t NumIterations;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps Size 4
class FSetNumSubsteps
{

 public: 
	int32_t NumSubsteps;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 