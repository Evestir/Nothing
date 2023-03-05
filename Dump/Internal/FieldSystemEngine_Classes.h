#pragma once 
#include <FieldSystemEngine_Structs.h>
 
 
 
//Class FieldSystemEngine.FieldSystemMetaDataIteration Size 184
// Inherited 176 bytes 
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{

 public: 
	int32_t Iterations;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
}; 
 
 


//Class FieldSystemEngine.FieldSystemActor Size 552
// Inherited 544 bytes 
class AFieldSystemActor : public AActor
{

 public: 
	struct UFieldSystemComponent* FieldSystemComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.FieldSystem Size 56
// Inherited 40 bytes 
class UFieldSystem : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.FieldSystemComponent Size 1344
// Inherited 1136 bytes 
class UFieldSystemComponent : public UPrimitiveComponent
{

 public: 
	struct UFieldSystem* FieldSystem;  // Offset: 1136 Size: 8
	char pad_1144_1 : 7;  // Offset: 1144 Size: 1
	bool bIsWorldField : 1;  // Offset: 1144 Size: 1
	char pad_1145_1 : 7;  // Offset: 1145 Size: 1
	bool bIsChaosField : 1;  // Offset: 1145 Size: 1
	char pad_1146[6];  // Offset: 1146 Size: 6
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;  // Offset: 1152 Size: 16
	struct FFieldObjectCommands ConstructionCommands;  // Offset: 1168 Size: 48
	struct FFieldObjectCommands BufferCommands;  // Offset: 1216 Size: 48
	char pad_1264[80];  // Offset: 1264 Size: 80



 // Functions 
 public:
	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
	void RemovePersistentFields(); // Function FieldSystemEngine.FieldSystemComponent.RemovePersistentFields
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
	void ApplyStrainField(bool Enabled, struct FVector position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
	void ApplyStayDynamicField(bool Enabled, struct FVector position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
	void ApplyRadialForce(bool Enabled, struct FVector position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddPersistentField
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
}; 
 
 


//Class FieldSystemEngine.FieldSystemMetaData Size 176
// Inherited 176 bytes 
class UFieldSystemMetaData : public UActorComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution Size 184
// Inherited 176 bytes 
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{

 public: 
	enum class EFieldResolutionType ResolutionType;  // Offset: 176 Size: 1
	char pad_177[7];  // Offset: 177 Size: 7



 // Functions 
 public:
	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
}; 
 
 


//Class FieldSystemEngine.FieldSystemMetaDataFilter Size 184
// Inherited 176 bytes 
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{

 public: 
	enum class EFieldFilterType FilterType;  // Offset: 176 Size: 1
	char pad_177[7];  // Offset: 177 Size: 7



 // Functions 
 public:
	struct UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType); // Function FieldSystemEngine.FieldSystemMetaDataFilter.SetMetaDataFilterType
}; 
 
 


//Class FieldSystemEngine.FieldNodeBase Size 176
// Inherited 176 bytes 
class UFieldNodeBase : public UActorComponent
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.UniformVector Size 192
// Inherited 176 bytes 
class UUniformVector : public UFieldNodeVector
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	struct FVector Direction;  // Offset: 180 Size: 12



 // Functions 
 public:
	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector
}; 
 
 


//Class FieldSystemEngine.FieldNodeInt Size 176
// Inherited 176 bytes 
class UFieldNodeInt : public UFieldNodeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.FieldNodeFloat Size 176
// Inherited 176 bytes 
class UFieldNodeFloat : public UFieldNodeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.FieldNodeVector Size 176
// Inherited 176 bytes 
class UFieldNodeVector : public UFieldNodeBase
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class FieldSystemEngine.UniformInteger Size 184
// Inherited 176 bytes 
class UUniformInteger : public UFieldNodeInt
{

 public: 
	int32_t Magnitude;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger
}; 
 
 


//Class FieldSystemEngine.RadialIntMask Size 208
// Inherited 176 bytes 
class URadialIntMask : public UFieldNodeInt
{

 public: 
	float Radius;  // Offset: 176 Size: 4
	struct FVector position;  // Offset: 180 Size: 12
	int32_t InteriorValue;  // Offset: 192 Size: 4
	int32_t ExteriorValue;  // Offset: 196 Size: 4
	enum class ESetMaskConditionType SetMaskCondition;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7



 // Functions 
 public:
	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
}; 
 
 


//Class FieldSystemEngine.UniformScalar Size 184
// Inherited 176 bytes 
class UUniformScalar : public UFieldNodeFloat
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar
}; 
 
 


//Class FieldSystemEngine.WaveScalar Size 208
// Inherited 176 bytes 
class UWaveScalar : public UFieldNodeFloat
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	struct FVector position;  // Offset: 180 Size: 12
	float Wavelength;  // Offset: 192 Size: 4
	float Period;  // Offset: 196 Size: 4
	enum class EWaveFunctionType Function;  // Offset: 200 Size: 1
	enum class EFieldFalloffType Falloff;  // Offset: 201 Size: 1
	char pad_202[6];  // Offset: 202 Size: 6



 // Functions 
 public:
	struct UWaveScalar* SetWaveScalar(float Magnitude, struct FVector position, float Wavelength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.WaveScalar.SetWaveScalar
}; 
 
 


//Class FieldSystemEngine.RadialFalloff Size 216
// Inherited 176 bytes 
class URadialFalloff : public UFieldNodeFloat
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	float MinRange;  // Offset: 180 Size: 4
	float MaxRange;  // Offset: 184 Size: 4
	float Default;  // Offset: 188 Size: 4
	float Radius;  // Offset: 192 Size: 4
	struct FVector position;  // Offset: 196 Size: 12
	enum class EFieldFalloffType Falloff;  // Offset: 208 Size: 1
	char pad_209[7];  // Offset: 209 Size: 7



 // Functions 
 public:
	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
}; 
 
 


//Class FieldSystemEngine.PlaneFalloff Size 224
// Inherited 176 bytes 
class UPlaneFalloff : public UFieldNodeFloat
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	float MinRange;  // Offset: 180 Size: 4
	float MaxRange;  // Offset: 184 Size: 4
	float Default;  // Offset: 188 Size: 4
	float Distance;  // Offset: 192 Size: 4
	struct FVector position;  // Offset: 196 Size: 12
	struct FVector Normal;  // Offset: 208 Size: 12
	enum class EFieldFalloffType Falloff;  // Offset: 220 Size: 1
	char pad_221[3];  // Offset: 221 Size: 3



 // Functions 
 public:
	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
}; 
 
 


//Class FieldSystemEngine.BoxFalloff Size 256
// Inherited 176 bytes 
class UBoxFalloff : public UFieldNodeFloat
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	float MinRange;  // Offset: 180 Size: 4
	float MaxRange;  // Offset: 184 Size: 4
	float Default;  // Offset: 188 Size: 4
	struct FTransform Transform;  // Offset: 192 Size: 48
	enum class EFieldFalloffType Falloff;  // Offset: 240 Size: 1
	char pad_241[15];  // Offset: 241 Size: 15



 // Functions 
 public:
	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
}; 
 
 


//Class FieldSystemEngine.NoiseField Size 240
// Inherited 176 bytes 
class UNoiseField : public UFieldNodeFloat
{

 public: 
	float MinRange;  // Offset: 176 Size: 4
	float MaxRange;  // Offset: 180 Size: 4
	char pad_184[8];  // Offset: 184 Size: 8
	struct FTransform Transform;  // Offset: 192 Size: 48



 // Functions 
 public:
	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField
}; 
 
 


//Class FieldSystemEngine.RadialVector Size 192
// Inherited 176 bytes 
class URadialVector : public UFieldNodeVector
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	struct FVector position;  // Offset: 180 Size: 12



 // Functions 
 public:
	struct URadialVector* SetRadialVector(float Magnitude, struct FVector position); // Function FieldSystemEngine.RadialVector.SetRadialVector
}; 
 
 


//Class FieldSystemEngine.RandomVector Size 184
// Inherited 176 bytes 
class URandomVector : public UFieldNodeVector
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4



 // Functions 
 public:
	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector
}; 
 
 


//Class FieldSystemEngine.OperatorField Size 208
// Inherited 176 bytes 
class UOperatorField : public UFieldNodeBase
{

 public: 
	float Magnitude;  // Offset: 176 Size: 4
	char pad_180[4];  // Offset: 180 Size: 4
	struct UFieldNodeBase* RightField;  // Offset: 184 Size: 8
	struct UFieldNodeBase* LeftField;  // Offset: 192 Size: 8
	enum class EFieldOperationType Operation;  // Offset: 200 Size: 1
	char pad_201[7];  // Offset: 201 Size: 7



 // Functions 
 public:
	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* LeftField, struct UFieldNodeBase* RightField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField
}; 
 
 


//Class FieldSystemEngine.ToIntegerField Size 184
// Inherited 176 bytes 
class UToIntegerField : public UFieldNodeInt
{

 public: 
	struct UFieldNodeFloat* FloatField;  // Offset: 176 Size: 8



 // Functions 
 public:
	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField
}; 
 
 


//Class FieldSystemEngine.ToFloatField Size 184
// Inherited 176 bytes 
class UToFloatField : public UFieldNodeFloat
{

 public: 
	struct UFieldNodeInt* IntField;  // Offset: 176 Size: 8



 // Functions 
 public:
	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField
}; 
 
 


//Class FieldSystemEngine.CullingField Size 200
// Inherited 176 bytes 
class UCullingField : public UFieldNodeBase
{

 public: 
	struct UFieldNodeBase* Culling;  // Offset: 176 Size: 8
	struct UFieldNodeBase* Field;  // Offset: 184 Size: 8
	enum class EFieldCullingOperationType Operation;  // Offset: 192 Size: 1
	char pad_193[7];  // Offset: 193 Size: 7



 // Functions 
 public:
	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField
}; 
 
 


//Class FieldSystemEngine.ReturnResultsTerminal Size 176
// Inherited 176 bytes 
class UReturnResultsTerminal : public UFieldNodeBase
{

 public: 



 // Functions 
 public:
	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal
}; 
 
 


