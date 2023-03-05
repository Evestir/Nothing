#pragma once 
#include <ChaosCloth_Structs.h>
 
 
 
//Class ChaosCloth.ChaosClothConfig Size 200
// Inherited 40 bytes 
class UChaosClothConfig : public UClothConfigCommon
{

 public: 
	enum class EClothMassMode MassMode;  // Offset: 40 Size: 1
	char pad_41[3];  // Offset: 41 Size: 3
	float UniformMass;  // Offset: 44 Size: 4
	float TotalMass;  // Offset: 48 Size: 4
	float Density;  // Offset: 52 Size: 4
	float MinPerParticleMass;  // Offset: 56 Size: 4
	float EdgeStiffness;  // Offset: 60 Size: 4
	float BendingStiffness;  // Offset: 64 Size: 4
	char pad_68_1 : 7;  // Offset: 68 Size: 1
	bool bUseBendingElements : 1;  // Offset: 68 Size: 1
	char pad_69[3];  // Offset: 69 Size: 3
	float AreaStiffness;  // Offset: 72 Size: 4
	float VolumeStiffness;  // Offset: 76 Size: 4
	struct FChaosClothWeightedValue TetherStiffness;  // Offset: 80 Size: 8
	float LimitScale;  // Offset: 88 Size: 4
	char pad_92_1 : 7;  // Offset: 92 Size: 1
	bool bUseGeodesicDistance : 1;  // Offset: 92 Size: 1
	char pad_93[3];  // Offset: 93 Size: 3
	float ShapeTargetStiffness;  // Offset: 96 Size: 4
	float CollisionThickness;  // Offset: 100 Size: 4
	float FrictionCoefficient;  // Offset: 104 Size: 4
	char pad_108_1 : 7;  // Offset: 108 Size: 1
	bool bUseCCD : 1;  // Offset: 108 Size: 1
	char pad_109_1 : 7;  // Offset: 109 Size: 1
	bool bUseSelfCollisions : 1;  // Offset: 109 Size: 1
	char pad_110[2];  // Offset: 110 Size: 2
	float SelfCollisionThickness;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bUseLegacyBackstop : 1;  // Offset: 116 Size: 1
	char pad_117[3];  // Offset: 117 Size: 3
	float DampingCoefficient;  // Offset: 120 Size: 4
	char pad_124_1 : 7;  // Offset: 124 Size: 1
	bool bUsePointBasedWindModel : 1;  // Offset: 124 Size: 1
	char pad_125[3];  // Offset: 125 Size: 3
	float DragCoefficient;  // Offset: 128 Size: 4
	float LiftCoefficient;  // Offset: 132 Size: 4
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bUseGravityOverride : 1;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	float GravityScale;  // Offset: 140 Size: 4
	struct FVector Gravity;  // Offset: 144 Size: 12
	struct FChaosClothWeightedValue AnimDriveStiffness;  // Offset: 156 Size: 8
	struct FChaosClothWeightedValue AnimDriveDamping;  // Offset: 164 Size: 8
	struct FVector LinearVelocityScale;  // Offset: 172 Size: 12
	float AngularVelocityScale;  // Offset: 184 Size: 4
	float FictitiousAngularScale;  // Offset: 188 Size: 4
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool bUseTetrahedralConstraints : 1;  // Offset: 192 Size: 1
	char pad_193_1 : 7;  // Offset: 193 Size: 1
	bool bUseThinShellVolumeConstraints : 1;  // Offset: 193 Size: 1
	char pad_194_1 : 7;  // Offset: 194 Size: 1
	bool bUseContinuousCollisionDetection : 1;  // Offset: 194 Size: 1
	char pad_195[5];  // Offset: 195 Size: 5



 // Functions 
 public:
}; 
 
 


//Class ChaosCloth.ChaosClothingSimulationInteractor Size 160
// Inherited 144 bytes 
class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
{

 public: 
	char pad_144[16];  // Offset: 144 Size: 16



 // Functions 
 public:
}; 
 
 


//Class ChaosCloth.ChaosClothingSimulationFactory Size 40
// Inherited 40 bytes 
class UChaosClothingSimulationFactory : public UClothingSimulationFactory
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ChaosCloth.ChaosClothSharedSimConfig Size 56
// Inherited 40 bytes 
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
{

 public: 
	int32_t IterationCount;  // Offset: 40 Size: 4
	int32_t SubdivisionCount;  // Offset: 44 Size: 4
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bUseLocalSpaceSimulation : 1;  // Offset: 48 Size: 1
	char pad_49_1 : 7;  // Offset: 49 Size: 1
	bool bUseXPBDConstraints : 1;  // Offset: 49 Size: 1
	char pad_50[6];  // Offset: 50 Size: 6



 // Functions 
 public:
}; 
 
 


//Class ChaosCloth.ChaosClothingInteractor Size 64
// Inherited 48 bytes 
class UChaosClothingInteractor : public UClothingInteractor
{

 public: 
	char pad_48[16];  // Offset: 48 Size: 16



 // Functions 
 public:
	void SetVelocityScale(struct FVector LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale); // Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale
	void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear
	void SetLongRangeAttachmentLinear(float TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear
	void SetLongRangeAttachment(struct FVector2D TetherStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment
	void SetGravity(float GravityScale, bool bIsGravityOverridden, struct FVector GravityOverride); // Function ChaosCloth.ChaosClothingInteractor.SetGravity
	void SetDamping(float DampingCoefficient); // Function ChaosCloth.ChaosClothingInteractor.SetDamping
	void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness); // Function ChaosCloth.ChaosClothingInteractor.SetCollision
	void SetAnimDriveLinear(float AnimDriveStiffness); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear
	void SetAnimDrive(struct FVector2D AnimDriveStiffness, struct FVector2D AnimDriveDamping); // Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive
	void SetAerodynamics(float DragCoefficient, float LiftCoefficient, struct FVector WindVelocity); // Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics
	void ResetAndTeleport(bool bReset, bool bTeleport); // Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport
}; 
 
 


