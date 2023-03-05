#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function CableComponent.CableComponent.GetAttachedActor Size 8
class FGetAttachedActor
{

 public: 
	struct AActor* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function CableComponent.CableComponent.SetAttachEndTo Size 24
class FSetAttachEndTo
{

 public: 
	struct AActor* Actor;  // Offset: 0 Size: 8
	struct FName ComponentProperty;  // Offset: 8 Size: 8
	struct FName SocketName;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function CableComponent.CableComponent.GetAttachedComponent Size 8
class FGetAttachedComponent
{

 public: 
	struct USceneComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function CableComponent.CableComponent.GetCableParticleLocations Size 16
class FGetCableParticleLocations
{

 public: 
	struct TArray<struct FVector> Locations;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CableComponent.CableComponent.SetAttachEndToComponent Size 16
class FSetAttachEndToComponent
{

 public: 
	struct USceneComponent* Component;  // Offset: 0 Size: 8
	struct FName SocketName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 