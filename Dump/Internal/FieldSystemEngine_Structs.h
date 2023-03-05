#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct FieldSystemEngine.FieldObjectCommands Size 48
class FFieldObjectCommands
{

 public: 
	struct TArray<struct FName> TargetNames;  // Offset: 0 Size: 16
	struct TArray<struct UFieldNodeBase*> RootNodes;  // Offset: 16 Size: 16
	struct TArray<struct UFieldSystemMetaData*> MetaDatas;  // Offset: 32 Size: 16



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.NoiseField.SetNoiseField Size 80
class FSetNoiseField
{

 public: 
	float MinRange;  // Offset: 0 Size: 4
	float MaxRange;  // Offset: 4 Size: 4
	char pad_8[8];  // Offset: 8 Size: 8
	struct FTransform Transform;  // Offset: 16 Size: 48
	struct UNoiseField* ReturnValue;  // Offset: 64 Size: 8
	char pad_72[8];  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand Size 24
class FAddFieldCommand
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	enum class EFieldPhysicsType Target;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct UFieldSystemMetaData* MetaData;  // Offset: 8 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField Size 20
class FApplyStayDynamicField
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector position;  // Offset: 4 Size: 12
	float Radius;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce Size 20
class FApplyRadialForce
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector position;  // Offset: 4 Size: 12
	float Magnitude;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.AddPersistentField Size 24
class FAddPersistentField
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	enum class EFieldPhysicsType Target;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct UFieldSystemMetaData* MetaData;  // Offset: 8 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal Size 8
class FSetReturnResultsTerminal
{

 public: 
	struct UReturnResultsTerminal* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.UniformScalar.SetUniformScalar Size 16
class FSetUniformScalar
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUniformScalar* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce Size 20
class FApplyLinearForce
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector Direction;  // Offset: 4 Size: 12
	float Magnitude;  // Offset: 16 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField Size 24
class FApplyPhysicsField
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	enum class EFieldPhysicsType Target;  // Offset: 1 Size: 1
	char pad_2[6];  // Offset: 2 Size: 6
	struct UFieldSystemMetaData* MetaData;  // Offset: 8 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce Size 24
class FApplyRadialVectorFalloffForce
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector position;  // Offset: 4 Size: 12
	float Radius;  // Offset: 16 Size: 4
	float Magnitude;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.RadialFalloff.SetRadialFalloff Size 48
class FSetRadialFalloff
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	float MinRange;  // Offset: 4 Size: 4
	float MaxRange;  // Offset: 8 Size: 4
	float Default;  // Offset: 12 Size: 4
	float Radius;  // Offset: 16 Size: 4
	struct FVector position;  // Offset: 20 Size: 12
	enum class EFieldFalloffType Falloff;  // Offset: 32 Size: 1
	char pad_33[7];  // Offset: 33 Size: 7
	struct URadialFalloff* ReturnValue;  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField Size 28
class FApplyStrainField
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector position;  // Offset: 4 Size: 12
	float Radius;  // Offset: 16 Size: 4
	float Magnitude;  // Offset: 20 Size: 4
	int32_t Iterations;  // Offset: 24 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce Size 36
class FApplyUniformVectorFalloffForce
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool Enabled : 1;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	struct FVector position;  // Offset: 4 Size: 12
	struct FVector Direction;  // Offset: 16 Size: 12
	float Radius;  // Offset: 28 Size: 4
	float Magnitude;  // Offset: 32 Size: 4



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration Size 16
class FSetMetaDataIteration
{

 public: 
	int32_t Iterations;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UFieldSystemMetaDataIteration* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType Size 16
class FSetMetaDataaProcessingResolutionType
{

 public: 
	enum class EFieldResolutionType ResolutionType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UFieldSystemMetaDataProcessingResolution* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType Size 16
class FSetMetaDataFilterType
{

 public: 
	enum class EFieldFilterType FilterType;  // Offset: 0 Size: 1
	char pad_1[7];  // Offset: 1 Size: 7
	struct UFieldSystemMetaDataFilter* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.UniformInteger.SetUniformInteger Size 16
class FSetUniformInteger
{

 public: 
	int32_t Magnitude;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UUniformInteger* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.OperatorField.SetOperatorField Size 40
class FSetOperatorField
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct UFieldNodeBase* LeftField;  // Offset: 8 Size: 8
	struct UFieldNodeBase* RightField;  // Offset: 16 Size: 8
	enum class EFieldOperationType Operation;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct UOperatorField* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.RadialIntMask.SetRadialIntMask Size 40
class FSetRadialIntMask
{

 public: 
	float Radius;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12
	int32_t InteriorValue;  // Offset: 16 Size: 4
	int32_t ExteriorValue;  // Offset: 20 Size: 4
	enum class ESetMaskConditionType SetMaskConditionIn;  // Offset: 24 Size: 1
	char pad_25[7];  // Offset: 25 Size: 7
	struct URadialIntMask* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.BoxFalloff.SetBoxFalloff Size 80
class FSetBoxFalloff
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	float MinRange;  // Offset: 4 Size: 4
	float MaxRange;  // Offset: 8 Size: 4
	float Default;  // Offset: 12 Size: 4
	struct FTransform Transform;  // Offset: 16 Size: 48
	enum class EFieldFalloffType Falloff;  // Offset: 64 Size: 1
	char pad_65[7];  // Offset: 65 Size: 7
	struct UBoxFalloff* ReturnValue;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.WaveScalar.SetWaveScalar Size 40
class FSetWaveScalar
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12
	float Wavelength;  // Offset: 16 Size: 4
	float Period;  // Offset: 20 Size: 4
	float Time;  // Offset: 24 Size: 4
	enum class EWaveFunctionType Function;  // Offset: 28 Size: 1
	enum class EFieldFalloffType Falloff;  // Offset: 29 Size: 1
	char pad_30[2];  // Offset: 30 Size: 2
	struct UWaveScalar* ReturnValue;  // Offset: 32 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.RadialVector.SetRadialVector Size 24
class FSetRadialVector
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	struct FVector position;  // Offset: 4 Size: 12
	struct URadialVector* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff Size 56
class FSetPlaneFalloff
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	float MinRange;  // Offset: 4 Size: 4
	float MaxRange;  // Offset: 8 Size: 4
	float Default;  // Offset: 12 Size: 4
	float Distance;  // Offset: 16 Size: 4
	struct FVector position;  // Offset: 20 Size: 12
	struct FVector Normal;  // Offset: 32 Size: 12
	enum class EFieldFalloffType Falloff;  // Offset: 44 Size: 1
	char pad_45[3];  // Offset: 45 Size: 3
	struct UPlaneFalloff* ReturnValue;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.UniformVector.SetUniformVector Size 24
class FSetUniformVector
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	struct FVector Direction;  // Offset: 4 Size: 12
	struct UUniformVector* ReturnValue;  // Offset: 16 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.RandomVector.SetRandomVector Size 16
class FSetRandomVector
{

 public: 
	float Magnitude;  // Offset: 0 Size: 4
	char pad_4[4];  // Offset: 4 Size: 4
	struct URandomVector* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.ToIntegerField.SetToIntegerField Size 16
class FSetToIntegerField
{

 public: 
	struct UFieldNodeFloat* FloatField;  // Offset: 0 Size: 8
	struct UToIntegerField* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.ToFloatField.SetToFloatField Size 16
class FSetToFloatField
{

 public: 
	struct UFieldNodeInt* IntegerField;  // Offset: 0 Size: 8
	struct UToFloatField* ReturnValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //Function FieldSystemEngine.CullingField.SetCullingField Size 32
class FSetCullingField
{

 public: 
	struct UFieldNodeBase* Culling;  // Offset: 0 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 8 Size: 8
	enum class EFieldCullingOperationType Operation;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	struct UCullingField* ReturnValue;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 