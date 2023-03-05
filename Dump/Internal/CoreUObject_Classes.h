#pragma once 
#include <CoreUObject_Structs.h>
 
 
 
//Class CoreUObject.Object Size 40
class UObject
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
	void ExecuteUbergraph(int32_t EntryPoint); // Function CoreUObject.Object.ExecuteUbergraph
}; 
 
 


//Class CoreUObject.Field Size 48
// Inherited 40 bytes 
class UField : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.DynamicClass Size 688
// Inherited 560 bytes 
class UDynamicClass : public UClass
{

 public: 
	char pad_560[128];  // Offset: 560 Size: 128



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.GCObjectReferencer Size 112
// Inherited 40 bytes 
class UGCObjectReferencer : public UObject
{

 public: 
	char pad_40[72];  // Offset: 40 Size: 72



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Interface Size 40
// Inherited 40 bytes 
class UInterface : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Int64Property Size 112
// Inherited 112 bytes 
class UInt64Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.TextBuffer Size 80
// Inherited 40 bytes 
class UTextBuffer : public UObject
{

 public: 
	char pad_40[40];  // Offset: 40 Size: 40



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Struct Size 176
// Inherited 48 bytes 
class UStruct : public UField
{

 public: 
	char pad_48[128];  // Offset: 48 Size: 128



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.PropertyWrapper Size 48
// Inherited 40 bytes 
class UPropertyWrapper : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Package Size 160
// Inherited 40 bytes 
class UPackage : public UObject
{

 public: 
	char pad_40[120];  // Offset: 40 Size: 120



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.NameProperty Size 112
// Inherited 112 bytes 
class UNameProperty : public UProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.InterfaceProperty Size 120
// Inherited 112 bytes 
class UInterfaceProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ScriptStruct Size 192
// Inherited 176 bytes 
class UScriptStruct : public UStruct
{

 public: 
	char pad_176[16];  // Offset: 176 Size: 16



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.FloatProperty Size 112
// Inherited 112 bytes 
class UFloatProperty : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Class Size 560
// Inherited 176 bytes 
class UClass : public UStruct
{

 public: 
	char pad_176[384];  // Offset: 176 Size: 384



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Function Size 224
// Inherited 176 bytes 
class UFunction : public UStruct
{

 public: 
	char pad_176[48];  // Offset: 176 Size: 48



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ByteProperty Size 120
// Inherited 112 bytes 
class UByteProperty : public UNumericProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.DelegateFunction Size 224
// Inherited 224 bytes 
class UDelegateFunction : public UFunction
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.SparseDelegateFunction Size 240
// Inherited 224 bytes 
class USparseDelegateFunction : public UDelegateFunction
{

 public: 
	char pad_224[16];  // Offset: 224 Size: 16



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.WeakObjectProperty Size 120
// Inherited 120 bytes 
class UWeakObjectProperty : public UObjectPropertyBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ClassProperty Size 128
// Inherited 120 bytes 
class UClassProperty : public UObjectProperty
{

 public: 
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.PackageMap Size 224
// Inherited 40 bytes 
class UPackageMap : public UObject
{

 public: 
	char pad_40[184];  // Offset: 40 Size: 184



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Enum Size 96
// Inherited 48 bytes 
class UEnum : public UField
{

 public: 
	char pad_48[48];  // Offset: 48 Size: 48



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.UInt16Property Size 112
// Inherited 112 bytes 
class UUInt16Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.LinkerPlaceholderClass Size 1000
// Inherited 560 bytes 
class ULinkerPlaceholderClass : public UClass
{

 public: 
	char pad_560[440];  // Offset: 560 Size: 440



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MulticastSparseDelegateProperty Size 120
// Inherited 120 bytes 
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.LinkerPlaceholderExportObject Size 240
// Inherited 40 bytes 
class ULinkerPlaceholderExportObject : public UObject
{

 public: 
	char pad_40[200];  // Offset: 40 Size: 200



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.LinkerPlaceholderFunction Size 664
// Inherited 224 bytes 
class ULinkerPlaceholderFunction : public UFunction
{

 public: 
	char pad_224[440];  // Offset: 224 Size: 440



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MetaData Size 200
// Inherited 40 bytes 
class UMetaData : public UObject
{

 public: 
	char pad_40[160];  // Offset: 40 Size: 160



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ObjectProperty Size 120
// Inherited 120 bytes 
class UObjectProperty : public UObjectPropertyBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ObjectRedirector Size 48
// Inherited 40 bytes 
class UObjectRedirector : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.UInt64Property Size 112
// Inherited 112 bytes 
class UUInt64Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.SoftClassProperty Size 128
// Inherited 120 bytes 
class USoftClassProperty : public USoftObjectProperty
{

 public: 
	char pad_120[8];  // Offset: 120 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ArrayProperty Size 120
// Inherited 112 bytes 
class UArrayProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.EnumProperty Size 128
// Inherited 112 bytes 
class UEnumProperty : public UProperty
{

 public: 
	char pad_112[16];  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Property Size 112
// Inherited 48 bytes 
class UProperty : public UField
{

 public: 
	char pad_48[64];  // Offset: 48 Size: 64



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.ObjectPropertyBase Size 120
// Inherited 112 bytes 
class UObjectPropertyBase : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.UInt32Property Size 112
// Inherited 112 bytes 
class UUInt32Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.BoolProperty Size 120
// Inherited 112 bytes 
class UBoolProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.LazyObjectProperty Size 120
// Inherited 120 bytes 
class ULazyObjectProperty : public UObjectPropertyBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.NumericProperty Size 112
// Inherited 112 bytes 
class UNumericProperty : public UProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.TextProperty Size 112
// Inherited 112 bytes 
class UTextProperty : public UProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.DelegateProperty Size 120
// Inherited 112 bytes 
class UDelegateProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.DoubleProperty Size 112
// Inherited 112 bytes 
class UDoubleProperty : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.IntProperty Size 112
// Inherited 112 bytes 
class UIntProperty : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Int8Property Size 112
// Inherited 112 bytes 
class UInt8Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.Int16Property Size 112
// Inherited 112 bytes 
class UInt16Property : public UNumericProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MapProperty Size 152
// Inherited 112 bytes 
class UMapProperty : public UProperty
{

 public: 
	char pad_112[40];  // Offset: 112 Size: 40



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.StructProperty Size 120
// Inherited 112 bytes 
class UStructProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MulticastDelegateProperty Size 120
// Inherited 112 bytes 
class UMulticastDelegateProperty : public UProperty
{

 public: 
	char pad_112[8];  // Offset: 112 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MulticastInlineDelegateProperty Size 120
// Inherited 120 bytes 
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.SetProperty Size 144
// Inherited 112 bytes 
class USetProperty : public UProperty
{

 public: 
	char pad_112[32];  // Offset: 112 Size: 32



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.SoftObjectProperty Size 120
// Inherited 120 bytes 
class USoftObjectProperty : public UObjectPropertyBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.StrProperty Size 112
// Inherited 112 bytes 
class UStrProperty : public UProperty
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MulticastInlineDelegatePropertyWrapper Size 48
// Inherited 48 bytes 
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class CoreUObject.MulticastDelegatePropertyWrapper Size 48
// Inherited 48 bytes 
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{

 public: 



 // Functions 
 public:
}; 
 
 


