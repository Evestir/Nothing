namespace offsets
{
	namespace UCameraAnimInst
	{
			constexpr auto CamAnim = 0x28; // Size: 8, Type: struct UCameraAnim*
			constexpr auto InterpGroupInst = 0x30; // Size: 8, Type: struct UInterpGroupInst*
			constexpr auto PlayRate = 0x50; // Size: 4, Type: float
			constexpr auto MoveTrack = 0x68; // Size: 8, Type: struct UInterpTrackMove*
			constexpr auto MoveInst = 0x70; // Size: 8, Type: struct UInterpTrackInstMove*
			constexpr auto PlaySpace = 0x78; // Size: 1, Type: enum class ECameraShakePlaySpace
	}
} 
