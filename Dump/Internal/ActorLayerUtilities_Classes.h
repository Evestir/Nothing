#pragma once 
#include <ActorLayerUtilities_Structs.h>
 
 
 
//Class ActorLayerUtilities.LayersBlueprintLibrary Size 40
// Inherited 40 bytes 
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	void RemoveActorFromLayer(struct AActor* InActor, struct FActorLayer& Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.RemoveActorFromLayer
	struct TArray<struct AActor*> GetActors(struct UObject* WorldContextObject, struct FActorLayer& ActorLayer); // Function ActorLayerUtilities.LayersBlueprintLibrary.GetActors
	void AddActorToLayer(struct AActor* InActor, struct FActorLayer& Layer); // Function ActorLayerUtilities.LayersBlueprintLibrary.AddActorToLayer
}; 
 
 


