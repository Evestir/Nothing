namespace offsets
{
	namespace UDecalComponent
	{
			constexpr auto DecalMaterial = 0x208; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto DecalShadowmapTexture = 0x210; // Size: 8, Type: struct UTexture*
			constexpr auto ShadowmapUV = 0x220; // Size: 16, Type: struct FVector4
			constexpr auto bOverrideDecalStaticShadowRes = 0x230; // Size: 1, Type: char
			constexpr auto OverriddenStaticShadowmapRes = 0x234; // Size: 4, Type: int32_t
			constexpr auto SortOrder = 0x238; // Size: 4, Type: int32_t
			constexpr auto bDrawOverDecal = 0x23c; // Size: 1, Type: bool
			constexpr auto FadeScreenSize = 0x240; // Size: 4, Type: float
			constexpr auto FadeStartDelay = 0x244; // Size: 4, Type: float
			constexpr auto FadeDuration = 0x248; // Size: 4, Type: float
			constexpr auto FadeInDuration = 0x24c; // Size: 4, Type: float
			constexpr auto FadeInStartDelay = 0x250; // Size: 4, Type: float
			constexpr auto bDestroyOwnerAfterFade = 0x254; // Size: 1, Type: char
			constexpr auto DecalSize = 0x258; // Size: 12, Type: struct FVector
			constexpr auto bUseMasterPrimitive = 0x264; // Size: 1, Type: bool
			constexpr auto MasterPrimitive = 0x268; // Size: 8, Type: struct UPrimitiveComponent*
			constexpr auto bDawWithLightingOnMobile = 0x270; // Size: 1, Type: bool
	}
} 
