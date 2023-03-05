namespace offsets
{
	namespace ANiagaraPreviewGrid
	{
			constexpr auto System = 0x220; // Size: 8, Type: struct UNiagaraSystem*
			constexpr auto ResetMode = 0x228; // Size: 1, Type: enum class ENiagaraPreviewGridResetMode
			constexpr auto PreviewAxisX = 0x230; // Size: 8, Type: struct UNiagaraPreviewAxis*
			constexpr auto PreviewAxisY = 0x238; // Size: 8, Type: struct UNiagaraPreviewAxis*
			constexpr auto PreviewClass = 0x240; // Size: 8, Type: ANiagaraPreviewBase*
			constexpr auto SpacingX = 0x248; // Size: 4, Type: float
			constexpr auto SpacingY = 0x24c; // Size: 4, Type: float
			constexpr auto NumX = 0x250; // Size: 4, Type: int32_t
			constexpr auto NumY = 0x254; // Size: 4, Type: int32_t
			constexpr auto PreviewComponents = 0x258; // Size: 16, Type: struct TArray<struct UChildActorComponent*>
	}
} 
