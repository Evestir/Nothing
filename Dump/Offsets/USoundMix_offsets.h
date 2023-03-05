namespace offsets
{
	namespace USoundMix
	{
			constexpr auto bApplyEQ = 0x28; // Size: 1, Type: char
			constexpr auto EQPriority = 0x2c; // Size: 4, Type: float
			constexpr auto EQSettings = 0x30; // Size: 64, Type: struct FAudioEQEffect
			constexpr auto SoundClassEffects = 0x70; // Size: 16, Type: struct TArray<struct FSoundClassAdjuster>
			constexpr auto InitialDelay = 0x80; // Size: 4, Type: float
			constexpr auto FadeInTime = 0x84; // Size: 4, Type: float
			constexpr auto Duration = 0x88; // Size: 4, Type: float
			constexpr auto FadeOutTime = 0x8c; // Size: 4, Type: float
	}
} 
