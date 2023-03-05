#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct ActorSequence.ActorSequenceObjectReferenceMap Size 32
class FActorSequenceObjectReferenceMap
{

 public: 
	struct TArray<struct FGuid> BindingIds;  // Offset: 0 Size: 16
	struct TArray<struct FActorSequenceObjectReferences> References;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ActorSequence.ActorSequenceObjectReferences Size 16
class FActorSequenceObjectReferences
{

 public: 
	struct TArray<struct FActorSequenceObjectReference> Array;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct ActorSequence.ActorSequenceObjectReference Size 40
class FActorSequenceObjectReference
{

 public: 
	enum class EActorSequenceObjectReferenceType Type;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FGuid ActorId;  // Offset: 4 Size: 16
	char pad_20[4];  // Offset: 20 Size: 4
	struct FString PathToComponent;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 