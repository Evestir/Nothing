#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
class FChaosBreakingEventData
{
public:
	FChaosBreakingEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 24);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeomComponentCacheParameters
{
public:
	FGeomComponentCacheParameters(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	enum class EGeometryCollectionCacheType GetCacheMode() {
		return memory.read<enum class EGeometryCollectionCacheType>(m_addr + 0);
	}
	struct UGeometryCollectionCache GetTargetCache() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UGeometryCollectionCache(ptr_addr);
	}
	float GetReverseCacheBeginTime() {
		return memory.read<float>(m_addr + 16);
	}
	bool GetSaveCollisionData() {
		return memory.read<bool>(m_addr + 20);
	}
	bool GetDoGenerateCollisionData() {
		return memory.read<bool>(m_addr + 21);
	}
	int32_t GetCollisionDataSizeMax() {
		return memory.read<int32_t>(m_addr + 24);
	}
	bool GetDoCollisionDataSpatialHash() {
		return memory.read<bool>(m_addr + 28);
	}
	float GetCollisionDataSpatialHashRadius() {
		return memory.read<float>(m_addr + 32);
	}
	int32_t GetMaxCollisionPerCell() {
		return memory.read<int32_t>(m_addr + 36);
	}
	bool GetSaveBreakingData() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetDoGenerateBreakingData() {
		return memory.read<bool>(m_addr + 41);
	}
	int32_t GetBreakingDataSizeMax() {
		return memory.read<int32_t>(m_addr + 44);
	}
	bool GetDoBreakingDataSpatialHash() {
		return memory.read<bool>(m_addr + 48);
	}
	float GetBreakingDataSpatialHashRadius() {
		return memory.read<float>(m_addr + 52);
	}
	int32_t GetMaxBreakingPerCell() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetSaveTrailingData() {
		return memory.read<bool>(m_addr + 60);
	}
	bool GetDoGenerateTrailingData() {
		return memory.read<bool>(m_addr + 61);
	}
	int32_t GetTrailingDataSizeMax() {
		return memory.read<int32_t>(m_addr + 64);
	}
	float GetTrailingMinSpeedThreshold() {
		return memory.read<float>(m_addr + 68);
	}
	float GetTrailingMinVolumeThreshold() {
		return memory.read<float>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChaosCollisionEvents__DelegateSignature
{
public:
	FOnChaosCollisionEvents__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosCollisionEventData> GetCollisionEvents() {
		return memory.read<struct TArray<struct FChaosCollisionEventData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosTrailingEventRequestSettings
{
public:
	FChaosTrailingEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNumberOfResults() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinAngularSpeed() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 16);
	}
	enum class EChaosTrailingSortMethod GetSortMethod() {
		return memory.read<enum class EChaosTrailingSortMethod>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosCollisionEventData
{
public:
	FChaosCollisionEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetVelocity1() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	struct FVector GetVelocity2() {
		return memory.read<struct FVector>(m_addr + 36);
	}
	float GetMass1() {
		return memory.read<float>(m_addr + 48);
	}
	float GetMass2() {
		return memory.read<float>(m_addr + 52);
	}
	struct FVector GetImpulse() {
		return memory.read<struct FVector>(m_addr + 56);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosTrailingEventData
{
public:
	FChaosTrailingEventData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetLocation() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetVelocity() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FVector GetAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 24);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 36);
	}
	int32_t GetParticleIndex() {
		return memory.read<int32_t>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChaosBreakingEvents__DelegateSignature
{
public:
	FOnChaosBreakingEvents__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosBreakingEventData> GetBreakingEvents() {
		return memory.read<struct TArray<struct FChaosBreakingEventData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChaosBreakEvent__DelegateSignature
{
public:
	FOnChaosBreakEvent__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosBreakEvent GetBreakEvent() {
		return memory.read<struct FChaosBreakEvent>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBreakingEventRequestSettings
{
public:
	FSetBreakingEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosBreakingEventRequestSettings GetInSettings() {
		return memory.read<struct FChaosBreakingEventRequestSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnChaosTrailingEvents__DelegateSignature
{
public:
	FOnChaosTrailingEvents__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosTrailingEventData> GetTrailingEvents() {
		return memory.read<struct TArray<struct FChaosTrailingEventData>>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortTrailingEvents
{
public:
	FSortTrailingEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosTrailingEventData> GetTrailingEvents() {
		return memory.read<struct TArray<struct FChaosTrailingEventData>>(m_addr + 0);
	}
	enum class EChaosTrailingSortMethod GetSortMethod() {
		return memory.read<enum class EChaosTrailingSortMethod>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyKinematicField
{
public:
	FApplyKinematicField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetRadius() {
		return memory.read<float>(m_addr + 0);
	}
	struct FVector Getposition() {
		return memory.read<struct FVector>(m_addr + 4);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeometryCollectionSizeSpecificData
{
public:
	FGeometryCollectionSizeSpecificData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetMaxSize() {
		return memory.read<float>(m_addr + 0);
	}
	enum class ECollisionTypeEnum GetCollisionType() {
		return memory.read<enum class ECollisionTypeEnum>(m_addr + 4);
	}
	enum class EImplicitTypeEnum GetImplicitType() {
		return memory.read<enum class EImplicitTypeEnum>(m_addr + 5);
	}
	int32_t GetMinLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 8);
	}
	int32_t GetMaxLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 12);
	}
	int32_t GetMinClusterLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 16);
	}
	int32_t GetMaxClusterLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 20);
	}
	int32_t GetCollisionObjectReductionPercentage() {
		return memory.read<int32_t>(m_addr + 24);
	}
	float GetCollisionParticlesFraction() {
		return memory.read<float>(m_addr + 28);
	}
	int32_t GetMaximumCollisionParticles() {
		return memory.read<int32_t>(m_addr + 32);
	}

private:
	std::uint64_t m_addr = 0;
};class FApplyPhysicsField
{
public:
	FApplyPhysicsField(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnabled() {
		return memory.read<bool>(m_addr + 0);
	}
	enum class EGeometryCollectionPhysicsTypeEnum GetTarget() {
		return memory.read<enum class EGeometryCollectionPhysicsTypeEnum>(m_addr + 1);
	}
	struct UFieldSystemMetaData GetMetaData() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct UFieldSystemMetaData(ptr_addr);
	}
	struct UFieldNodeBase GetField() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct UFieldNodeBase(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FNetAbandonCluster
{
public:
	FNetAbandonCluster(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetTransformIndex() {
		return memory.read<int32_t>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeometryCollectionDebugDrawWarningMessage
{
public:
	FGeometryCollectionDebugDrawWarningMessage(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
{
public:
	FNotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCollectionComponent GetFracturedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGeometryCollectionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrailingEventRequestSettings
{
public:
	FSetTrailingEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosTrailingEventRequestSettings GetInSettings() {
		return memory.read<struct FChaosTrailingEventRequestSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature
{
public:
	FNotifyGeometryCollectionPhysicsStateChange__DelegateSignature(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCollectionComponent GetFracturedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct UGeometryCollectionComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FOnRep_RepData
{
public:
	FOnRep_RepData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometryCollectionRepData GetOldData() {
		return memory.read<struct FGeometryCollectionRepData>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeometryCollectionRepData
{
public:
	FGeometryCollectionRepData(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};class FSetCollisionEventRequestSettings
{
public:
	FSetCollisionEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosCollisionEventRequestSettings GetInSettings() {
		return memory.read<struct FChaosCollisionEventRequestSettings>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FReceivePhysicsCollision
{
public:
	FReceivePhysicsCollision(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FChaosPhysicsCollisionInfo GetCollisionInfo() {
		return memory.read<struct FChaosPhysicsCollisionInfo>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetNotifyBreaks
{
public:
	FSetNotifyBreaks(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbNewNotifyBreaks() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosBreakingEventRequestSettings
{
public:
	FChaosBreakingEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNumberOfResults() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetMinRadius() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 16);
	}
	enum class EChaosBreakingSortMethod GetSortMethod() {
		return memory.read<enum class EChaosBreakingSortMethod>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FChaosCollisionEventRequestSettings
{
public:
	FChaosCollisionEventRequestSettings(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetMaxNumberResults() {
		return memory.read<int32_t>(m_addr + 0);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 4);
	}
	float GetMinSpeed() {
		return memory.read<float>(m_addr + 8);
	}
	float GetMinImpulse() {
		return memory.read<float>(m_addr + 12);
	}
	float GetMaxDistance() {
		return memory.read<float>(m_addr + 16);
	}
	enum class EChaosCollisionSortMethod GetSortMethod() {
		return memory.read<enum class EChaosCollisionSortMethod>(m_addr + 20);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeometryCollectionDebugDrawActorSelectedRigidBody
{
public:
	FGeometryCollectionDebugDrawActorSelectedRigidBody(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	int32_t GetID() {
		return memory.read<int32_t>(m_addr + 0);
	}
	struct AChaosSolverActor GetSolver() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 8);
		return struct AChaosSolverActor(ptr_addr);
	}
	struct AGeometryCollectionActor GetGeometryCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 16);
		return struct AGeometryCollectionActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FGeometryCollectionSource
{
public:
	FGeometryCollectionSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FSoftObjectPath GetSourceGeometryObject() {
		return memory.read<struct FSoftObjectPath>(m_addr + 0);
	}
	struct FTransform GetLocalTransform() {
		return memory.read<struct FTransform>(m_addr + 32);
	}
	struct TArray<struct UMaterialInterface> GetSourceMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddChaosSolverActor
{
public:
	FAddChaosSolverActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AChaosSolverActor GetChaosSolverActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AChaosSolverActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FAddGeometryCollectionActor
{
public:
	FAddGeometryCollectionActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGeometryCollectionActor GetGeometryCollectionActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGeometryCollectionActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FIsEventListening
{
public:
	FIsEventListening(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveChaosSolverActor
{
public:
	FRemoveChaosSolverActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AChaosSolverActor GetChaosSolverActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AChaosSolverActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FRemoveGeometryCollectionActor
{
public:
	FRemoveGeometryCollectionActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGeometryCollectionActor GetGeometryCollectionActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 0);
		return struct AGeometryCollectionActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetBreakingEventEnabled
{
public:
	FSetBreakingEventEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetCollisionEventEnabled
{
public:
	FSetCollisionEventEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSetTrailingEventEnabled
{
public:
	FSetTrailingEventEnabled(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbIsEnabled() {
		return memory.read<bool>(m_addr + 0);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortBreakingEvents
{
public:
	FSortBreakingEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosBreakingEventData> GetBreakingEvents() {
		return memory.read<struct TArray<struct FChaosBreakingEventData>>(m_addr + 0);
	}
	enum class EChaosBreakingSortMethod GetSortMethod() {
		return memory.read<enum class EChaosBreakingSortMethod>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FSortCollisionEvents
{
public:
	FSortCollisionEvents(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FChaosCollisionEventData> GetCollisionEvents() {
		return memory.read<struct TArray<struct FChaosCollisionEventData>>(m_addr + 0);
	}
	enum class EChaosCollisionSortMethod GetSortMethod() {
		return memory.read<enum class EChaosCollisionSortMethod>(m_addr + 16);
	}

private:
	std::uint64_t m_addr = 0;
};class FRaycastSingle
{
public:
	FRaycastSingle(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetStart() {
		return memory.read<struct FVector>(m_addr + 0);
	}
	struct FVector GetEnd() {
		return memory.read<struct FVector>(m_addr + 12);
	}
	struct FHitResult GetOutHit() {
		return memory.read<struct FHitResult>(m_addr + 24);
	}
	bool GetReturnValue() {
		return memory.read<bool>(m_addr + 160);
	}

private:
	std::uint64_t m_addr = 0;
};