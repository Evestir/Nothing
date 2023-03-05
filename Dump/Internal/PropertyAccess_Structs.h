#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct PropertyAccess.PropertyAccessLibrary Size 200
class FPropertyAccessLibrary
{

 public: 
	struct TArray<struct FPropertyAccessSegment> PathSegments;  // Offset: 0 Size: 16
	struct TArray<struct FPropertyAccessPath> SrcPaths;  // Offset: 16 Size: 16
	struct TArray<struct FPropertyAccessPath> DestPaths;  // Offset: 32 Size: 16
	struct FPropertyAccessCopyBatch CopyBatches[4];  // Offset: 48 Size: 64
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses;  // Offset: 112 Size: 16
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses;  // Offset: 128 Size: 16
	struct TArray<struct FPropertyAccessIndirection> Indirections;  // Offset: 144 Size: 16
	struct TArray<int32_t> EventAccessIndices;  // Offset: 160 Size: 16
	char pad_176[24];  // Offset: 176 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessIndirection Size 64
class FPropertyAccessIndirection
{

 public: 
	struct TFieldPath<FNone> ArrayProperty;  // Offset: 0 Size: 32
	struct UFunction* Function;  // Offset: 32 Size: 8
	int32_t ReturnBufferSize;  // Offset: 40 Size: 4
	int32_t ReturnBufferAlignment;  // Offset: 44 Size: 4
	int32_t ArrayIndex;  // Offset: 48 Size: 4
	uint32_t Offset;  // Offset: 52 Size: 4
	enum class EPropertyAccessObjectType ObjectType;  // Offset: 56 Size: 1
	enum class EPropertyAccessIndirectionType Type;  // Offset: 57 Size: 1
	char pad_58[6];  // Offset: 58 Size: 6



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessCopy Size 16
class FPropertyAccessCopy
{

 public: 
	int32_t AccessIndex;  // Offset: 0 Size: 4
	int32_t DestAccessStartIndex;  // Offset: 4 Size: 4
	int32_t DestAccessEndIndex;  // Offset: 8 Size: 4
	enum class EPropertyAccessCopyType Type;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessIndirectionChain Size 48
class FPropertyAccessIndirectionChain
{

 public: 
	struct TFieldPath<FNone> Property;  // Offset: 0 Size: 32
	int32_t IndirectionStartIndex;  // Offset: 32 Size: 4
	int32_t IndirectionEndIndex;  // Offset: 36 Size: 4
	int32_t EventID;  // Offset: 40 Size: 4
	char pad_44[4];  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessPath Size 12
class FPropertyAccessPath
{

 public: 
	int32_t PathSegmentStartIndex;  // Offset: 0 Size: 4
	int32_t PathSegmentCount;  // Offset: 4 Size: 4
	char bHasEvents : 1;  // Offset: 8 Size: 1
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	char pad_9[4];  // Offset: 9 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessCopyBatch Size 16
class FPropertyAccessCopyBatch
{

 public: 
	struct TArray<struct FPropertyAccessCopy> Copies;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct PropertyAccess.PropertyAccessSegment Size 64
class FPropertyAccessSegment
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct UStruct* Struct;  // Offset: 8 Size: 8
	struct TFieldPath<FNone> Property;  // Offset: 16 Size: 32
	struct UFunction* Function;  // Offset: 48 Size: 8
	int32_t ArrayIndex;  // Offset: 56 Size: 4
	uint16_t Flags;  // Offset: 60 Size: 2
	char pad_62[2];  // Offset: 62 Size: 2



 // Functions 
 public:
}; 
 
 