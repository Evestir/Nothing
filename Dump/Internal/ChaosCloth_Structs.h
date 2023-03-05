#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function ChaosCloth.ChaosClothingInteractor.SetCollision Size 16
class FSetCollision
{

 public: 
	float CollisionThickness;  // Offset: 0 Size: 4
	float FrictionCoefficient;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bUseCCD : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3
	float SelfCollisionThickness;  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosCloth.ChaosClothWeightedValue Size 8
class FChaosClothWeightedValue
{

 public: 
	float Low;  // Offset: 0 Size: 4
	float High;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.ResetAndTeleport Size 2
class FResetAndTeleport
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bReset : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bTeleport : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetAerodynamics Size 20
class FSetAerodynamics
{

 public: 
	float DragCoefficient;  // Offset: 0 Size: 4
	float LiftCoefficient;  // Offset: 4 Size: 4
	struct FVector WindVelocity;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetAnimDrive Size 16
class FSetAnimDrive
{

 public: 
	struct FVector2D AnimDriveStiffness;  // Offset: 0 Size: 8
	struct FVector2D AnimDriveDamping;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetDamping Size 4
class FSetDamping
{

 public: 
	float DampingCoefficient;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetAnimDriveLinear Size 4
class FSetAnimDriveLinear
{

 public: 
	float AnimDriveStiffness;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetGravity Size 20
class FSetGravity
{

 public: 
	float GravityScale;  // Offset: 0 Size: 4
	char pad_4_1 : 7;  // Offset: 4 Size: 1
	bool bIsGravityOverridden : 1;  // Offset: 4 Size: 1
	char pad_5[3];  // Offset: 5 Size: 3
	struct FVector GravityOverride;  // Offset: 8 Size: 12



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachment Size 8
class FSetLongRangeAttachment
{

 public: 
	struct FVector2D TetherStiffness;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetLongRangeAttachmentLinear Size 4
class FSetLongRangeAttachmentLinear
{

 public: 
	float TetherStiffness;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetMaterialLinear Size 12
class FSetMaterialLinear
{

 public: 
	float EdgeStiffness;  // Offset: 0 Size: 4
	float BendingStiffness;  // Offset: 4 Size: 4
	float AreaStiffness;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosCloth.ChaosClothingInteractor.SetVelocityScale Size 20
class FSetVelocityScale
{

 public: 
	struct FVector LinearVelocityScale;  // Offset: 0 Size: 12
	float AngularVelocityScale;  // Offset: 12 Size: 4
	float FictitiousAngularScale;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 