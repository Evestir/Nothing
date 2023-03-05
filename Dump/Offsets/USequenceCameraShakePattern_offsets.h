namespace offsets
{
	namespace USequenceCameraShakePattern
	{
			constexpr auto Sequence = 0x28; // Size: 8, Type: struct UCameraAnimationSequence*
			constexpr auto PlayRate = 0x30; // Size: 4, Type: float
			constexpr auto Scale = 0x34; // Size: 4, Type: float
			constexpr auto BlendInTime = 0x38; // Size: 4, Type: float
			constexpr auto BlendOutTime = 0x3c; // Size: 4, Type: float
			constexpr auto RandomSegmentDuration = 0x40; // Size: 4, Type: float
			constexpr auto bRandomSegment = 0x44; // Size: 1, Type: bool
			constexpr auto Player = 0x48; // Size: 8, Type: struct USequenceCameraShakeSequencePlayer*
			constexpr auto CameraStandIn = 0x50; // Size: 8, Type: struct USequenceCameraShakeCameraStandIn*
	}
} 
