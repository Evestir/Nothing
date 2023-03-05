namespace offsets
{
	namespace UKartSkeletalMeshComponent
	{
			constexpr auto bodyParam = 0xf48; // Size: 8, Type: struct UKartBodyParam*
			constexpr auto KartDesc = 0xf58; // Size: 184, Type: struct FKartDesc
			constexpr auto KartBodyAsset = 0x1188; // Size: 8, Type: struct UBelongingDataAssetKartBody*
			constexpr auto FrontMesh = 0x1190; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto BackMesh = 0x1198; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto SideMesh = 0x11a0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto WheelMeshes = 0x11a8; // Size: 16, Type: struct TArray<struct UKartWheelComponent*>
			constexpr auto HandleMesh = 0x11b8; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto PlateMesh = 0x11c0; // Size: 8, Type: struct USkeletalMeshComponent*
			constexpr auto AODecalComponent = 0x11c8; // Size: 8, Type: struct UAODecalComponent*
			constexpr auto KartBodyMaterial_ChangeBySpeed = 0x11d0; // Size: 8, Type: struct UMaterialInstanceDynamic*
			constexpr auto BalloonComponent = 0x11d8; // Size: 8, Type: struct UBalloonComponent*
			constexpr auto LODToFrameSkip = 0x11f8; // Size: 16, Type: struct TArray<int32_t>
	}
} 
