namespace offsets
{
	namespace UParticleModuleAttractorParticle
	{
			constexpr auto EmitterName = 0x30; // Size: 8, Type: struct FName
			constexpr auto Range = 0x38; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bStrengthByDistance = 0x68; // Size: 1, Type: char
			constexpr auto Strength = 0x70; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto bAffectBaseVelocity = 0xa0; // Size: 1, Type: char
			constexpr auto SelectionMethod = 0xa4; // Size: 1, Type: enum class EAttractorParticleSelectionMethod
			constexpr auto bRenewSource = 0xa8; // Size: 1, Type: char
			constexpr auto bInheritSourceVel = 0xa8; // Size: 1, Type: char
			constexpr auto LastSelIndex = 0xac; // Size: 4, Type: int32_t
	}
} 
