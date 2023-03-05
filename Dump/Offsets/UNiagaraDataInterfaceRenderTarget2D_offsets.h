namespace offsets
{
	namespace UNiagaraDataInterfaceRenderTarget2D
	{
			constexpr auto Size = 0xd8; // Size: 8, Type: struct FIntPoint
			constexpr auto MipMapGeneration = 0xe0; // Size: 1, Type: enum class ENiagaraMipMapGeneration
			constexpr auto OverrideRenderTargetFormat = 0xe1; // Size: 1, Type: enum class ETextureRenderTargetFormat
			constexpr auto bInheritUserParameterSettings = 0xe2; // Size: 1, Type: char
			constexpr auto bOverrideFormat = 0xe2; // Size: 1, Type: char
			constexpr auto RenderTargetUserParameter = 0xe8; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto ManagedRenderTargets = 0x158; // Size: 80, Type: struct TMap<uint64_t, struct UTextureRenderTarget2D*>
	}
} 
