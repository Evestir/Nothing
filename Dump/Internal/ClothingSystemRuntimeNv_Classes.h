#pragma once 
#include <ClothingSystemRuntimeNv_Structs.h>
 
 
 
//Class ClothingSystemRuntimeNv.ClothConfigNv Size 320
// Inherited 40 bytes 
class UClothConfigNv : public UClothConfigCommon
{

 public: 
	enum class EClothingWindMethodNv ClothingWindMethod;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	struct FClothConstraintSetupNv VerticalConstraint;  // Offset: 44 Size: 16
	struct FClothConstraintSetupNv HorizontalConstraint;  // Offset: 60 Size: 16
	struct FClothConstraintSetupNv BendConstraint;  // Offset: 76 Size: 16
	struct FClothConstraintSetupNv ShearConstraint;  // Offset: 92 Size: 16
	float SelfCollisionRadius;  // Offset: 108 Size: 4
	float SelfCollisionStiffness;  // Offset: 112 Size: 4
	float SelfCollisionCullScale;  // Offset: 116 Size: 4
	struct FVector Damping;  // Offset: 120 Size: 12
	float Friction;  // Offset: 132 Size: 4
	float WindDragCoefficient;  // Offset: 136 Size: 4
	float WindLiftCoefficient;  // Offset: 140 Size: 4
	struct FVector LinearDrag;  // Offset: 144 Size: 12
	struct FVector AngularDrag;  // Offset: 156 Size: 12
	struct FVector LinearInertiaScale;  // Offset: 168 Size: 12
	struct FVector AngularInertiaScale;  // Offset: 180 Size: 12
	struct FVector CentrifugalInertiaScale;  // Offset: 192 Size: 12
	float SolverFrequency;  // Offset: 204 Size: 4
	float StiffnessFrequency;  // Offset: 208 Size: 4
	float GravityScale;  // Offset: 212 Size: 4
	struct FVector GravityOverride;  // Offset: 216 Size: 12
	char pad_228_1 : 7;  // Offset: 228 Size: 1
	bool bUseGravityOverride : 1;  // Offset: 228 Size: 1
	char pad_229[3];  // Offset: 229 Size: 3
	float TetherStiffness;  // Offset: 232 Size: 4
	float TetherLimit;  // Offset: 236 Size: 4
	float CollisionThickness;  // Offset: 240 Size: 4
	float AnimDriveSpringStiffness;  // Offset: 244 Size: 4
	float AnimDriveDamperStiffness;  // Offset: 248 Size: 4
	enum class EClothingWindMethod_Legacy WindMethod;  // Offset: 252 Size: 1
	char pad_253[3];  // Offset: 253 Size: 3
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // Offset: 256 Size: 16
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // Offset: 272 Size: 16
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // Offset: 288 Size: 16
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // Offset: 304 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeNv.ClothingSimulationFactoryNv Size 40
// Inherited 40 bytes 
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ClothingSystemRuntimeNv.ClothingSimulationInteractorNv Size 160
// Inherited 144 bytes 
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{

 public: 
	char pad_144[16];  // Offset: 144 Size: 16



 // Functions 
 public:
	void SetAnimDriveDamperStiffness(float InStiffness); // Function ClothingSystemRuntimeNv.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
}; 
 
 


//Class ClothingSystemRuntimeNv.ClothPhysicalMeshDataNv_Legacy Size 288
// Inherited 224 bytes 
class UClothPhysicalMeshDataNv_Legacy : public UClothPhysicalMeshDataBase_Legacy
{

 public: 
	struct TArray<float> MaxDistances;  // Offset: 224 Size: 16
	struct TArray<float> BackstopDistances;  // Offset: 240 Size: 16
	struct TArray<float> BackstopRadiuses;  // Offset: 256 Size: 16
	struct TArray<float> AnimDriveMultipliers;  // Offset: 272 Size: 16



 // Functions 
 public:
}; 
 
 


