namespace offsets
{
	namespace UOutGamePawnDB
	{
			constexpr auto OutGamePawnData = 0x30; // Size: 80, Type: struct TMap<enum class EOutGamePawnType, struct FName>
			constexpr auto ResetRotateInterval = 0x80; // Size: 4, Type: float
			constexpr auto RotateSpeedMouse = 0x84; // Size: 4, Type: float
			constexpr auto RotateSpeedGamepad = 0x88; // Size: 4, Type: float
			constexpr auto RestoreRotateSpeed = 0x8c; // Size: 4, Type: float
	}
} 
