#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct KxCore.NullableInt32 Size 8
// Inherited 1 bytes 
class FNullableInt32 : public FKxNullable
{

 public: 
	char pad_1[3];  // Offset: 1 Size: 3
	int32_t Value;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct KxCore.KxNullable Size 1
class FKxNullable
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool valueSet : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct KxCore.NullableDateTime Size 16
// Inherited 1 bytes 
class FNullableDateTime : public FKxNullable
{

 public: 
	char pad_1[7];  // Offset: 1 Size: 7
	struct FDateTime Value;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct KxCore.NullableString Size 24
// Inherited 1 bytes 
class FNullableString : public FKxNullable
{

 public: 
	char pad_1[7];  // Offset: 1 Size: 7
	struct FString Value;  // Offset: 8 Size: 16



 // Functions 
 public:
}; 
 
 