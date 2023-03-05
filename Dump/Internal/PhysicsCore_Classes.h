#pragma once 
#include <PhysicsCore_Structs.h>
 
 
 
//Class PhysicsCore.ChaosPhysicalMaterial Size 72
// Inherited 40 bytes 
class UChaosPhysicalMaterial : public UObject
{

 public: 
	float Friction;  // Offset: 40 Size: 4
	float StaticFriction;  // Offset: 44 Size: 4
	float Restitution;  // Offset: 48 Size: 4
	float LinearEtherDrag;  // Offset: 52 Size: 4
	float AngularEtherDrag;  // Offset: 56 Size: 4
	float SleepingLinearVelocityThreshold;  // Offset: 60 Size: 4
	float SleepingAngularVelocityThreshold;  // Offset: 64 Size: 4
	char pad_68[4];  // Offset: 68 Size: 4



 // Functions 
 public:
}; 
 
 


//Class PhysicsCore.PhysicalMaterial Size 128
// Inherited 40 bytes 
class UPhysicalMaterial : public UObject
{

 public: 
	float Friction;  // Offset: 40 Size: 4
	float StaticFriction;  // Offset: 44 Size: 4
	enum class EFrictionCombineMode FrictionCombineMode;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bOverrideFrictionCombineMode : 1;  // Offset: 49 Size: 1
	char pad_50[2];  // Offset: 50 Size: 2
	float Restitution;  // Offset: 52 Size: 4
	enum class EFrictionCombineMode RestitutionCombineMode;  // Offset: 56 Size: 1
	char pad_57_1 : 7;  // Offset: 57 Size: 1
	bool bOverrideRestitutionCombineMode : 1;  // Offset: 57 Size: 1
	char pad_58[2];  // Offset: 58 Size: 2
	float Density;  // Offset: 60 Size: 4
	float SleepLinearVelocityThreshold;  // Offset: 64 Size: 4
	float SleepAngularVelocityThreshold;  // Offset: 68 Size: 4
	int32_t SleepCounterThreshold;  // Offset: 72 Size: 4
	float RaiseMassToPower;  // Offset: 76 Size: 4
	float DestructibleDamageThresholdScale;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty;  // Offset: 88 Size: 8
	enum class EPhysicalSurface SurfaceType;  // Offset: 96 Size: 1
	char pad_97[31];  // Offset: 97 Size: 31



 // Functions 
 public:
}; 
 
 


//Class PhysicsCore.BodySetupCore Size 72
// Inherited 40 bytes 
class UBodySetupCore : public UObject
{

 public: 
	struct FName BoneName;  // Offset: 40 Size: 8
	enum class EPhysicsType PhysicsType;  // Offset: 48 Size: 1
	enum class ECollisionTraceFlag CollisionTraceFlag;  // Offset: 49 Size: 1
	enum class EBodyCollisionResponse CollisionReponse;  // Offset: 50 Size: 1
	char pad_51[21];  // Offset: 51 Size: 21



 // Functions 
 public:
}; 
 
 


//Class PhysicsCore.PhysicalMaterialPropertyBase Size 40
// Inherited 40 bytes 
class UPhysicalMaterialPropertyBase : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class PhysicsCore.PhysicsSettingsCore Size 224
// Inherited 56 bytes 
class UPhysicsSettingsCore : public UDeveloperSettings
{

 public: 
	float DefaultGravityZ;  // Offset: 56 Size: 4
	float DefaultTerminalVelocity;  // Offset: 60 Size: 4
	float DefaultFluidFriction;  // Offset: 64 Size: 4
	int32_t SimulateScratchMemorySize;  // Offset: 68 Size: 4
	int32_t RagdollAggregateThreshold;  // Offset: 72 Size: 4
	float TriangleMeshTriangleMinAreaThreshold;  // Offset: 76 Size: 4
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bEnableShapeSharing : 1;  // Offset: 80 Size: 1
	char pad_81_1 : 7;  // Offset: 81 Size: 1
	bool bEnablePCM : 1;  // Offset: 81 Size: 1
	char pad_82_1 : 7;  // Offset: 82 Size: 1
	bool bEnableStabilization : 1;  // Offset: 82 Size: 1
	char pad_83_1 : 7;  // Offset: 83 Size: 1
	bool bWarnMissingLocks : 1;  // Offset: 83 Size: 1
	char pad_84_1 : 7;  // Offset: 84 Size: 1
	bool bEnable2DPhysics : 1;  // Offset: 84 Size: 1
	char pad_85_1 : 7;  // Offset: 85 Size: 1
	bool bDefaultHasComplexCollision : 1;  // Offset: 85 Size: 1
	char pad_86[2];  // Offset: 86 Size: 2
	float BounceThresholdVelocity;  // Offset: 88 Size: 4
	enum class EFrictionCombineMode FrictionCombineMode;  // Offset: 92 Size: 1
	enum class EFrictionCombineMode RestitutionCombineMode;  // Offset: 93 Size: 1
	char pad_94[2];  // Offset: 94 Size: 2
	float MaxAngularVelocity;  // Offset: 96 Size: 4
	float MaxDepenetrationVelocity;  // Offset: 100 Size: 4
	float ContactOffsetMultiplier;  // Offset: 104 Size: 4
	float MinContactOffset;  // Offset: 108 Size: 4
	float MaxContactOffset;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bSimulateSkeletalMeshOnDedicatedServer : 1;  // Offset: 116 Size: 1
	enum class ECollisionTraceFlag DefaultShapeComplexity;  // Offset: 117 Size: 1
	char pad_118[2];  // Offset: 118 Size: 2
	struct FChaosSolverConfiguration SolverOptions;  // Offset: 120 Size: 104



 // Functions 
 public:
}; 
 
 


