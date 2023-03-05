namespace offsets
{
	namespace UBrushSculptProperties
	{
			constexpr auto bIsRemeshingEnabled = 0x60; // Size: 1, Type: bool
			constexpr auto PrimaryBrushType = 0x61; // Size: 1, Type: enum class EDynamicMeshSculptBrushType
			constexpr auto PrimaryBrushSpeed = 0x64; // Size: 4, Type: float
			constexpr auto bPreserveUVFlow = 0x68; // Size: 1, Type: bool
			constexpr auto bFreezeTarget = 0x69; // Size: 1, Type: bool
			constexpr auto SmoothBrushSpeed = 0x6c; // Size: 4, Type: float
			constexpr auto bDetailPreservingSmooth = 0x70; // Size: 1, Type: bool
	}
} 
