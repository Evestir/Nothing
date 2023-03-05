namespace offsets
{
	namespace UGeometryCollectionComponent
	{
			constexpr auto ChaosSolverActor = 0x4b0; // Size: 8, Type: struct AChaosSolverActor*
			constexpr auto RestCollection = 0x598; // Size: 8, Type: struct UGeometryCollection*
			constexpr auto InitializationFields = 0x5a0; // Size: 16, Type: struct TArray<struct AFieldSystemActor*>
			constexpr auto Simulating = 0x5b0; // Size: 1, Type: bool
			constexpr auto ObjectType = 0x5b8; // Size: 1, Type: enum class EObjectStateTypeEnum
			constexpr auto EnableClustering = 0x5b9; // Size: 1, Type: bool
			constexpr auto ClusterGroupIndex = 0x5bc; // Size: 4, Type: int32_t
			constexpr auto MaxClusterLevel = 0x5c0; // Size: 4, Type: int32_t
			constexpr auto DamageThreshold = 0x5c8; // Size: 16, Type: struct TArray<float>
			constexpr auto ClusterConnectionType = 0x5d8; // Size: 1, Type: enum class EClusterConnectionTypeEnum
			constexpr auto CollisionGroup = 0x5dc; // Size: 4, Type: int32_t
			constexpr auto CollisionSampleFraction = 0x5e0; // Size: 4, Type: float
			constexpr auto LinearEtherDrag = 0x5e4; // Size: 4, Type: float
			constexpr auto AngularEtherDrag = 0x5e8; // Size: 4, Type: float
			constexpr auto PhysicalMaterial = 0x5f0; // Size: 8, Type: struct UChaosPhysicalMaterial*
			constexpr auto InitialVelocityType = 0x5f8; // Size: 1, Type: enum class EInitialVelocityTypeEnum
			constexpr auto InitialLinearVelocity = 0x5fc; // Size: 12, Type: struct FVector
			constexpr auto InitialAngularVelocity = 0x608; // Size: 12, Type: struct FVector
			constexpr auto PhysicalMaterialOverride = 0x618; // Size: 8, Type: struct UPhysicalMaterial*
			constexpr auto CacheParameters = 0x620; // Size: 80, Type: struct FGeomComponentCacheParameters
			constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x670; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x680; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnChaosBreakEvent = 0x6a8; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto DesiredCacheTime = 0x6b8; // Size: 4, Type: float
			constexpr auto CachePlayback = 0x6bc; // Size: 1, Type: bool
			constexpr auto OnChaosPhysicsCollision = 0x6c0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto bNotifyBreaks = 0x6d0; // Size: 1, Type: bool
			constexpr auto bNotifyCollisions = 0x6d1; // Size: 1, Type: bool
			constexpr auto bEnableReplication = 0x6d2; // Size: 1, Type: bool
			constexpr auto bEnableAbandonAfterLevel = 0x6d3; // Size: 1, Type: bool
			constexpr auto ReplicationAbandonClusterLevel = 0x6d4; // Size: 4, Type: int32_t
			constexpr auto RepData = 0x6d8; // Size: 24, Type: struct FGeometryCollectionRepData
			constexpr auto DummyBodySetup = 0x908; // Size: 8, Type: struct UBodySetup*
	}
} 
