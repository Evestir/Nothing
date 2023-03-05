#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity Size 16
class FGetVisualFidelity
{

 public: 
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset;  // Offset: 0 Size: 8
	enum class ACLVisualFidelity ReturnValue;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7



 // Functions 
 public:
}; 
 
 //Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity Size 48
class FSetVisualFidelity
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct FLatentActionInfo LatentInfo;  // Offset: 8 Size: 24
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset;  // Offset: 32 Size: 8
	enum class ACLVisualFidelityChangeResult Result;  // Offset: 40 Size: 1
	enum class ACLVisualFidelity VisualFidelity;  // Offset: 41 Size: 1
	char pad_42[6];  // Offset: 42 Size: 6



 // Functions 
 public:
}; 
 
 