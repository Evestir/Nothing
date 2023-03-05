#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function VariantManagerContent.LevelVariantSets.GetVariantSetByName Size 24
class FGetVariantSetByName
{

 public: 
	struct FString VariantSetName;  // Offset: 0 Size: 16
	struct UVariantSet* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct VariantManagerContent.FunctionCaller Size 8
class FFunctionCaller
{

 public: 
	struct FName FunctionName;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.SwitchActor.GetOptions Size 16
class FGetOptions
{

 public: 
	struct TArray<struct AActor*> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct VariantManagerContent.VariantDependency Size 88
class FVariantDependency
{

 public: 
	struct TSoftObjectPtr<UVariantSet> VariantSet;  // Offset: 0 Size: 40
	struct TSoftObjectPtr<UVariant> Variant;  // Offset: 40 Size: 40
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bEnabled : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct VariantManagerContent.CapturedPropSegment Size 40
class FCapturedPropSegment
{

 public: 
	struct FString PropertyName;  // Offset: 0 Size: 16
	int32_t PropertyIndex;  // Offset: 16 Size: 4
	char pad_20[4];  // Offset: 20 Size: 4
	struct FString ComponentName;  // Offset: 24 Size: 16



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSets.GetNumVariantSets Size 4
class FGetNumVariantSets
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSets.GetVariantSet Size 16
class FGetVariantSet
{

 public: 
	int32_t VariantSetIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UVariantSet* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets Size 16
class FGetLevelVariantSets
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bLoad : 1;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct ULevelVariantSets* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.PropertyValue.GetPropertyTooltip Size 24
class FGetPropertyTooltip
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets Size 8
class FSetLevelVariantSets
{

 public: 
	struct ULevelVariantSets* InVariantSets;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex Size 12
class FSwitchOnVariantByIndex
{

 public: 
	int32_t VariantSetIndex;  // Offset: 0 Size: 4
	int32_t VariantIndex;  // Offset: 4 Size: 4
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool ReturnValue : 1;  // Offset: 8 Size: 1
	char pad_9[3];  // Offset: 9 Size: 3



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName Size 40
class FSwitchOnVariantByName
{

 public: 
	struct FString VariantSetName;  // Offset: 0 Size: 16
	struct FString VariantName;  // Offset: 16 Size: 16
	char pad_32_1 : 7;  // Offset: 32 Size: 1
	bool ReturnValue : 1;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.PropertyValue.GetFullDisplayString Size 16
class FGetFullDisplayString
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.GetNumActors Size 4
class FGetNumActors
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.PropertyValue.HasRecordedData Size 1
class FHasRecordedData
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.SwitchActor.GetSelectedOption Size 4
class FGetSelectedOption
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.SwitchActor.SelectOption Size 4
class FSelectOption
{

 public: 
	int32_t OptionIndex;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.AddDependency Size 96
class FAddDependency
{

 public: 
	struct FVariantDependency Dependency;  // Offset: 0 Size: 88
	int32_t ReturnValue;  // Offset: 88 Size: 4
	char pad_92[4];  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.DeleteDependency Size 4
class FDeleteDependency
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.SetDisplayText Size 24
class FSetDisplayText
{

 public: 
	struct FText NewDisplayText;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.GetActor Size 16
class FGetActor
{

 public: 
	int32_t ActorIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct AActor* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.GetDependency Size 96
class FGetDependency
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FVariantDependency ReturnValue;  // Offset: 8 Size: 88



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.SetThumbnailFromFile Size 16
class FSetThumbnailFromFile
{

 public: 
	struct FString FilePath;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.GetDependents Size 32
class FGetDependents
{

 public: 
	struct ULevelVariantSets* LevelVariantSets;  // Offset: 0 Size: 8
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	bool bOnlyEnabledDependencies : 1;  // Offset: 8 Size: 1
	char pad_9[7];  // Offset: 9 Size: 7
	struct TArray<struct UVariant*> ReturnValue;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetVariant Size 16
class FGetVariant
{

 public: 
	int32_t VariantIndex;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UVariant* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetDisplayText Size 24
class FGetDisplayText
{

 public: 
	struct FText ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.GetNumDependencies Size 4
class FGetNumDependencies
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetParent Size 8
class FGetParent
{

 public: 
	struct ULevelVariantSets* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetThumbnail Size 8
class FGetThumbnail
{

 public: 
	struct UTexture2D* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.IsActive Size 1
class FIsActive
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.Variant.SetDependency Size 96
class FSetDependency
{

 public: 
	int32_t Index;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct FVariantDependency Dependency;  // Offset: 8 Size: 88



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.SetThumbnailFromCamera Size 80
class FSetThumbnailFromCamera
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform CameraTransform;  // Offset: 16 Size: 48
	float FOVDegrees;  // Offset: 64 Size: 4
	float MinZ;  // Offset: 68 Size: 4
	float Gamma;  // Offset: 72 Size: 4
	char pad_76[4];  // Offset: 76 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.SetThumbnailFromTexture Size 8
class FSetThumbnailFromTexture
{

 public: 
	struct UTexture2D* NewThumbnail;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetNumVariants Size 4
class FGetNumVariants
{

 public: 
	int32_t ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function VariantManagerContent.VariantSet.GetVariantByName Size 24
class FGetVariantByName
{

 public: 
	struct FString VariantName;  // Offset: 0 Size: 16
	struct UVariant* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 