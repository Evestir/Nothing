namespace offsets
{
	namespace UNiagaraDataInterfaceRenderTargetVolume
	{
			constexpr auto Size = 0xd8; // Size: 12, Type: struct FIntVector
			constexpr auto OverrideRenderTargetFormat = 0xe4; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bInheritUserParameterSettings = 0xe5; // Size: 1, Type: char
			constexpr auto bOverrideFormat = 0xe5; // Size: 1, Type: char
			constexpr auto RenderTargetUserParameter = 0xe8; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto ManagedRenderTargets = 0x108; // Size: 80, Type: struct TMap<uint64_t, struct UTextureRenderTargetVolume*>
	}
} 
