namespace offsets
{
	namespace UAnimNotifyState_PlayFMOD
	{
			constexpr auto AttachName = 0x30; // Size: 8, Type: struct FName
			constexpr auto FadeOut = 0x38; // Size: 1, Type: char
			constexpr auto Event = 0x40; // Size: 8, Type: struct UFMODEvent*
			constexpr auto CanListenAll = 0x48; // Size: 1, Type: char
			constexpr auto FMODParam = 0x50; // Size: 16, Type: struct TArray<struct FAnimNoti_FMODParam>
			constexpr auto defaultIndex = 0x60; // Size: 4, Type: int32_t
	}
} 
