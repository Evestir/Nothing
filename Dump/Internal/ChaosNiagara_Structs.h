#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct ChaosNiagara.ChaosDestructionEvent Size 68
class FChaosDestructionEvent
{

 public: 
	struct FVector position;  // Offset: 0 Size: 12
	struct FVector Normal;  // Offset: 12 Size: 12
	struct FVector Velocity;  // Offset: 24 Size: 12
	struct FVector AngularVelocity;  // Offset: 36 Size: 12
	float ExtentMin;  // Offset: 48 Size: 4
	float ExtentMax;  // Offset: 52 Size: 4
	int32_t ParticleID;  // Offset: 56 Size: 4
	float Time;  // Offset: 60 Size: 4
	int32_t Type;  // Offset: 64 Size: 4



 // Functions 
 public:
}; 
 
 