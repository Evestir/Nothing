#pragma once 
#include <ACLPlugin_Structs.h>
 
 
 
//Class ACLPlugin.AnimBoneCompressionCodec_ACL Size 64
// Inherited 56 bytes 
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{

 public: 
	struct UAnimBoneCompressionCodec* SafetyFallbackCodec;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ACLPlugin.AnimationCompressionLibraryDatabase Size 352
// Inherited 40 bytes 
class UAnimationCompressionLibraryDatabase : public UObject
{

 public: 
	struct TArray<char> CookedCompressedBytes;  // Offset: 40 Size: 16
	struct TArray<uint64_t> CookedAnimSequenceMappings;  // Offset: 56 Size: 16
	char pad_72[272];  // Offset: 72 Size: 272
	uint32_t MaxStreamRequestSizeKB;  // Offset: 344 Size: 4
	char pad_348[4];  // Offset: 348 Size: 4



 // Functions 
 public:
	void SetVisualFidelity(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct UAnimationCompressionLibraryDatabase* DatabaseAsset, enum class ACLVisualFidelityChangeResult& Result, enum class ACLVisualFidelity VisualFidelity); // Function ACLPlugin.AnimationCompressionLibraryDatabase.SetVisualFidelity
	enum class ACLVisualFidelity GetVisualFidelity(struct UAnimationCompressionLibraryDatabase* DatabaseAsset); // Function ACLPlugin.AnimationCompressionLibraryDatabase.GetVisualFidelity
}; 
 
 


//Class ACLPlugin.AnimBoneCompressionCodec_ACLBase Size 56
// Inherited 56 bytes 
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom Size 56
// Inherited 56 bytes 
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe Size 56
// Inherited 56 bytes 
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ACLPlugin.AnimBoneCompressionCodec_ACLDatabase Size 64
// Inherited 56 bytes 
class UAnimBoneCompressionCodec_ACLDatabase : public UAnimBoneCompressionCodec_ACLBase
{

 public: 
	struct UAnimationCompressionLibraryDatabase* DatabaseAsset;  // Offset: 56 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ACLPlugin.AnimCurveCompressionCodec_ACL Size 40
// Inherited 40 bytes 
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{

 public: 



 // Functions 
 public:
}; 
 
 


