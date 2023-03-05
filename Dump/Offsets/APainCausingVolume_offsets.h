namespace offsets
{
	namespace APainCausingVolume
	{
			constexpr auto bPainCausing = 0x268; // Size: 1, Type: char
			constexpr auto DamagePerSec = 0x26c; // Size: 4, Type: float
			constexpr auto DamageType = 0x270; // Size: 8, Type: UDamageType*
			constexpr auto PainInterval = 0x278; // Size: 4, Type: float
			constexpr auto bEntryPain = 0x27c; // Size: 1, Type: char
			constexpr auto BACKUP_bPainCausing = 0x27c; // Size: 1, Type: char
			constexpr auto DamageInstigator = 0x280; // Size: 8, Type: struct AController*
	}
} 
