#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct PhysicsCore.BodyInstanceCore Size 24
class FBodyInstanceCore
{

 public: 
	char pad_0[16];  // Offset: 0 Size: 16
	char bSimulatePhysics : 1;  // Offset: 16 Size: 1
	char bOverrideMass : 1;  // Offset: 16 Size: 1
	char bEnableGravity : 1;  // Offset: 16 Size: 1
	char bAutoWeld : 1;  // Offset: 16 Size: 1
	char bStartAwake : 1;  // Offset: 16 Size: 1
	char bGenerateWakeEvents : 1;  // Offset: 16 Size: 1
	char bUpdateMassWhenScaleChanges : 1;  // Offset: 16 Size: 1
	char pad_16_1 : 1;  // Offset: 16 Size: 1
	char pad_17[8];  // Offset: 17 Size: 8



 // Functions 
 public:
}; 
 
 