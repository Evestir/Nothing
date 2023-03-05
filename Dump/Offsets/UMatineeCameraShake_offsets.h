namespace offsets
{
	namespace UMatineeCameraShake
	{
			constexpr auto OscillationDuration = 0xa8; // Size: 4, Type: float
			constexpr auto OscillationBlendInTime = 0xac; // Size: 4, Type: float
			constexpr auto OscillationBlendOutTime = 0xb0; // Size: 4, Type: float
			constexpr auto RotOscillation = 0xb4; // Size: 36, Type: struct FROscillator
			constexpr auto LocOscillation = 0xd8; // Size: 36, Type: struct FVOscillator
			constexpr auto FOVOscillation = 0xfc; // Size: 12, Type: struct FFOscillator
			constexpr auto AnimPlayRate = 0x108; // Size: 4, Type: float
			constexpr auto AnimScale = 0x10c; // Size: 4, Type: float
			constexpr auto AnimBlendInTime = 0x110; // Size: 4, Type: float
			constexpr auto AnimBlendOutTime = 0x114; // Size: 4, Type: float
			constexpr auto RandomAnimSegmentDuration = 0x118; // Size: 4, Type: float
			constexpr auto Anim = 0x120; // Size: 8, Type: struct UCameraAnim*
			constexpr auto AnimSequence = 0x128; // Size: 8, Type: struct UCameraAnimationSequence*
			constexpr auto bRandomAnimSegment = 0x130; // Size: 1, Type: char
			constexpr auto OscillatorTimeRemaining = 0x134; // Size: 4, Type: float
			constexpr auto AnimInst = 0x138; // Size: 8, Type: struct UCameraAnimInst*
			constexpr auto SequenceShakePattern = 0x180; // Size: 8, Type: struct USequenceCameraShakePattern*
	}
} 
