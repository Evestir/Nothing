namespace offsets
{
	namespace UNiagaraEffectType
	{
			constexpr auto UpdateFrequency = 0x28; // Size: 4, Type: enum class ENiagaraScalabilityUpdateFrequency
			constexpr auto CullReaction = 0x2c; // Size: 4, Type: enum class ENiagaraCullReaction
			constexpr auto SignificanceHandler = 0x30; // Size: 8, Type: struct UNiagaraSignificanceHandler*
			constexpr auto DetailLevelScalabilitySettings = 0x38; // Size: 16, Type: struct TArray<struct FNiagaraSystemScalabilitySettings>
			constexpr auto SystemScalabilitySettings = 0x48; // Size: 16, Type: struct FNiagaraSystemScalabilitySettingsArray
			constexpr auto EmitterScalabilitySettings = 0x58; // Size: 16, Type: struct FNiagaraEmitterScalabilitySettingsArray
			constexpr auto PerformanceBaselineController = 0x70; // Size: 8, Type: struct UNiagaraBaselineController*
			constexpr auto PerfBaselineStats = 0x78; // Size: 16, Type: struct FNiagaraPerfBaselineStats
			constexpr auto PerfBaselineVersion = 0x88; // Size: 16, Type: struct FGuid
	}
} 
