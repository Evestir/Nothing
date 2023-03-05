namespace offsets
{
	namespace ADepthDebugCameraActor
	{
			constexpr auto MarkerScale = 0x820; // Size: 4, Type: float
			constexpr auto bMarkerVisibility = 0x824; // Size: 1, Type: bool
			constexpr auto CloseDepth = 0x828; // Size: 4, Type: float
			constexpr auto FarDepth = 0x82c; // Size: 4, Type: float
			constexpr auto bVisualizeFront = 0x830; // Size: 1, Type: bool
			constexpr auto bVisualizeMid = 0x831; // Size: 1, Type: bool
			constexpr auto bVisualizeBack = 0x832; // Size: 1, Type: bool
			constexpr auto bEnableVisualizer = 0x833; // Size: 1, Type: bool
			constexpr auto FrontColor = 0x834; // Size: 16, Type: struct FLinearColor
			constexpr auto MidColor = 0x844; // Size: 16, Type: struct FLinearColor
			constexpr auto BackColor = 0x854; // Size: 16, Type: struct FLinearColor
			constexpr auto bGrayscale = 0x864; // Size: 1, Type: bool
			constexpr auto bGrayscaleReverseOrder = 0x865; // Size: 1, Type: bool
	}
} 
