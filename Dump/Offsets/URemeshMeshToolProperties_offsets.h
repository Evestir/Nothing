namespace offsets
{
	namespace URemeshMeshToolProperties
	{
			constexpr auto TargetTriangleCount = 0x70; // Size: 4, Type: int32_t
			constexpr auto SmoothingType = 0x74; // Size: 1, Type: enum class ERemeshSmoothingType
			constexpr auto bDiscardAttributes = 0x75; // Size: 1, Type: bool
			constexpr auto bShowWireframe = 0x76; // Size: 1, Type: bool
			constexpr auto bShowGroupColors = 0x77; // Size: 1, Type: bool
			constexpr auto RemeshType = 0x78; // Size: 1, Type: enum class ERemeshType
			constexpr auto RemeshIterations = 0x7c; // Size: 4, Type: int32_t
			constexpr auto bUseTargetEdgeLength = 0x80; // Size: 1, Type: bool
			constexpr auto TargetEdgeLength = 0x84; // Size: 4, Type: float
			constexpr auto bReproject = 0x88; // Size: 1, Type: bool
	}
} 
