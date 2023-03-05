#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct PropertyPath.CachedPropertyPath Size 40
class FCachedPropertyPath
{

 public: 
	struct TArray<struct FPropertyPathSegment> Segments;  // Offset: 0 Size: 16
	char pad_16[8];  // Offset: 16 Size: 8
	struct UFunction* CachedFunction;  // Offset: 24 Size: 8
	char pad_32[8];  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyPath.PropertyPathSegment Size 40
class FPropertyPathSegment
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	int32_t ArrayIndex;  // Offset: 8 Size: 4
	char pad_12[4];  // Offset: 12 Size: 4
	struct UStruct* Struct;  // Offset: 16 Size: 8
	char pad_24[16];  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 