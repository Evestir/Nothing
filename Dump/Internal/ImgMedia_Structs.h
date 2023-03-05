#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function ImgMedia.ImgMediaSource.SetMipLevelDistance Size 4
class FSetMipLevelDistance
{

 public: 
	float Distance;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.AddGlobalCamera Size 8
class FAddGlobalCamera
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.AddTargetObject Size 16
class FAddTargetObject
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8
	float Width;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.RemoveGlobalCamera Size 8
class FRemoveGlobalCamera
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.GetSequencePath Size 16
class FGetSequencePath
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.GetProxies Size 16
class FGetProxies
{

 public: 
	struct TArray<struct FString> OutProxies;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.RemoveTargetObject Size 8
class FRemoveTargetObject
{

 public: 
	struct AActor* InActor;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function ImgMedia.ImgMediaSource.SetSequencePath Size 16
class FSetSequencePath
{

 public: 
	struct FString Path;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 