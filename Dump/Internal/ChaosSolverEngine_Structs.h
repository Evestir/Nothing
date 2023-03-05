#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction ChaosSolverEngine.OnChaosPhysicsCollision__DelegateSignature Size 112
class FOnChaosPhysicsCollision__DelegateSignature
{

 public: 
	struct FChaosPhysicsCollisionInfo CollisionInfo;  // Offset: 0 Size: 112



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo Size 112
class FChaosPhysicsCollisionInfo
{

 public: 
	struct UPrimitiveComponent* Component;  // Offset: 0 Size: 8
	struct UPrimitiveComponent* OtherComponent;  // Offset: 8 Size: 8
	struct FVector Location;  // Offset: 16 Size: 12
	struct FVector Normal;  // Offset: 28 Size: 12
	struct FVector AccumulatedImpulse;  // Offset: 40 Size: 12
	struct FVector Velocity;  // Offset: 52 Size: 12
	struct FVector OtherVelocity;  // Offset: 64 Size: 12
	struct FVector AngularVelocity;  // Offset: 76 Size: 12
	struct FVector OtherAngularVelocity;  // Offset: 88 Size: 12
	float Mass;  // Offset: 100 Size: 4
	float OtherMass;  // Offset: 104 Size: 4
	char pad_108[4];  // Offset: 108 Size: 4



 // Functions 
 public:
}; 
 
 //Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive Size 1
class FSetSolverActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bActive : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult Size 248
class FConvertPhysicsCollisionToHitResult
{

 public: 
	struct FChaosPhysicsCollisionInfo PhysicsCollision;  // Offset: 0 Size: 112
	struct FHitResult ReturnValue;  // Offset: 112 Size: 136



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosSolverEngine.ChaosBreakEvent Size 48
class FChaosBreakEvent
{

 public: 
	struct UPrimitiveComponent* Component;  // Offset: 0 Size: 8
	struct FVector Location;  // Offset: 8 Size: 12
	struct FVector Velocity;  // Offset: 20 Size: 12
	struct FVector AngularVelocity;  // Offset: 32 Size: 12
	float Mass;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosSolverEngine.ChaosHandlerSet Size 88
class FChaosHandlerSet
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct TSet<struct UObject*> ChaosHandlers;  // Offset: 8 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper Size 64
class FBreakEventCallbackWrapper
{

 public: 
	char pad_0[64];  // Offset: 0 Size: 64



 // Functions 
 public:
}; 
 
 //ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl Size 3
class FChaosDebugSubstepControl
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bPause : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bSubstep : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bStep : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 