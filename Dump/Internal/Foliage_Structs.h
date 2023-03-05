#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//DelegateFunction Foliage.InstancePointDamageSignature__DelegateSignature Size 56
class FInstancePointDamageSignature__DelegateSignature
{

 public: 
	int32_t InstanceIndex;  // Offset: 0 Size: 4
	float Damage;  // Offset: 4 Size: 4
	struct AController* InstigatedBy;  // Offset: 8 Size: 8
	struct FVector HitLocation;  // Offset: 16 Size: 12
	struct FVector ShotFromDirection;  // Offset: 28 Size: 12
	struct UDamageType* DamageType;  // Offset: 40 Size: 8
	struct AActor* DamageCauser;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 //Function Foliage.ProceduralFoliageSpawner.Simulate Size 4
class FSimulate
{

 public: 
	int32_t NumSteps;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount Size 48
class FFoliageOverlappingBoxCount
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UStaticMesh* StaticMesh;  // Offset: 8 Size: 8
	struct FBox Box;  // Offset: 16 Size: 28
	int32_t ReturnValue;  // Offset: 44 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Foliage.FoliageTypeObject Size 32
class FFoliageTypeObject
{

 public: 
	struct UObject* FoliageTypeObject;  // Offset: 0 Size: 8
	struct UFoliageType* TypeInstance;  // Offset: 8 Size: 8
	char pad_16_1 : 7;  // Offset: 16 Size: 1
	bool bIsAsset : 1;  // Offset: 16 Size: 1
	char pad_17[7];  // Offset: 17 Size: 7
	UFoliageType_InstancedStaticMesh* Type;  // Offset: 24 Size: 8



 // Functions 
 public:
}; 
 
 //DelegateFunction Foliage.InstanceRadialDamageSignature__DelegateSignature Size 72
class FInstanceRadialDamageSignature__DelegateSignature
{

 public: 
	struct TArray<int32_t> Instances;  // Offset: 0 Size: 16
	struct TArray<float> Damages;  // Offset: 16 Size: 16
	struct AController* InstigatedBy;  // Offset: 32 Size: 8
	struct FVector Origin;  // Offset: 40 Size: 12
	float MaxRadius;  // Offset: 52 Size: 4
	struct UDamageType* DamageType;  // Offset: 56 Size: 8
	struct AActor* DamageCauser;  // Offset: 64 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct Foliage.FoliageVertexColorChannelMask Size 12
class FFoliageVertexColorChannelMask
{

 public: 
	char UseMask : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	float MaskThreshold;  // Offset: 4 Size: 4
	char InvertMask : 1;  // Offset: 8 Size: 1
	char pad_8_1 : 7;  // Offset: 8 Size: 1
	char pad_9[4];  // Offset: 9 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct Foliage.ProceduralFoliageInstance Size 80
class FProceduralFoliageInstance
{

 public: 
	struct FQuat Rotation;  // Offset: 0 Size: 16
	struct FVector Location;  // Offset: 16 Size: 12
	float Age;  // Offset: 28 Size: 4
	struct FVector Normal;  // Offset: 32 Size: 12
	float Scale;  // Offset: 44 Size: 4
	struct UFoliageType* Type;  // Offset: 48 Size: 8
	char pad_56[24];  // Offset: 56 Size: 24



 // Functions 
 public:
}; 
 
 //Function Foliage.InteractiveFoliageActor.CapsuleTouched Size 168
class FCapsuleTouched
{

 public: 
	struct UPrimitiveComponent* OverlappedComp;  // Offset: 0 Size: 8
	struct AActor* Other;  // Offset: 8 Size: 8
	struct UPrimitiveComponent* OtherComp;  // Offset: 16 Size: 8
	int32_t OtherBodyIndex;  // Offset: 24 Size: 4
	char pad_28_1 : 7;  // Offset: 28 Size: 1
	bool bFromSweep : 1;  // Offset: 28 Size: 1
	char pad_29[3];  // Offset: 29 Size: 3
	struct FHitResult OverlapInfo;  // Offset: 32 Size: 136



 // Functions 
 public:
}; 
 
 //Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount Size 40
class FFoliageOverlappingSphereCount
{

 public: 
	struct UObject* WorldContextObject;  // Offset: 0 Size: 8
	struct UStaticMesh* StaticMesh;  // Offset: 8 Size: 8
	struct FVector CenterPosition;  // Offset: 16 Size: 12
	float Radius;  // Offset: 28 Size: 4
	int32_t ReturnValue;  // Offset: 32 Size: 4
	char pad_36[4];  // Offset: 36 Size: 4



 // Functions 
 public:
}; 
 
 