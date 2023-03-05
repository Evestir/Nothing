#pragma once 
#include <LiveLinkInterface_Structs.h>
 
 
 
//Class LiveLinkInterface.LiveLinkVirtualSubject Size 352
// Inherited 40 bytes 
class ULiveLinkVirtualSubject : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	ULiveLinkRole* Role;  // Offset: 48 Size: 8
	struct TArray<struct FLiveLinkSubjectName> Subjects;  // Offset: 56 Size: 16
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators;  // Offset: 72 Size: 16
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bRebroadcastSubject : 1;  // Offset: 88 Size: 1
	char pad_89[263];  // Offset: 89 Size: 263



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkSourceFactory Size 40
// Inherited 40 bytes 
class ULiveLinkSourceFactory : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor Size 40
// Inherited 40 bytes 
class ULiveLinkFrameInterpolationProcessor : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkFrameTranslator Size 40
// Inherited 40 bytes 
class ULiveLinkFrameTranslator : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkCameraRole Size 40
// Inherited 40 bytes 
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkFramePreProcessor Size 40
// Inherited 40 bytes 
class ULiveLinkFramePreProcessor : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkSourceSettings Size 160
// Inherited 40 bytes 
class ULiveLinkSourceSettings : public UObject
{

 public: 
	enum class ELiveLinkSourceMode Mode;  // Offset: 40 Size: 1
	char pad_41[7];  // Offset: 41 Size: 7
	struct FLiveLinkSourceBufferManagementSettings BufferSettings;  // Offset: 48 Size: 88
	struct FString ConnectionString;  // Offset: 136 Size: 16
	ULiveLinkSourceFactory* Factory;  // Offset: 152 Size: 8



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkRole Size 40
// Inherited 40 bytes 
class ULiveLinkRole : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkBasicRole Size 40
// Inherited 40 bytes 
class ULiveLinkBasicRole : public ULiveLinkRole
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkLightRole Size 40
// Inherited 40 bytes 
class ULiveLinkLightRole : public ULiveLinkTransformRole
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkAnimationRole Size 40
// Inherited 40 bytes 
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkTransformRole Size 40
// Inherited 40 bytes 
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkController Size 40
// Inherited 40 bytes 
class ULiveLinkController : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkCurveRemapSettings Size 240
// Inherited 160 bytes 
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{

 public: 
	struct FLiveLinkCurveConversionSettings CurveConversionSettings;  // Offset: 160 Size: 80



 // Functions 
 public:
}; 
 
 


//Class LiveLinkInterface.LiveLinkSubjectSettings Size 104
// Inherited 40 bytes 
class ULiveLinkSubjectSettings : public UObject
{

 public: 
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors;  // Offset: 40 Size: 16
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor;  // Offset: 56 Size: 8
	struct TArray<struct ULiveLinkFrameTranslator*> Translators;  // Offset: 64 Size: 16
	ULiveLinkRole* Role;  // Offset: 80 Size: 8
	struct FFrameRate FrameRate;  // Offset: 88 Size: 8
	char pad_96_1 : 7;  // Offset: 96 Size: 1
	bool bRebroadcastSubject : 1;  // Offset: 96 Size: 1
	char pad_97[7];  // Offset: 97 Size: 7



 // Functions 
 public:
}; 
 
 


