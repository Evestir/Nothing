#pragma once 
#include <CableComponent_Structs.h>
 
 
 
//Class CableComponent.CableActor Size 552
// Inherited 544 bytes 
class ACableActor : public AActor
{

 public: 
	struct UCableComponent* CableComponent;  // Offset: 544 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CableComponent.CableComponent Size 1344
// Inherited 1200 bytes 
class UCableComponent : public UMeshComponent
{

 public: 
	char pad_1200_1 : 7;  // Offset: 1200 Size: 1
	bool bAttachStart : 1;  // Offset: 1192 Size: 1
	char pad_1201_1 : 7;  // Offset: 1201 Size: 1
	bool bAttachEnd : 1;  // Offset: 1193 Size: 1
	struct FComponentReference AttachEndTo;  // Offset: 1200 Size: 40
	struct FName AttachEndToSocketName;  // Offset: 1240 Size: 8
	struct FVector EndLocation;  // Offset: 1248 Size: 12
	float CableLength;  // Offset: 1260 Size: 4
	int32_t NumSegments;  // Offset: 1264 Size: 4
	float SubstepTime;  // Offset: 1268 Size: 4
	int32_t SolverIterations;  // Offset: 1272 Size: 4
	char pad_1278_1 : 7;  // Offset: 1278 Size: 1
	bool bEnableStiffness : 1;  // Offset: 1276 Size: 1
	char pad_1279_1 : 7;  // Offset: 1279 Size: 1
	bool bUseSubstepping : 1;  // Offset: 1277 Size: 1
	char pad_1280_1 : 7;  // Offset: 1280 Size: 1
	bool bSkipCableUpdateWhenNotVisible : 1;  // Offset: 1278 Size: 1
	char pad_1281_1 : 7;  // Offset: 1281 Size: 1
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered : 1;  // Offset: 1279 Size: 1
	char pad_1282_1 : 7;  // Offset: 1282 Size: 1
	bool bEnableCollision : 1;  // Offset: 1280 Size: 1
	char pad_1283[1];  // Offset: 1283 Size: 1
	float CollisionFriction;  // Offset: 1284 Size: 4
	struct FVector CableForce;  // Offset: 1288 Size: 12
	float CableGravityScale;  // Offset: 1300 Size: 4
	float CableWidth;  // Offset: 1304 Size: 4
	int32_t NumSides;  // Offset: 1308 Size: 4
	float TileMaterial;  // Offset: 1312 Size: 4
	char pad_1316[28];  // Offset: 1316 Size: 28



 // Functions 
 public:
	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor
}; 
 
 


