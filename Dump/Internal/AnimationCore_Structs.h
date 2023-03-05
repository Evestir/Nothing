#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct AnimationCore.CCDIKChainLink Size 128
class FCCDIKChainLink
{

 public: 
	char pad_0[128];  // Offset: 0 Size: 128



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.AimConstraintDescription Size 64
// Inherited 16 bytes 
class FAimConstraintDescription : public FConstraintDescriptionEx
{

 public: 
	struct FAxis LookAt_Axis;  // Offset: 16 Size: 16
	struct FAxis LookUp_Axis;  // Offset: 32 Size: 16
	char pad_48_1 : 7;  // Offset: 48 Size: 1
	bool bUseLookUp : 1;  // Offset: 48 Size: 1
	char pad_49[3];  // Offset: 49 Size: 3
	struct FVector LookUpTarget;  // Offset: 52 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.Axis Size 16
class FAxis
{

 public: 
	struct FVector Axis;  // Offset: 0 Size: 12
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool bInLocalSpace : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.ConstraintData Size 128
class FConstraintData
{

 public: 
	struct FConstraintDescriptor Constraint;  // Offset: 0 Size: 16
	float weight;  // Offset: 16 Size: 4
	char pad_20_1 : 7;  // Offset: 20 Size: 1
	bool bMaintainOffset : 1;  // Offset: 20 Size: 1
	char pad_21[11];  // Offset: 21 Size: 11
	struct FTransform Offset;  // Offset: 32 Size: 48
	struct FTransform CurrentTransform;  // Offset: 80 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.TransformConstraintDescription Size 24
// Inherited 16 bytes 
class FTransformConstraintDescription : public FConstraintDescriptionEx
{

 public: 
	enum class ETransformConstraintType TransformType;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.ConstraintDescriptor Size 16
class FConstraintDescriptor
{

 public: 
	enum class EConstraintType Type;  // Offset: 0 Size: 1
	char pad_1[15];  // Offset: 1 Size: 15



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.ConstraintDescriptionEx Size 16
class FConstraintDescriptionEx
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct FFilterOptionPerAxis AxesFilterOption;  // Offset: 8 Size: 3
	char pad_11[5];  // Offset: 11 Size: 5



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.FilterOptionPerAxis Size 3
class FFilterOptionPerAxis
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bX : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bY : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bZ : 1;  // Offset: 2 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.TransformConstraint Size 40
class FTransformConstraint
{

 public: 
	struct FConstraintDescription Operator;  // Offset: 0 Size: 13
	char pad_13[3];  // Offset: 13 Size: 3
	struct FName SourceNode;  // Offset: 16 Size: 8
	struct FName TargetNode;  // Offset: 24 Size: 8
	float weight;  // Offset: 32 Size: 4
	char pad_36_1 : 7;  // Offset: 36 Size: 1
	bool bMaintainOffset : 1;  // Offset: 36 Size: 1
	char pad_37[3];  // Offset: 37 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.ConstraintDescription Size 13
class FConstraintDescription
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bTranslation : 1;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool bRotation : 1;  // Offset: 1 Size: 1
	char pad_2_1 : 7;  // Offset: 2 Size: 1
	bool bScale : 1;  // Offset: 2 Size: 1
	char pad_3_1 : 7;  // Offset: 3 Size: 1
	bool bParent : 1;  // Offset: 3 Size: 1
	struct FFilterOptionPerAxis TranslationAxes;  // Offset: 4 Size: 3
	struct FFilterOptionPerAxis RotationAxes;  // Offset: 7 Size: 3
	struct FFilterOptionPerAxis ScaleAxes;  // Offset: 10 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.ConstraintOffset Size 96
class FConstraintOffset
{

 public: 
	struct FVector Translation;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FQuat Rotation;  // Offset: 16 Size: 16
	struct FVector Scale;  // Offset: 32 Size: 12
	char pad_44[4];  // Offset: 44 Size: 4
	struct FTransform Parent;  // Offset: 48 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.TransformFilter Size 9
class FTransformFilter
{

 public: 
	struct FFilterOptionPerAxis TranslationFilter;  // Offset: 0 Size: 3
	struct FFilterOptionPerAxis RotationFilter;  // Offset: 3 Size: 3
	struct FFilterOptionPerAxis ScaleFilter;  // Offset: 6 Size: 3



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.EulerTransform Size 36
class FEulerTransform
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	struct FRotator Rotation;  // Offset: 12 Size: 12
	struct FVector Scale;  // Offset: 24 Size: 12



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.FABRIKChainLink Size 56
class FFABRIKChainLink
{

 public: 
	char pad_0[56];  // Offset: 0 Size: 56



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.NodeChain Size 16
class FNodeChain
{

 public: 
	struct TArray<struct FName> nodes;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.NodeHierarchyWithUserData Size 120
class FNodeHierarchyWithUserData
{

 public: 
	char pad_0[8];  // Offset: 0 Size: 8
	struct FNodeHierarchyData Hierarchy;  // Offset: 8 Size: 112



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.NodeHierarchyData Size 112
class FNodeHierarchyData
{

 public: 
	struct TArray<struct FNodeObject> nodes;  // Offset: 0 Size: 16
	struct TArray<struct FTransform> Transforms;  // Offset: 16 Size: 16
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping;  // Offset: 32 Size: 80



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.NodeObject Size 16
class FNodeObject
{

 public: 
	struct FName Name;  // Offset: 0 Size: 8
	struct FName ParentName;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct AnimationCore.TransformNoScale Size 32
class FTransformNoScale
{

 public: 
	struct FVector Location;  // Offset: 0 Size: 12
	char pad_12[4];  // Offset: 12 Size: 4
	struct FQuat Rotation;  // Offset: 16 Size: 16



 // Functions 
 public:
}; 
 
 