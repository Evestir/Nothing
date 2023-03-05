namespace offsets
{
	namespace ULicenseReserveItem
	{
			constexpr auto ItemType = 0x40; // Size: 1, Type: enum class EItemType
			constexpr auto Count = 0x44; // Size: 4, Type: int32_t
			constexpr auto DelaySpawnTime = 0x48; // Size: 4, Type: float
			constexpr auto bEndGameOnEmpty = 0x4c; // Size: 1, Type: bool
	}
} 
