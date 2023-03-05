namespace offsets
{
	namespace UNiagaraDataInterfaceGrid2DCollection
	{
			constexpr auto RenderTargetUserParameter = 0xf8; // Size: 32, Type: struct FNiagaraUserParameterBinding
			constexpr auto OverrideBufferFormat = 0x118; // Size: 1, Type: enum class ENiagaraGpuBufferFormat
			constexpr auto bOverrideFormat = 0x119; // Size: 1, Type: char
			constexpr auto ManagedRenderTargets = 0x170; // Size: 80, Type: struct TMap<uint64_t, struct UTextureRenderTarget2DArray*>
	}
} 
