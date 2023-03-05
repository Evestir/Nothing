namespace offsets
{
	namespace UPacketCaptureComponent
	{
			constexpr auto StartPathIndex = 0xb0; // Size: 4, Type: int32_t
			constexpr auto StartDataIndex = 0xb4; // Size: 4, Type: int32_t
			constexpr auto PacketSaveGame = 0xc0; // Size: 8, Type: struct UPacketSaveGame*
			constexpr auto SimPacketSaveGame = 0x128; // Size: 8, Type: struct UPacketSaveGame*
	}
} 
