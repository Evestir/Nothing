#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Serialization.StructSerializerSetTestStruct Size 320
class FStructSerializerSetTestStruct
{

 public: 
	struct TSet<struct FString> StrSet;  // Offset: 0 Size: 80
	struct TSet<int32_t> IntSet;  // Offset: 80 Size: 80
	struct TSet<struct FName> NameSet;  // Offset: 160 Size: 80
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet;  // Offset: 240 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerTestStruct Size 1104
class FStructSerializerTestStruct
{

 public: 
	struct FStructSerializerNumericTestStruct Numerics;  // Offset: 0 Size: 48
	struct FStructSerializerBooleanTestStruct Booleans;  // Offset: 48 Size: 3
	char pad_51[5];  // Offset: 51 Size: 5
	struct FStructSerializerObjectTestStruct Objects;  // Offset: 56 Size: 160
	char pad_216[8];  // Offset: 216 Size: 8
	struct FStructSerializerBuiltinTestStruct Builtins;  // Offset: 224 Size: 144
	struct FStructSerializerArrayTestStruct Arrays;  // Offset: 368 Size: 96
	struct FStructSerializerMapTestStruct Maps;  // Offset: 464 Size: 320
	struct FStructSerializerSetTestStruct Sets;  // Offset: 784 Size: 320



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerObjectTestStruct Size 160
class FStructSerializerObjectTestStruct
{

 public: 
	UObject* Class;  // Offset: 0 Size: 8
	UMetaData* SubClass;  // Offset: 8 Size: 8
	struct TSoftClassPtr<UObject> SoftClass;  // Offset: 16 Size: 40
	struct UObject* Object;  // Offset: 56 Size: 8
	struct TWeakObjectPtr<UMetaData> WeakObject;  // Offset: 64 Size: 8
	struct TSoftObjectPtr<UMetaData> SoftObject;  // Offset: 72 Size: 40
	struct FSoftClassPath ClassPath;  // Offset: 112 Size: 24
	struct FSoftObjectPath ObjectPath;  // Offset: 136 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerBuiltinTestStruct Size 144
class FStructSerializerBuiltinTestStruct
{

 public: 
	struct FGuid Guid;  // Offset: 0 Size: 16
	struct FName Name;  // Offset: 16 Size: 8
	struct FString String;  // Offset: 24 Size: 16
	struct FText Text;  // Offset: 40 Size: 24
	struct FVector Vector;  // Offset: 64 Size: 12
	char pad_76[4];  // Offset: 76 Size: 4
	struct FVector4 Vector4;  // Offset: 80 Size: 16
	struct FRotator Rotator;  // Offset: 96 Size: 12
	char pad_108[4];  // Offset: 108 Size: 4
	struct FQuat Quat;  // Offset: 112 Size: 16
	struct FColor Color;  // Offset: 128 Size: 4
	char pad_132[12];  // Offset: 132 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerMapTestStruct Size 320
class FStructSerializerMapTestStruct
{

 public: 
	struct TMap<int32_t, struct FString> IntToStr;  // Offset: 0 Size: 80
	struct TMap<struct FString, struct FString> StrToStr;  // Offset: 80 Size: 80
	struct TMap<struct FString, struct FVector> StrToVec;  // Offset: 160 Size: 80
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct;  // Offset: 240 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerArrayTestStruct Size 96
class FStructSerializerArrayTestStruct
{

 public: 
	struct TArray<int32_t> Int32Array;  // Offset: 0 Size: 16
	struct TArray<char> ByteArray;  // Offset: 16 Size: 16
	int32_t StaticSingleElement;  // Offset: 32 Size: 4
	int32_t StaticInt32Array[3];  // Offset: 36 Size: 12
	float StaticFloatArray[3];  // Offset: 48 Size: 12
	char pad_60[4];  // Offset: 60 Size: 4
	struct TArray<struct FVector> VectorArray;  // Offset: 64 Size: 16
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerBooleanTestStruct Size 3
class FStructSerializerBooleanTestStruct
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool BoolFalse : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool BoolTrue : 1;  // Offset: 1 Size: 1
	char Bitfield0 : 1;  // Offset: 2 Size: 1
	char Bitfield1 : 1;  // Offset: 2 Size: 1
	char Bitfield2Set : 1;  // Offset: 2 Size: 1
	char Bitfield3 : 1;  // Offset: 2 Size: 1
	char Bitfield4Set : 1;  // Offset: 2 Size: 1
	char Bitfield5Set : 1;  // Offset: 2 Size: 1
	char Bitfield6 : 1;  // Offset: 2 Size: 1
	char Bitfield7Set : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerNumericTestStruct Size 48
class FStructSerializerNumericTestStruct
{

 public: 
	int8_t Int8;  // Offset: 0 Size: 1
	char pad_1[1];  // Offset: 1 Size: 1
	int16_t Int16;  // Offset: 2 Size: 2
	int32_t Int32;  // Offset: 4 Size: 4
	int64_t Int64;  // Offset: 8 Size: 8
	char UInt8;  // Offset: 16 Size: 1
	char pad_17[1];  // Offset: 17 Size: 1
	uint16_t UInt16;  // Offset: 18 Size: 2
	uint32_t UInt32;  // Offset: 20 Size: 4
	uint64_t UInt64;  // Offset: 24 Size: 8
	float Float;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4
	double Double;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Serialization.StructSerializerByteArray Size 56
class FStructSerializerByteArray
{

 public: 
	int32_t Dummy1;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct TArray<char> ByteArray;  // Offset: 8 Size: 16
	int32_t Dummy2;  // Offset: 24 Size: 4
	char pad_28[4];  // Offset: 28 Size: 4
	struct TArray<int8_t> Int8Array;  // Offset: 32 Size: 16
	int32_t Dummy3;  // Offset: 48 Size: 4
	char pad_52[4];  // Offset: 52 Size: 4



 // Functions 
 public:
}; 
 
 