#pragma once 
#include <ImgMedia_Structs.h>
 
 
 
//Class ImgMedia.ImgMediaSource Size 200
// Inherited 136 bytes 
class UImgMediaSource : public UBaseMediaSource
{

 public: 
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool IsPathRelativeToProjectRoot : 1;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	struct FFrameRate FrameRateOverride;  // Offset: 140 Size: 8
	char pad_148[4];  // Offset: 148 Size: 4
	struct FString ProxyOverride;  // Offset: 152 Size: 16
	struct FDirectoryPath SequencePath;  // Offset: 168 Size: 16
	char pad_184[16];  // Offset: 184 Size: 16



 // Functions 
 public:
	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath
	void SetMipLevelDistance(float Distance); // Function ImgMedia.ImgMediaSource.SetMipLevelDistance
	void RemoveTargetObject(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveTargetObject
	void RemoveGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.RemoveGlobalCamera
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath
	void GetProxies(struct TArray<struct FString>& OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies
	void AddTargetObject(struct AActor* InActor, float Width); // Function ImgMedia.ImgMediaSource.AddTargetObject
	void AddGlobalCamera(struct AActor* InActor); // Function ImgMedia.ImgMediaSource.AddGlobalCamera
}; 
 
 


