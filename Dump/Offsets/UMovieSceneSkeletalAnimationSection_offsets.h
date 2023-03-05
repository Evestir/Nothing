namespace offsets
{
	namespace UMovieSceneSkeletalAnimationSection
	{
			constexpr auto Params = 0xe8; // Size: 216, Type: struct FMovieSceneSkeletalAnimationParams
			constexpr auto AnimSequence = 0x1c0; // Size: 8, Type: struct UAnimSequence*
			constexpr auto Animation = 0x1c8; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto StartOffset = 0x1d0; // Size: 4, Type: float
			constexpr auto EndOffset = 0x1d4; // Size: 4, Type: float
			constexpr auto PlayRate = 0x1d8; // Size: 4, Type: float
			constexpr auto bReverse = 0x1dc; // Size: 1, Type: char
			constexpr auto SlotName = 0x1e0; // Size: 8, Type: struct FName
			constexpr auto StartLocationOffset = 0x1e8; // Size: 12, Type: struct FVector
			constexpr auto StartRotationOffset = 0x1f4; // Size: 12, Type: struct FRotator
			constexpr auto bMatchWithPrevious = 0x200; // Size: 1, Type: bool
			constexpr auto MatchedBoneName = 0x204; // Size: 8, Type: struct FName
			constexpr auto MatchedLocationOffset = 0x20c; // Size: 12, Type: struct FVector
			constexpr auto MatchedRotationOffset = 0x218; // Size: 12, Type: struct FRotator
			constexpr auto bMatchTranslation = 0x224; // Size: 1, Type: bool
			constexpr auto bMatchIncludeZHeight = 0x225; // Size: 1, Type: bool
			constexpr auto bMatchRotationYaw = 0x226; // Size: 1, Type: bool
			constexpr auto bMatchRotationPitch = 0x227; // Size: 1, Type: bool
			constexpr auto bMatchRotationRoll = 0x228; // Size: 1, Type: bool
	}
} 
