namespace offsets
{
	namespace UPaperFlipbookComponent
	{
			constexpr auto SourceFlipbook = 0x4a8; // Size: 8, Type: struct UPaperFlipbook*
			constexpr auto Material = 0x4b0; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto PlayRate = 0x4b8; // Size: 4, Type: float
			constexpr auto bLooping = 0x4bc; // Size: 1, Type: char
			constexpr auto bReversePlayback = 0x4bc; // Size: 1, Type: char
			constexpr auto bPlaying = 0x4bc; // Size: 1, Type: char
			constexpr auto AccumulatedTime = 0x4c0; // Size: 4, Type: float
			constexpr auto CachedFrameIndex = 0x4c4; // Size: 4, Type: int32_t
			constexpr auto SpriteColor = 0x4c8; // Size: 16, Type: struct FLinearColor
			constexpr auto CachedBodySetup = 0x4d8; // Size: 8, Type: struct UBodySetup*
			constexpr auto OnFinishedPlaying = 0x4e0; // Size: 16, Type: struct FMulticastInlineDelegate
	}
} 
