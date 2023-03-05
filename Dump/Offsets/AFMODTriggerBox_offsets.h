namespace offsets
{
	namespace AFMODTriggerBox
	{
			constexpr auto FMOD_Play = 0x228; // Size: 1, Type: bool
			constexpr auto bOverlapped = 0x229; // Size: 1, Type: bool
			constexpr auto FMODSet = 0x230; // Size: 16, Type: struct TArray<struct FFMOD_TriggerData>
			constexpr auto FMODSoundActor = 0x240; // Size: 16, Type: struct TArray<struct AFMODAmbientSound*>
			constexpr auto FMOD_BeingPlay_Event = 0x250; // Size: 1, Type: bool
	}
} 
