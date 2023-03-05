namespace offsets
{
	namespace UParticleModuleBeamModifier
	{
			constexpr auto ModifierType = 0x30; // Size: 1, Type: enum class BeamModifierType
			constexpr auto PositionOptions = 0x34; // Size: 4, Type: struct FBeamModifierOptions
			constexpr auto position = 0x38; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto TangentOptions = 0x80; // Size: 4, Type: struct FBeamModifierOptions
			constexpr auto Tangent = 0x88; // Size: 72, Type: struct FRawDistributionVector
			constexpr auto bAbsoluteTangent = 0xd0; // Size: 1, Type: char
			constexpr auto StrengthOptions = 0xd4; // Size: 4, Type: struct FBeamModifierOptions
			constexpr auto Strength = 0xd8; // Size: 48, Type: struct FRawDistributionFloat
	}
} 
