namespace offsets
{
	namespace UPaperFlipbook
	{
			constexpr auto FramesPerSecond = 0x28; // Size: 4, Type: float
			constexpr auto KeyFrames = 0x30; // Size: 16, Type: struct TArray<struct FPaperFlipbookKeyFrame>
			constexpr auto DefaultMaterial = 0x40; // Size: 8, Type: struct UMaterialInterface*
			constexpr auto CollisionSource = 0x48; // Size: 1, Type: enum class EFlipbookCollisionMode
	}
} 
