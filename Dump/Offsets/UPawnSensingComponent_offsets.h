namespace offsets
{
	namespace UPawnSensingComponent
	{
			constexpr auto HearingThreshold = 0xb0; // Size: 4, Type: float
			constexpr auto LOSHearingThreshold = 0xb4; // Size: 4, Type: float
			constexpr auto SightRadius = 0xb8; // Size: 4, Type: float
			constexpr auto SensingInterval = 0xbc; // Size: 4, Type: float
			constexpr auto HearingMaxSoundAge = 0xc0; // Size: 4, Type: float
			constexpr auto bEnableSensingUpdates = 0xc4; // Size: 1, Type: char
			constexpr auto bOnlySensePlayers = 0xc4; // Size: 1, Type: char
			constexpr auto bSeePawns = 0xc4; // Size: 1, Type: char
			constexpr auto bHearNoises = 0xc4; // Size: 1, Type: char
			constexpr auto OnSeePawn = 0xd0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto OnHearNoise = 0xe0; // Size: 16, Type: struct FMulticastInlineDelegate
			constexpr auto PeripheralVisionAngle = 0xf0; // Size: 4, Type: float
			constexpr auto PeripheralVisionCosine = 0xf4; // Size: 4, Type: float
	}
} 
