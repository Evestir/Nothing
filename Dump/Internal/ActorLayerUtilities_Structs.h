#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct ActorLayerUtilities.ActorLayer Size 8
class FActorLayer
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer Size 16
class FAddActorToLayer
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FActorLayer Layer;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors Size 32
class FGetActors
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FActorLayer ActorLayer;  // Offset: 8 Size: 8
	struct TArray<struct AActor*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer Size 16
class FRemoveActorFromLayer
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	struct FActorLayer Layer;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 