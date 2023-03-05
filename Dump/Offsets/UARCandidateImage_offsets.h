namespace offsets
{
	namespace UARCandidateImage
	{
			constexpr auto CandidateTexture = 0x30; // Size: 8, Type: struct UTexture2D*
			constexpr auto FriendlyName = 0x38; // Size: 16, Type: struct FString
			constexpr auto Width = 0x48; // Size: 4, Type: float
			constexpr auto Height = 0x4c; // Size: 4, Type: float
			constexpr auto Orientation = 0x50; // Size: 1, Type: enum class EARCandidateImageOrientation
	}
} 
