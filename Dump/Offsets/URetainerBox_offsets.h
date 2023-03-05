namespace offsets
{
	namespace URetainerBox
	{
			constexpr auto bRetainRender = 0x120; // Size: 1, Type: bool
			constexpr auto RenderOnInvalidation = 0x121; // Size: 1, Type: bool
			constexpr auto RenderOnPhase = 0x122; // Size: 1, Type: bool
			constexpr auto Phase = 0x124; // Size: 4, Type: int32_t
			constexpr auto PhaseCount = 0x128; // Size: 4, Type: int32_t
			constexpr auto EffectMaterial = 0x130; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto TextureParameter = 0x138; // Size: 8, Type: struct FName
	}
} 
