#pragma once 
#include <GeometryCollectionEngine_Structs.h>
 
 
 
class UGeometryCollection
{
public:
	UGeometryCollection(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetEnableClustering() {
		return memory.read<bool>(m_addr + 48);
	}
	int32_t GetClusterGroupIndex() {
		return memory.read<int32_t>(m_addr + 52);
	}
	int32_t GetMaxClusterLevel() {
		return memory.read<int32_t>(m_addr + 56);
	}
	struct TArray<float> GetDamageThreshold() {
		return memory.read<struct TArray<float>>(m_addr + 64);
	}
	enum class EClusterConnectionTypeEnum GetClusterConnectionType() {
		return memory.read<enum class EClusterConnectionTypeEnum>(m_addr + 80);
	}
	struct TArray<struct FGeometryCollectionSource> GetGeometrySource() {
		return memory.read<struct TArray<struct FGeometryCollectionSource>>(m_addr + 88);
	}
	struct TArray<struct UMaterialInterface> GetMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	enum class ECollisionTypeEnum GetCollisionType() {
		return memory.read<enum class ECollisionTypeEnum>(m_addr + 120);
	}
	enum class EImplicitTypeEnum GetImplicitType() {
		return memory.read<enum class EImplicitTypeEnum>(m_addr + 121);
	}
	int32_t GetMinLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 124);
	}
	int32_t GetMaxLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 128);
	}
	int32_t GetMinClusterLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 132);
	}
	int32_t GetMaxClusterLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 136);
	}
	float GetCollisionObjectReductionPercentage() {
		return memory.read<float>(m_addr + 140);
	}
	bool GetbMassAsDensity() {
		return memory.read<bool>(m_addr + 144);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 148);
	}
	float GetMinimumMassClamp() {
		return memory.read<float>(m_addr + 152);
	}
	float GetCollisionParticlesFraction() {
		return memory.read<float>(m_addr + 156);
	}
	int32_t GetMaximumCollisionParticles() {
		return memory.read<int32_t>(m_addr + 160);
	}
	struct TArray<struct FGeometryCollectionSizeSpecificData> GetSizeSpecificData() {
		return memory.read<struct TArray<struct FGeometryCollectionSizeSpecificData>>(m_addr + 168);
	}
	bool GetEnableRemovePiecesOnFracture() {
		return memory.read<bool>(m_addr + 184);
	}
	struct TArray<struct UMaterialInterface> GetRemoveOnFractureMaterials() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct TArray<struct UMaterialInterface>(ptr_addr);
	}
	struct FGuid GetPersistentGuid() {
		return memory.read<struct FGuid>(m_addr + 208);
	}
	struct FGuid GetStateGuid() {
		return memory.read<struct FGuid>(m_addr + 224);
	}
	int32_t GetBoneSelectedMaterialIndex() {
		return memory.read<int32_t>(m_addr + 240);
	}

private:
	std::uint64_t m_addr = 0;
};


class UChaosDestructionListener
{
public:
	UChaosDestructionListener(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	char GetbIsCollisionEventListeningEnabled() {
		return memory.read<char>(m_addr + 520);
	}
	char GetbIsBreakingEventListeningEnabled() {
		return memory.read<char>(m_addr + 520);
	}
	char GetbIsTrailingEventListeningEnabled() {
		return memory.read<char>(m_addr + 520);
	}
	struct FChaosCollisionEventRequestSettings GetCollisionEventRequestSettings() {
		return memory.read<struct FChaosCollisionEventRequestSettings>(m_addr + 524);
	}
	struct FChaosBreakingEventRequestSettings GetBreakingEventRequestSettings() {
		return memory.read<struct FChaosBreakingEventRequestSettings>(m_addr + 548);
	}
	struct FChaosTrailingEventRequestSettings GetTrailingEventRequestSettings() {
		return memory.read<struct FChaosTrailingEventRequestSettings>(m_addr + 572);
	}
	struct TSet<struct AChaosSolverActor> GetChaosSolverActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct TSet<struct AChaosSolverActor>(ptr_addr);
	}
	struct TSet<struct AGeometryCollectionActor> GetGeometryCollectionActors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 680);
		return struct TSet<struct AGeometryCollectionActor>(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnCollisionEvents() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 760);
	}
	struct FMulticastInlineDelegate GetOnBreakingEvents() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 776);
	}
	struct FMulticastInlineDelegate GetOnTrailingEvents() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 792);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCollectionDebugDrawComponent
{
public:
	UGeometryCollectionDebugDrawComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AGeometryCollectionDebugDrawActor GetGeometryCollectionDebugDrawActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 176);
		return struct AGeometryCollectionDebugDrawActor(ptr_addr);
	}
	struct AGeometryCollectionRenderLevelSetActor GetGeometryCollectionRenderLevelSetActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct AGeometryCollectionRenderLevelSetActor(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGeometryCollectionActor
{
public:
	AGeometryCollectionActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGeometryCollectionComponent GetGeometryCollectionComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UGeometryCollectionComponent(ptr_addr);
	}
	struct UGeometryCollectionDebugDrawComponent GetGeometryCollectionDebugDrawComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UGeometryCollectionDebugDrawComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UStaticMeshSimulationComponent
{
public:
	UStaticMeshSimulationComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetSimulating() {
		return memory.read<bool>(m_addr + 184);
	}
	bool GetbNotifyCollisions() {
		return memory.read<bool>(m_addr + 185);
	}
	enum class EObjectStateTypeEnum GetObjectType() {
		return memory.read<enum class EObjectStateTypeEnum>(m_addr + 186);
	}
	float GetMass() {
		return memory.read<float>(m_addr + 188);
	}
	enum class ECollisionTypeEnum GetCollisionType() {
		return memory.read<enum class ECollisionTypeEnum>(m_addr + 192);
	}
	enum class EImplicitTypeEnum GetImplicitType() {
		return memory.read<enum class EImplicitTypeEnum>(m_addr + 193);
	}
	int32_t GetMinLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 196);
	}
	int32_t GetMaxLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 200);
	}
	enum class EInitialVelocityTypeEnum GetInitialVelocityType() {
		return memory.read<enum class EInitialVelocityTypeEnum>(m_addr + 204);
	}
	struct FVector GetInitialLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 208);
	}
	struct FVector GetInitialAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 220);
	}
	float GetDamageThreshold() {
		return memory.read<float>(m_addr + 232);
	}
	struct UChaosPhysicalMaterial GetPhysicalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 240);
		return struct UChaosPhysicalMaterial(ptr_addr);
	}
	struct AChaosSolverActor GetChaosSolverActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 248);
		return struct AChaosSolverActor(ptr_addr);
	}
	struct FMulticastInlineDelegate GetOnChaosPhysicsCollision() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 256);
	}
	struct TArray<struct UPrimitiveComponent> GetSimulatedComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCollectionCache
{
public:
	UGeometryCollectionCache(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FRecordedTransformTrack GetRecordedData() {
		return memory.read<struct FRecordedTransformTrack>(m_addr + 40);
	}
	struct UGeometryCollection GetSupportedCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGeometryCollection(ptr_addr);
	}
	struct FGuid GetCompatibleCollectionState() {
		return memory.read<struct FGuid>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGeometryCollectionDebugDrawActor
{
public:
	AGeometryCollectionDebugDrawActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FGeometryCollectionDebugDrawWarningMessage GetWarningMessage() {
		return memory.read<struct FGeometryCollectionDebugDrawWarningMessage>(m_addr + 544);
	}
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody GetSelectedRigidBody() {
		return memory.read<struct FGeometryCollectionDebugDrawActorSelectedRigidBody>(m_addr + 552);
	}
	bool GetbDebugDrawWholeCollection() {
		return memory.read<bool>(m_addr + 576);
	}
	bool GetbDebugDrawHierarchy() {
		return memory.read<bool>(m_addr + 577);
	}
	bool GetbDebugDrawClustering() {
		return memory.read<bool>(m_addr + 578);
	}
	enum class EGeometryCollectionDebugDrawActorHideGeometry GetHideGeometry() {
		return memory.read<enum class EGeometryCollectionDebugDrawActorHideGeometry>(m_addr + 579);
	}
	bool GetbShowRigidBodyId() {
		return memory.read<bool>(m_addr + 580);
	}
	bool GetbShowRigidBodyCollision() {
		return memory.read<bool>(m_addr + 581);
	}
	bool GetbCollisionAtOrigin() {
		return memory.read<bool>(m_addr + 582);
	}
	bool GetbShowRigidBodyTransform() {
		return memory.read<bool>(m_addr + 583);
	}
	bool GetbShowRigidBodyInertia() {
		return memory.read<bool>(m_addr + 584);
	}
	bool GetbShowRigidBodyVelocity() {
		return memory.read<bool>(m_addr + 585);
	}
	bool GetbShowRigidBodyForce() {
		return memory.read<bool>(m_addr + 586);
	}
	bool GetbShowRigidBodyInfos() {
		return memory.read<bool>(m_addr + 587);
	}
	bool GetbShowTransformIndex() {
		return memory.read<bool>(m_addr + 588);
	}
	bool GetbShowTransform() {
		return memory.read<bool>(m_addr + 589);
	}
	bool GetbShowParent() {
		return memory.read<bool>(m_addr + 590);
	}
	bool GetbShowLevel() {
		return memory.read<bool>(m_addr + 591);
	}
	bool GetbShowConnectivityEdges() {
		return memory.read<bool>(m_addr + 592);
	}
	bool GetbShowGeometryIndex() {
		return memory.read<bool>(m_addr + 593);
	}
	bool GetbShowGeometryTransform() {
		return memory.read<bool>(m_addr + 594);
	}
	bool GetbShowBoundingBox() {
		return memory.read<bool>(m_addr + 595);
	}
	bool GetbShowFaces() {
		return memory.read<bool>(m_addr + 596);
	}
	bool GetbShowFaceIndices() {
		return memory.read<bool>(m_addr + 597);
	}
	bool GetbShowFaceNormals() {
		return memory.read<bool>(m_addr + 598);
	}
	bool GetbShowSingleFace() {
		return memory.read<bool>(m_addr + 599);
	}
	int32_t GetSingleFaceIndex() {
		return memory.read<int32_t>(m_addr + 600);
	}
	bool GetbShowVertices() {
		return memory.read<bool>(m_addr + 604);
	}
	bool GetbShowVertexIndices() {
		return memory.read<bool>(m_addr + 605);
	}
	bool GetbShowVertexNormals() {
		return memory.read<bool>(m_addr + 606);
	}
	bool GetbUseActiveVisualization() {
		return memory.read<bool>(m_addr + 607);
	}
	float GetPointThickness() {
		return memory.read<float>(m_addr + 608);
	}
	float GetLineThickness() {
		return memory.read<float>(m_addr + 612);
	}
	bool GetbTextShadow() {
		return memory.read<bool>(m_addr + 616);
	}
	float GetTextScale() {
		return memory.read<float>(m_addr + 620);
	}
	float GetNormalScale() {
		return memory.read<float>(m_addr + 624);
	}
	float GetAxisScale() {
		return memory.read<float>(m_addr + 628);
	}
	float GetArrowScale() {
		return memory.read<float>(m_addr + 632);
	}
	struct FColor GetRigidBodyIdColor() {
		return memory.read<struct FColor>(m_addr + 636);
	}
	float GetRigidBodyTransformScale() {
		return memory.read<float>(m_addr + 640);
	}
	struct FColor GetRigidBodyCollisionColor() {
		return memory.read<struct FColor>(m_addr + 644);
	}
	struct FColor GetRigidBodyInertiaColor() {
		return memory.read<struct FColor>(m_addr + 648);
	}
	struct FColor GetRigidBodyVelocityColor() {
		return memory.read<struct FColor>(m_addr + 652);
	}
	struct FColor GetRigidBodyForceColor() {
		return memory.read<struct FColor>(m_addr + 656);
	}
	struct FColor GetRigidBodyInfoColor() {
		return memory.read<struct FColor>(m_addr + 660);
	}
	struct FColor GetTransformIndexColor() {
		return memory.read<struct FColor>(m_addr + 664);
	}
	float GetTransformScale() {
		return memory.read<float>(m_addr + 668);
	}
	struct FColor GetLevelColor() {
		return memory.read<struct FColor>(m_addr + 672);
	}
	struct FColor GetParentColor() {
		return memory.read<struct FColor>(m_addr + 676);
	}
	float GetConnectivityEdgeThickness() {
		return memory.read<float>(m_addr + 680);
	}
	struct FColor GetGeometryIndexColor() {
		return memory.read<struct FColor>(m_addr + 684);
	}
	float GetGeometryTransformScale() {
		return memory.read<float>(m_addr + 688);
	}
	struct FColor GetBoundingBoxColor() {
		return memory.read<struct FColor>(m_addr + 692);
	}
	struct FColor GetFaceColor() {
		return memory.read<struct FColor>(m_addr + 696);
	}
	struct FColor GetFaceIndexColor() {
		return memory.read<struct FColor>(m_addr + 700);
	}
	struct FColor GetFaceNormalColor() {
		return memory.read<struct FColor>(m_addr + 704);
	}
	struct FColor GetSingleFaceColor() {
		return memory.read<struct FColor>(m_addr + 708);
	}
	struct FColor GetVertexColor() {
		return memory.read<struct FColor>(m_addr + 712);
	}
	struct FColor GetVertexIndexColor() {
		return memory.read<struct FColor>(m_addr + 716);
	}
	struct FColor GetVertexNormalColor() {
		return memory.read<struct FColor>(m_addr + 720);
	}
	struct UBillboardComponent GetSpriteComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 728);
		return struct UBillboardComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGeometryCollectionComponent
{
public:
	UGeometryCollectionComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct AChaosSolverActor GetChaosSolverActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1200);
		return struct AChaosSolverActor(ptr_addr);
	}
	struct UGeometryCollection GetRestCollection() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1432);
		return struct UGeometryCollection(ptr_addr);
	}
	struct TArray<struct AFieldSystemActor> GetInitializationFields() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1440);
		return struct TArray<struct AFieldSystemActor>(ptr_addr);
	}
	bool GetSimulating() {
		return memory.read<bool>(m_addr + 1456);
	}
	enum class EObjectStateTypeEnum GetObjectType() {
		return memory.read<enum class EObjectStateTypeEnum>(m_addr + 1464);
	}
	bool GetEnableClustering() {
		return memory.read<bool>(m_addr + 1465);
	}
	int32_t GetClusterGroupIndex() {
		return memory.read<int32_t>(m_addr + 1468);
	}
	int32_t GetMaxClusterLevel() {
		return memory.read<int32_t>(m_addr + 1472);
	}
	struct TArray<float> GetDamageThreshold() {
		return memory.read<struct TArray<float>>(m_addr + 1480);
	}
	enum class EClusterConnectionTypeEnum GetClusterConnectionType() {
		return memory.read<enum class EClusterConnectionTypeEnum>(m_addr + 1496);
	}
	int32_t GetCollisionGroup() {
		return memory.read<int32_t>(m_addr + 1500);
	}
	float GetCollisionSampleFraction() {
		return memory.read<float>(m_addr + 1504);
	}
	float GetLinearEtherDrag() {
		return memory.read<float>(m_addr + 1508);
	}
	float GetAngularEtherDrag() {
		return memory.read<float>(m_addr + 1512);
	}
	struct UChaosPhysicalMaterial GetPhysicalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1520);
		return struct UChaosPhysicalMaterial(ptr_addr);
	}
	enum class EInitialVelocityTypeEnum GetInitialVelocityType() {
		return memory.read<enum class EInitialVelocityTypeEnum>(m_addr + 1528);
	}
	struct FVector GetInitialLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 1532);
	}
	struct FVector GetInitialAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 1544);
	}
	struct UPhysicalMaterial GetPhysicalMaterialOverride() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 1560);
		return struct UPhysicalMaterial(ptr_addr);
	}
	struct FGeomComponentCacheParameters GetCacheParameters() {
		return memory.read<struct FGeomComponentCacheParameters>(m_addr + 1568);
	}
	struct FMulticastInlineDelegate GetNotifyGeometryCollectionPhysicsStateChange() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1648);
	}
	struct FMulticastInlineDelegate GetNotifyGeometryCollectionPhysicsLoadingStateChange() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1664);
	}
	struct FMulticastInlineDelegate GetOnChaosBreakEvent() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1704);
	}
	float GetDesiredCacheTime() {
		return memory.read<float>(m_addr + 1720);
	}
	bool GetCachePlayback() {
		return memory.read<bool>(m_addr + 1724);
	}
	struct FMulticastInlineDelegate GetOnChaosPhysicsCollision() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 1728);
	}
	bool GetbNotifyBreaks() {
		return memory.read<bool>(m_addr + 1744);
	}
	bool GetbNotifyCollisions() {
		return memory.read<bool>(m_addr + 1745);
	}
	bool GetbEnableReplication() {
		return memory.read<bool>(m_addr + 1746);
	}
	bool GetbEnableAbandonAfterLevel() {
		return memory.read<bool>(m_addr + 1747);
	}
	int32_t GetReplicationAbandonClusterLevel() {
		return memory.read<int32_t>(m_addr + 1748);
	}
	struct FGeometryCollectionRepData GetRepData() {
		return memory.read<struct FGeometryCollectionRepData>(m_addr + 1752);
	}
	struct UBodySetup GetDummyBodySetup() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 2312);
		return struct UBodySetup(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class AGeometryCollectionRenderLevelSetActor
{
public:
	AGeometryCollectionRenderLevelSetActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UVolumeTexture GetTargetVolumeTexture() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UVolumeTexture(ptr_addr);
	}
	struct UMaterial GetRayMarchMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UMaterial(ptr_addr);
	}
	float GetSurfaceTolerance() {
		return memory.read<float>(m_addr + 560);
	}
	float GetIsovalue() {
		return memory.read<float>(m_addr + 564);
	}
	bool GetEnabled() {
		return memory.read<bool>(m_addr + 568);
	}
	bool GetRenderVolumeBoundingBox() {
		return memory.read<bool>(m_addr + 569);
	}

private:
	std::uint64_t m_addr = 0;
};


class USkeletalMeshSimulationComponent
{
public:
	USkeletalMeshSimulationComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UChaosPhysicalMaterial GetPhysicalMaterial() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 184);
		return struct UChaosPhysicalMaterial(ptr_addr);
	}
	struct AChaosSolverActor GetChaosSolverActor() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct AChaosSolverActor(ptr_addr);
	}
	struct UPhysicsAsset GetOverridePhysicsAsset() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 200);
		return struct UPhysicsAsset(ptr_addr);
	}
	bool GetbSimulating() {
		return memory.read<bool>(m_addr + 208);
	}
	bool GetbNotifyCollisions() {
		return memory.read<bool>(m_addr + 209);
	}
	enum class EObjectStateTypeEnum GetObjectType() {
		return memory.read<enum class EObjectStateTypeEnum>(m_addr + 210);
	}
	float GetDensity() {
		return memory.read<float>(m_addr + 212);
	}
	float GetMinMass() {
		return memory.read<float>(m_addr + 216);
	}
	float GetMaxMass() {
		return memory.read<float>(m_addr + 220);
	}
	enum class ECollisionTypeEnum GetCollisionType() {
		return memory.read<enum class ECollisionTypeEnum>(m_addr + 224);
	}
	float GetImplicitShapeParticlesPerUnitArea() {
		return memory.read<float>(m_addr + 228);
	}
	int32_t GetImplicitShapeMinNumParticles() {
		return memory.read<int32_t>(m_addr + 232);
	}
	int32_t GetImplicitShapeMaxNumParticles() {
		return memory.read<int32_t>(m_addr + 236);
	}
	int32_t GetMinLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 240);
	}
	int32_t GetMaxLevelSetResolution() {
		return memory.read<int32_t>(m_addr + 244);
	}
	int32_t GetCollisionGroup() {
		return memory.read<int32_t>(m_addr + 248);
	}
	enum class EInitialVelocityTypeEnum GetInitialVelocityType() {
		return memory.read<enum class EInitialVelocityTypeEnum>(m_addr + 252);
	}
	struct FVector GetInitialLinearVelocity() {
		return memory.read<struct FVector>(m_addr + 256);
	}
	struct FVector GetInitialAngularVelocity() {
		return memory.read<struct FVector>(m_addr + 268);
	}
	struct FMulticastInlineDelegate GetOnChaosPhysicsCollision() {
		return memory.read<struct FMulticastInlineDelegate>(m_addr + 280);
	}

private:
	std::uint64_t m_addr = 0;
};


