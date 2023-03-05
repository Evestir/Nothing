#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap Size 16
class FPointWeightMap
{

 public: 
	struct TArray<float> Values;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy Size 212
class FClothConfig_Legacy
{

 public: 
	enum class EClothingWindMethod_Legacy WindMethod;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FClothConstraintSetup_Legacy VerticalConstraintConfig;  // Offset: 4 Size: 16
	struct FClothConstraintSetup_Legacy HorizontalConstraintConfig;  // Offset: 20 Size: 16
	struct FClothConstraintSetup_Legacy BendConstraintConfig;  // Offset: 36 Size: 16
	struct FClothConstraintSetup_Legacy ShearConstraintConfig;  // Offset: 52 Size: 16
	float SelfCollisionRadius;  // Offset: 68 Size: 4
	float SelfCollisionStiffness;  // Offset: 72 Size: 4
	float SelfCollisionCullScale;  // Offset: 76 Size: 4
	struct FVector Damping;  // Offset: 80 Size: 12
	float Friction;  // Offset: 92 Size: 4
	float WindDragCoefficient;  // Offset: 96 Size: 4
	float WindLiftCoefficient;  // Offset: 100 Size: 4
	struct FVector LinearDrag;  // Offset: 104 Size: 12
	struct FVector AngularDrag;  // Offset: 116 Size: 12
	struct FVector LinearInertiaScale;  // Offset: 128 Size: 12
	struct FVector AngularInertiaScale;  // Offset: 140 Size: 12
	struct FVector CentrifugalInertiaScale;  // Offset: 152 Size: 12
	float SolverFrequency;  // Offset: 164 Size: 4
	float StiffnessFrequency;  // Offset: 168 Size: 4
	float GravityScale;  // Offset: 172 Size: 4
	struct FVector GravityOverride;  // Offset: 176 Size: 12
	char pad_188_1 : 7;  // Offset: 188 Size: 1
	bool bUseGravityOverride : 1;  // Offset: 188 Size: 1
	char pad_189[3];  // Offset: 189 Size: 3
	float TetherStiffness;  // Offset: 192 Size: 4
	float TetherLimit;  // Offset: 196 Size: 4
	float CollisionThickness;  // Offset: 200 Size: 4
	float AnimDriveSpringStiffness;  // Offset: 204 Size: 4
	float AnimDriveDamperStiffness;  // Offset: 208 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy Size 16
class FClothConstraintSetup_Legacy
{

 public: 
	float Stiffness;  // Offset: 0 Size: 4
	float StiffnessMultiplier;  // Offset: 4 Size: 4
	float StretchLimit;  // Offset: 8 Size: 4
	float CompressionLimit;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData Size 248
class FClothPhysicalMeshData
{

 public: 
	struct TArray<struct FVector> Vertices;  // Offset: 0 Size: 16
	struct TArray<struct FVector> Normals;  // Offset: 16 Size: 16
	struct TArray<uint32_t> Indices;  // Offset: 32 Size: 16
	struct TMap<uint32_t, struct FPointWeightMap> WeightMaps;  // Offset: 48 Size: 80
	struct TArray<float> InverseMasses;  // Offset: 128 Size: 16
	struct TArray<struct FClothVertBoneData> BoneData;  // Offset: 144 Size: 16
	int32_t MaxBoneWeights;  // Offset: 160 Size: 4
	int32_t NumFixedVerts;  // Offset: 164 Size: 4
	struct TArray<uint32_t> SelfCollisionIndices;  // Offset: 168 Size: 16
	struct TArray<float> MaxDistances;  // Offset: 184 Size: 16
	struct TArray<float> BackstopDistances;  // Offset: 200 Size: 16
	struct TArray<float> BackstopRadiuses;  // Offset: 216 Size: 16
	struct TArray<float> AnimDriveMultipliers;  // Offset: 232 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon Size 352
class FClothLODDataCommon
{

 public: 
	struct FClothPhysicalMeshData PhysicalMeshData;  // Offset: 0 Size: 248
	struct FClothCollisionData CollisionData;  // Offset: 248 Size: 64
	char pad_312_1 : 7;  // Offset: 312 Size: 1
	bool bUseMultipleInfluences : 1;  // Offset: 312 Size: 1
	char pad_313[3];  // Offset: 313 Size: 3
	float SkinningKernelRadius;  // Offset: 316 Size: 4
	char pad_320[32];  // Offset: 320 Size: 32



 // Functions 
 public:
}; 
 
 //ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy Size 48
class FClothParameterMask_Legacy
{

 public: 
	struct FName MaskName;  // Offset: 0 Size: 8
	enum class EWeightMapTargetCommon CurrentTarget;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float MaxValue;  // Offset: 12 Size: 4
	float MinValue;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct TArray<float> Values;  // Offset: 24 Size: 16
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bEnabled : 1;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7



 // Functions 
 public:
}; 
 
 