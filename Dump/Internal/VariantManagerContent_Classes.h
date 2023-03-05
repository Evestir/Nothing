#pragma once 
#include <VariantManagerContent_Structs.h>
 
 
 
//Class VariantManagerContent.LevelVariantSets Size 144
// Inherited 40 bytes 
class ULevelVariantSets : public UObject
{

 public: 
	UObject* DirectorClass;  // Offset: 40 Size: 8
	struct TArray<struct UVariantSet*> VariantSets;  // Offset: 48 Size: 16
	char pad_64[80];  // Offset: 64 Size: 80



 // Functions 
 public:
	struct UVariantSet* GetVariantSetByName(struct FString VariantSetName); // Function VariantManagerContent.LevelVariantSets.GetVariantSetByName
	struct UVariantSet* GetVariantSet(int32_t VariantSetIndex); // Function VariantManagerContent.LevelVariantSets.GetVariantSet
	int32_t GetNumVariantSets(); // Function VariantManagerContent.LevelVariantSets.GetNumVariantSets
}; 
 
 


//Class VariantManagerContent.LevelVariantSetsActor Size 648
// Inherited 544 bytes 
class ALevelVariantSetsActor : public AActor
{

 public: 
	struct FSoftObjectPath LevelVariantSets;  // Offset: 544 Size: 24
	struct TMap<UObject*, struct ULevelVariantSetsFunctionDirector*> DirectorInstances;  // Offset: 568 Size: 80



 // Functions 
 public:
	bool SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByName
	bool SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex); // Function VariantManagerContent.LevelVariantSetsActor.SwitchOnVariantByIndex
	void SetLevelVariantSets(struct ULevelVariantSets* InVariantSets); // Function VariantManagerContent.LevelVariantSetsActor.SetLevelVariantSets
	struct ULevelVariantSets* GetLevelVariantSets(bool bLoad); // Function VariantManagerContent.LevelVariantSetsActor.GetLevelVariantSets
}; 
 
 


//Class VariantManagerContent.PropertyValueMaterial Size 440
// Inherited 440 bytes 
class UPropertyValueMaterial : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValueOption Size 440
// Inherited 440 bytes 
class UPropertyValueOption : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValue Size 440
// Inherited 40 bytes 
class UPropertyValue : public UObject
{

 public: 
	char pad_40[96];  // Offset: 40 Size: 96
	struct TArray<struct TFieldPath<FNone>> Properties;  // Offset: 136 Size: 16
	struct TArray<int32_t> PropertyIndices;  // Offset: 152 Size: 16
	struct TArray<struct FCapturedPropSegment> CapturedPropSegments;  // Offset: 168 Size: 16
	struct FString FullDisplayString;  // Offset: 184 Size: 16
	struct FName PropertySetterName;  // Offset: 200 Size: 8
	struct TMap<struct FString, struct FString> PropertySetterParameterDefaults;  // Offset: 208 Size: 80
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bHasRecordedData : 1;  // Offset: 288 Size: 1
	char pad_289[7];  // Offset: 289 Size: 7
	UObject* LeafPropertyClass;  // Offset: 296 Size: 8
	char pad_304[8];  // Offset: 304 Size: 8
	struct TArray<char> ValueBytes;  // Offset: 312 Size: 16
	enum class EPropertyValueCategory PropCategory;  // Offset: 328 Size: 1
	char pad_329[111];  // Offset: 329 Size: 111



 // Functions 
 public:
	bool HasRecordedData(); // Function VariantManagerContent.PropertyValue.HasRecordedData
	struct FText GetPropertyTooltip(); // Function VariantManagerContent.PropertyValue.GetPropertyTooltip
	struct FString GetFullDisplayString(); // Function VariantManagerContent.PropertyValue.GetFullDisplayString
}; 
 
 


//Class VariantManagerContent.LevelVariantSetsFunctionDirector Size 64
// Inherited 40 bytes 
class ULevelVariantSetsFunctionDirector : public UObject
{

 public: 
	char pad_40[24];  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValueVisibility Size 440
// Inherited 440 bytes 
class UPropertyValueVisibility : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValueTransform Size 440
// Inherited 440 bytes 
class UPropertyValueTransform : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValueColor Size 440
// Inherited 440 bytes 
class UPropertyValueColor : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.PropertyValueSoftObject Size 440
// Inherited 440 bytes 
class UPropertyValueSoftObject : public UPropertyValue
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.SwitchActor Size 584
// Inherited 544 bytes 
class ASwitchActor : public AActor
{

 public: 
	char pad_544[24];  // Offset: 544 Size: 24
	struct USceneComponent* SceneComponent;  // Offset: 568 Size: 8
	int32_t LastSelectedOption;  // Offset: 576 Size: 4
	char pad_580[4];  // Offset: 580 Size: 4



 // Functions 
 public:
	void SelectOption(int32_t OptionIndex); // Function VariantManagerContent.SwitchActor.SelectOption
	int32_t GetSelectedOption(); // Function VariantManagerContent.SwitchActor.GetSelectedOption
	struct TArray<struct AActor*> GetOptions(); // Function VariantManagerContent.SwitchActor.GetOptions
}; 
 
 


//Class VariantManagerContent.Variant Size 128
// Inherited 40 bytes 
class UVariant : public UObject
{

 public: 
	struct TArray<struct FVariantDependency> Dependencies;  // Offset: 40 Size: 16
	struct FText DisplayText;  // Offset: 56 Size: 24
	char pad_80[24];  // Offset: 80 Size: 24
	struct TArray<struct UVariantObjectBinding*> ObjectBindings;  // Offset: 104 Size: 16
	struct UTexture2D* Thumbnail;  // Offset: 120 Size: 8



 // Functions 
 public:
	void SwitchOn(); // Function VariantManagerContent.Variant.SwitchOn
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.Variant.SetThumbnailFromTexture
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.Variant.SetThumbnailFromFile
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.Variant.SetThumbnailFromEditorViewport
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.Variant.SetThumbnailFromCamera
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.Variant.SetDisplayText
	void SetDependency(int32_t Index, struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.SetDependency
	bool IsActive(); // Function VariantManagerContent.Variant.IsActive
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.Variant.GetThumbnail
	struct UVariantSet* GetParent(); // Function VariantManagerContent.Variant.GetParent
	int32_t GetNumDependencies(); // Function VariantManagerContent.Variant.GetNumDependencies
	int32_t GetNumActors(); // Function VariantManagerContent.Variant.GetNumActors
	struct FText GetDisplayText(); // Function VariantManagerContent.Variant.GetDisplayText
	struct TArray<struct UVariant*> GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies); // Function VariantManagerContent.Variant.GetDependents
	struct FVariantDependency GetDependency(int32_t Index); // Function VariantManagerContent.Variant.GetDependency
	struct AActor* GetActor(int32_t ActorIndex); // Function VariantManagerContent.Variant.GetActor
	void DeleteDependency(int32_t Index); // Function VariantManagerContent.Variant.DeleteDependency
	int32_t AddDependency(struct FVariantDependency& Dependency); // Function VariantManagerContent.Variant.AddDependency
}; 
 
 


//Class VariantManagerContent.VariantObjectBinding Size 144
// Inherited 40 bytes 
class UVariantObjectBinding : public UObject
{

 public: 
	struct FString CachedActorLabel;  // Offset: 40 Size: 16
	struct FSoftObjectPath ObjectPtr;  // Offset: 56 Size: 24
	 LazyObjectPtr;  // Offset: 80 Size: 28
	char pad_108[4];  // Offset: 108 Size: 4
	struct TArray<struct UPropertyValue*> CapturedProperties;  // Offset: 112 Size: 16
	struct TArray<struct FFunctionCaller> FunctionCallers;  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class VariantManagerContent.VariantSet Size 120
// Inherited 40 bytes 
class UVariantSet : public UObject
{

 public: 
	struct FText DisplayText;  // Offset: 40 Size: 24
	char pad_64[24];  // Offset: 64 Size: 24
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bExpanded : 1;  // Offset: 88 Size: 1
	char pad_89[7];  // Offset: 89 Size: 7
	struct TArray<struct UVariant*> Variants;  // Offset: 96 Size: 16
	struct UTexture2D* Thumbnail;  // Offset: 112 Size: 8



 // Functions 
 public:
	void SetThumbnailFromTexture(struct UTexture2D* NewThumbnail); // Function VariantManagerContent.VariantSet.SetThumbnailFromTexture
	void SetThumbnailFromFile(struct FString FilePath); // Function VariantManagerContent.VariantSet.SetThumbnailFromFile
	void SetThumbnailFromEditorViewport(); // Function VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport
	void SetThumbnailFromCamera(struct UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma); // Function VariantManagerContent.VariantSet.SetThumbnailFromCamera
	void SetDisplayText(struct FText& NewDisplayText); // Function VariantManagerContent.VariantSet.SetDisplayText
	struct UVariant* GetVariantByName(struct FString VariantName); // Function VariantManagerContent.VariantSet.GetVariantByName
	struct UVariant* GetVariant(int32_t VariantIndex); // Function VariantManagerContent.VariantSet.GetVariant
	struct UTexture2D* GetThumbnail(); // Function VariantManagerContent.VariantSet.GetThumbnail
	struct ULevelVariantSets* GetParent(); // Function VariantManagerContent.VariantSet.GetParent
	int32_t GetNumVariants(); // Function VariantManagerContent.VariantSet.GetNumVariants
	struct FText GetDisplayText(); // Function VariantManagerContent.VariantSet.GetDisplayText
}; 
 
 


