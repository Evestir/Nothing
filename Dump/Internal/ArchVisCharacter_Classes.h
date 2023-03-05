#pragma once 
#include <ArchVisCharacter_Structs.h>
 
 
 
//Class ArchVisCharacter.ArchVisCharacter Size 1312
// Inherited 1216 bytes 
class AArchVisCharacter : public ACharacter
{

 public: 
	struct FString LookUpAxisName;  // Offset: 1208 Size: 16
	struct FString LookUpAtRateAxisName;  // Offset: 1224 Size: 16
	struct FString TurnAxisName;  // Offset: 1240 Size: 16
	struct FString TurnAtRateAxisName;  // Offset: 1256 Size: 16
	struct FString MoveForwardAxisName;  // Offset: 1272 Size: 16
	struct FString MoveRightAxisName;  // Offset: 1288 Size: 16
	float MouseSensitivityScale_Pitch;  // Offset: 1304 Size: 4
	float MouseSensitivityScale_Yaw;  // Offset: 1308 Size: 4



 // Functions 
 public:
}; 
 
 


//Class ArchVisCharacter.ArchVisCharMovementComponent Size 2880
// Inherited 2800 bytes 
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{

 public: 
	struct FRotator RotationalAcceleration;  // Offset: 2800 Size: 12
	struct FRotator RotationalDeceleration;  // Offset: 2812 Size: 12
	struct FRotator MaxRotationalVelocity;  // Offset: 2824 Size: 12
	float MinPitch;  // Offset: 2836 Size: 4
	float MaxPitch;  // Offset: 2840 Size: 4
	float WalkingFriction;  // Offset: 2844 Size: 4
	float WalkingSpeed;  // Offset: 2848 Size: 4
	float WalkingAcceleration;  // Offset: 2852 Size: 4
	char pad_2856[24];  // Offset: 2856 Size: 24



 // Functions 
 public:
}; 
 
 


