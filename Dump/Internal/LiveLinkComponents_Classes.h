#pragma once 
#include <LiveLinkComponents_Structs.h>
 
 
 
//Class LiveLinkComponents.LiveLinkComponentController Size 344
// Inherited 176 bytes 
class ULiveLinkComponentController : public UActorComponent
{

 public: 
	struct FLiveLinkSubjectRepresentation SubjectRepresentation;  // Offset: 176 Size: 16
	struct TMap<ULiveLinkRole*, struct ULiveLinkControllerBase*> ControllerMap;  // Offset: 192 Size: 80
	char pad_272_1 : 7;  // Offset: 272 Size: 1
	bool bUpdateInEditor : 1;  // Offset: 272 Size: 1
	char pad_273[7];  // Offset: 273 Size: 7
	struct FMulticastInlineDelegate OnLiveLinkUpdated;  // Offset: 280 Size: 16
	struct FComponentReference ComponentToControl;  // Offset: 296 Size: 40
	char pad_336_1 : 7;  // Offset: 336 Size: 1
	bool bDisableEvaluateLiveLinkWhenSpawnable : 1;  // Offset: 336 Size: 1
	char pad_337_1 : 7;  // Offset: 337 Size: 1
	bool bEvaluateLiveLink : 1;  // Offset: 337 Size: 1
	char pad_338[6];  // Offset: 338 Size: 6



 // Functions 
 public:
}; 
 
 


//Class LiveLinkComponents.LiveLinkComponentSettings Size 120
// Inherited 40 bytes 
class ULiveLinkComponentSettings : public UObject
{

 public: 
	struct TMap<ULiveLinkRole*, ULiveLinkControllerBase*> DefaultControllerForRole;  // Offset: 40 Size: 80



 // Functions 
 public:
}; 
 
 


//Class LiveLinkComponents.LiveLinkControllerBase Size 64
// Inherited 40 bytes 
class ULiveLinkControllerBase : public UObject
{

 public: 
	char pad_40[24];  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 


//Class LiveLinkComponents.LiveLinkLightController Size 64
// Inherited 64 bytes 
class ULiveLinkLightController : public ULiveLinkControllerBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkComponents.LiveLinkTransformController Size 72
// Inherited 64 bytes 
class ULiveLinkTransformController : public ULiveLinkControllerBase
{

 public: 
	struct FLiveLinkTransformControllerData TransformData;  // Offset: 64 Size: 6
	char pad_70[2];  // Offset: 70 Size: 2



 // Functions 
 public:
}; 
 
 


