#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Slate.CustomizedToolMenu Size 488
class FCustomizedToolMenu
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries;  // Offset: 8 Size: 80
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections;  // Offset: 88 Size: 80
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder;  // Offset: 168 Size: 80
	struct TArray<struct FName> SectionOrder;  // Offset: 248 Size: 16
	char pad_264[224];  // Offset: 264 Size: 224



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.VirtualKeyboardOptions Size 1
class FVirtualKeyboardOptions
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bEnableAutocorrect : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.CustomizedToolMenuNameArray Size 16
class FCustomizedToolMenuNameArray
{

 public: 
	struct TArray<struct FName> Names;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.InputChord Size 32
class FInputChord
{

 public: 
	struct FKey Key;  // Offset: 0 Size: 24
	char bShift : 1;  // Offset: 24 Size: 1
	char bCtrl : 1;  // Offset: 24 Size: 1
	char bAlt : 1;  // Offset: 24 Size: 1
	char bCmd : 1;  // Offset: 24 Size: 1
	char pad_24_1 : 4;  // Offset: 24 Size: 1
	char pad_25[8];  // Offset: 25 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.Anchors Size 16
class FAnchors
{

 public: 
	struct FVector2D Minimum;  // Offset: 0 Size: 8
	struct FVector2D Maximum;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.CustomizedToolMenuSection Size 4
class FCustomizedToolMenuSection
{

 public: 
	enum class ECustomizedToolMenuVisibility Visibility;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Slate.CustomizedToolMenuEntry Size 4
class FCustomizedToolMenuEntry
{

 public: 
	enum class ECustomizedToolMenuVisibility Visibility;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 