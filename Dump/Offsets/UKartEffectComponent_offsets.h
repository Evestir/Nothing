namespace offsets
{
	namespace UKartEffectComponent
	{
			constexpr auto Replication = 0xb8; // Size: 8, Type: struct UKartMovementReplication*
			constexpr auto BoostMaterials = 0x100; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto Rear_Light_Color = 0x1a0; // Size: 16, Type: struct FLinearColor
			constexpr auto AccelMaterials = 0x1c0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto RearMaterials = 0x1f0; // Size: 16, Type: struct TArray<struct UMaterialInstanceDynamic*>
			constexpr auto SkidMarkActor = 0x218; // Size: 8, Type: struct AKartSkidMark*
			constexpr auto SkidMarkMaterial = 0x220; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto SkidSmokeParticle = 0x228; // Size: 8, Type: struct UParticleSystem*
			constexpr auto KartSkeletalMeshComponent = 0x290; // Size: 8, Type: struct UKartSkeletalMeshComponent*
			constexpr auto ArrayAlways = 0x298; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayIdle = 0x2a8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayIdleWithoutSmoke = 0x2b8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayAccel = 0x2c8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayWind = 0x2d8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayInstanceWind = 0x2e8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTransformAccel = 0x2f8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostByItem_Start = 0x308; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostByItem_Loop = 0x318; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostByItem_End = 0x328; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTransformBoostByItem = 0x338; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostByDrift = 0x348; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTransformBoostByDrift = 0x358; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTrailLeft = 0x368; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTrailRight = 0x378; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayNIATrailLeft = 0x388; // Size: 16, Type: struct TArray<struct UNiagaraComponent*>
			constexpr auto ArrayNIATrailRight = 0x398; // Size: 16, Type: struct TArray<struct UNiagaraComponent*>
			constexpr auto ArrayDrift = 0x3a8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostWheel = 0x3b8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArraySkidMark = 0x3c8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBrake = 0x3d8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArraySlipStream = 0x3e8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayDrafting = 0x3f8; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayItemCubeOverlapping = 0x408; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostZone = 0x418; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayBoostDelivery = 0x428; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayTransformed = 0x438; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArraySurfaceParticle = 0x448; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayCrashWeakParticle = 0x458; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayCrashStrongParticle = 0x468; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto ArrayLandRoadParticle = 0x478; // Size: 16, Type: struct TArray<struct UParticleSystemComponent*>
			constexpr auto EffectPreset = 0x488; // Size: 8, Type: struct UEffectPreset*
			constexpr auto CurrentKartEffectEvent = 0x490; // Size: 272, Type: struct FKartEffectEvent
	}
} 
