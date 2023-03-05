namespace offsets
{
	namespace UNiagaraDataInterfaceRenderTargetCube
	{
			constexpr auto Size = 0xd8; // Size: 4, Type: int32_t
			constexpr auto OverrideRenderTargetFormat = 0xdc; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bInheritUserParameterSettings = 0xdd; // Size: 1, Type: char
			constexpr auto bOverrideFormat = 0xdd; // Size: 1, Type: char
			constexpr auto RenderTargetUserParameter = 0xe0; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto ManagedRenderTargets = 0x100; // Size: 80, Type: struct TMap<uint64_t, struct UTextureRenderTargetCube*>
	}
} 
