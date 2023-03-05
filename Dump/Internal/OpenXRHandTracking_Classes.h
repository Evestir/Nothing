#pragma once 
#include <OpenXRHandTracking_Structs.h>
 
 
 
//Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory Size 56
// Inherited 40 bytes 
class ULiveLinkOpenXRHandTrackingSourceFactory : public ULiveLinkSourceFactory
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset Size 128
// Inherited 40 bytes 
class UOpenXRHandTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bHasMetacarpals : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bRetargetRotationOnly : 1;  // Offset: 41 Size: 1
	enum class EQuatSwizzleAxisB SwizzleX;  // Offset: 42 Size: 1
	enum class EQuatSwizzleAxisB SwizzleY;  // Offset: 43 Size: 1
	enum class EQuatSwizzleAxisB SwizzleZ;  // Offset: 44 Size: 1
	enum class EQuatSwizzleAxisB SwizzleW;  // Offset: 45 Size: 1
	char pad_46[2];  // Offset: 46 Size: 2
	struct TMap<struct FName, struct FName> HandTrackingBoneNameMap;  // Offset: 48 Size: 80



 // Functions 
 public:
}; 
 
 


