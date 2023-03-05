#pragma once 
#include <ClothingSystemRuntimeInterface_Structs.h>
 
 
 
//Class ClothingSystemRuntimeInterface.ClothingInteractor Size 48
// Inherited 40 bytes 
class UClothingInteractor : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothingSimulationFactory Size 40
// Inherited 40 bytes 
class UClothingSimulationFactory : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothConfigBase Size 40
// Inherited 40 bytes 
class UClothConfigBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor Size 144
// Inherited 40 bytes 
class UClothingSimulationInteractor : public UObject
{

 public: 
	struct TMap<struct FName, struct UClothingInteractor*> ClothingInteractors;  // Offset: 40 Size: 80
	char pad_120[24];  // Offset: 120 Size: 24



 // Functions 
 public:
	void SetNumSubsteps(int32_t NumSubsteps); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumSubsteps
	void SetNumIterations(int32_t NumIterations); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetNumIterations
	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	float GetSimulationTime(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetSimulationTime
	int32_t GetNumSubsteps(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumSubsteps
	int32_t GetNumKinematicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumKinematicParticles
	int32_t GetNumIterations(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumIterations
	int32_t GetNumDynamicParticles(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumDynamicParticles
	int32_t GetNumCloths(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetNumCloths
	struct UClothingInteractor* GetClothingInteractor(struct FString ClothingAssetName); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.GetClothingInteractor
	void EnableGravityOverride(struct FVector& InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase Size 40
// Inherited 40 bytes 
class UClothSharedSimConfigBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothingAssetBase Size 72
// Inherited 40 bytes 
class UClothingAssetBase : public UObject
{

 public: 
	struct FString ImportedFilePath;  // Offset: 40 Size: 16
	struct FGuid AssetGuid;  // Offset: 56 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy Size 224
// Inherited 40 bytes 
class UClothPhysicalMeshDataBase_Legacy : public UObject
{

 public: 
	struct TArray<struct FVector> Vertices;  // Offset: 40 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 56 Size: 16
	struct TArray<uint32_t> Indices;  // Offset: 72 Size: 16
	struct TArray<float> InverseMasses;  // Offset: 88 Size: 16
	struct TArray<struct FClothVertBoneData> BoneData;  // Offset: 104 Size: 16
	int32_t NumFixedVerts;  // Offset: 120 Size: 4
	int32_t MaxBoneWeights;  // Offset: 124 Size: 4
	struct TArray<uint32_t> SelfCollisionIndices;  // Offset: 128 Size: 16
	char pad_144[80];  // Offset: 144 Size: 80



 // Functions 
 public:
}; 
 
 


