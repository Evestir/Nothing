#pragma once 
#include <Overlay_Structs.h>
 
 
 
//Class Overlay.Overlays Size 40
// Inherited 40 bytes 
class UOverlays : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class Overlay.BasicOverlays Size 56
// Inherited 40 bytes 
class UBasicOverlays : public UOverlays
{

 public: 
	struct TArray<struct FOverlayItem> Overlays;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class Overlay.LocalizedOverlays Size 128
// Inherited 40 bytes 
class ULocalizedOverlays : public UOverlays
{

 public: 
	struct UBasicOverlays* DefaultOverlays;  // Offset: 40 Size: 8
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap;  // Offset: 48 Size: 80



 // Functions 
 public:
}; 
 
 


