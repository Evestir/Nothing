namespace offsets
{
	namespace UGeometryCacheComponent
	{
			constexpr auto GeometryCache = 0x4a8; // Size: 8, Type: struct UGeometryCache*
			constexpr auto bRunning = 0x4b0; // Size: 1, Type: bool
			constexpr auto bLooping = 0x4b1; // Size: 1, Type: bool
			constexpr auto bExtrapolateFrames = 0x4b2; // Size: 1, Type: bool
			constexpr auto StartTimeOffset = 0x4b4; // Size: 4, Type: float
			constexpr auto PlaybackSpeed = 0x4b8; // Size: 4, Type: float
			constexpr auto MotionVectorScale = 0x4bc; // Size: 4, Type: float
			constexpr auto NumTracks = 0x4c0; // Size: 4, Type: int32_t
			constexpr auto ElapsedTime = 0x4c4; // Size: 4, Type: float
			constexpr auto Duration = 0x4fc; // Size: 4, Type: float
			constexpr auto bManualTick = 0x500; // Size: 1, Type: bool
	}
} 
