namespace offsets
{
	namespace UPrGetPublicDynData
	{
			constexpr auto Name = 0x48; // Size: 16, Type: struct FString
			constexpr auto Hash = 0x58; // Size: 16, Type: struct FString
			constexpr auto hasData = 0x68; // Size: 1, Type: bool
			constexpr auto isBinary = 0x69; // Size: 1, Type: bool
			constexpr auto Data = 0x70; // Size: 16, Type: struct FString
			constexpr auto isCompressed = 0x80; // Size: 1, Type: bool
			constexpr auto uncompressedSize = 0x84; // Size: 4, Type: int32_t
			constexpr auto compressedData = 0x88; // Size: 16, Type: struct FString
	}
} 
