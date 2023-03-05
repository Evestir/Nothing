#pragma once 
#include <ChaosSolverEngine_Structs.h>
 
 
 
//Class ChaosSolverEngine.ChaosDebugDrawComponent Size 184
// Inherited 176 bytes 
class UChaosDebugDrawComponent : public UActorComponent
{

 public: 
	char pad_176[8];  // Offset: 176 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosSolverActor Size 792
// Inherited 544 bytes 
class AChaosSolverActor : public AActor
{

 public: 
	struct FChaosSolverConfiguration Properties;  // Offset: 544 Size: 104
	float TimeStepMultiplier;  // Offset: 648 Size: 4
	int32_t CollisionIterations;  // Offset: 652 Size: 4
	int32_t PushOutIterations;  // Offset: 656 Size: 4
	int32_t PushOutPairIterations;  // Offset: 660 Size: 4
	float ClusterConnectionFactor;  // Offset: 664 Size: 4
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType;  // Offset: 668 Size: 1
	char pad_669_1 : 7;  // Offset: 669 Size: 1
	bool DoGenerateCollisionData : 1;  // Offset: 669 Size: 1
	char pad_670[2];  // Offset: 670 Size: 2
	struct FSolverCollisionFilterSettings CollisionFilterSettings;  // Offset: 672 Size: 16
	char pad_688_1 : 7;  // Offset: 688 Size: 1
	bool DoGenerateBreakingData : 1;  // Offset: 688 Size: 1
	char pad_689[3];  // Offset: 689 Size: 3
	struct FSolverBreakingFilterSettings BreakingFilterSettings;  // Offset: 692 Size: 16
	char pad_708_1 : 7;  // Offset: 708 Size: 1
	bool DoGenerateTrailingData : 1;  // Offset: 708 Size: 1
	char pad_709[3];  // Offset: 709 Size: 3
	struct FSolverTrailingFilterSettings TrailingFilterSettings;  // Offset: 712 Size: 16
	float MassScale;  // Offset: 728 Size: 4
	char pad_732_1 : 7;  // Offset: 732 Size: 1
	bool bGenerateContactGraph : 1;  // Offset: 732 Size: 1
	char pad_733_1 : 7;  // Offset: 733 Size: 1
	bool bHasFloor : 1;  // Offset: 733 Size: 1
	char pad_734[2];  // Offset: 734 Size: 2
	float FloorHeight;  // Offset: 736 Size: 4
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl;  // Offset: 740 Size: 3
	char pad_743[1];  // Offset: 743 Size: 1
	struct UBillboardComponent* SpriteComponent;  // Offset: 744 Size: 8
	char pad_752[24];  // Offset: 752 Size: 24
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent;  // Offset: 776 Size: 8
	char pad_784[8];  // Offset: 784 Size: 8



 // Functions 
 public:
	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
}; 
 
 


//Class ChaosSolverEngine.ChaosEventListenerComponent Size 184
// Inherited 176 bytes 
class UChaosEventListenerComponent : public UActorComponent
{

 public: 
	char pad_176[8];  // Offset: 176 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosSolver Size 40
// Inherited 40 bytes 
class UChaosSolver : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosGameplayEventDispatcher Size 624
// Inherited 184 bytes 
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{

 public: 
	char pad_184[272];  // Offset: 184 Size: 272
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations;  // Offset: 456 Size: 80
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations;  // Offset: 536 Size: 80
	char pad_616[8];  // Offset: 616 Size: 8



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosSolverSettings Size 88
// Inherited 56 bytes 
class UChaosSolverSettings : public UDeveloperSettings
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct FSoftClassPath DefaultChaosSolverActorClass;  // Offset: 64 Size: 24



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosNotifyHandlerInterface Size 40
// Inherited 40 bytes 
class UChaosNotifyHandlerInterface : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary Size 40
// Inherited 40 bytes 
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo& PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
}; 
 
 


