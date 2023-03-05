namespace offsets
{
	namespace UMaterialExpressionSpeedTree
	{
			constexpr auto GeometryInput = 0x40; // Size: 20, Type: struct FExpressionInput
			constexpr auto WindInput = 0x54; // Size: 20, Type: struct FExpressionInput
			constexpr auto LODInput = 0x68; // Size: 20, Type: struct FExpressionInput
			constexpr auto ExtraBendWS = 0x7c; // Size: 20, Type: struct FExpressionInput
			constexpr auto GeometryType = 0x90; // Size: 1, Type: enum class ESpeedTreeGeometryType
			constexpr auto WindType = 0x91; // Size: 1, Type: enum class ESpeedTreeWindType
			constexpr auto LODType = 0x92; // Size: 1, Type: enum class ESpeedTreeLODType
			constexpr auto BillboardThreshold = 0x94; // Size: 4, Type: float
			constexpr auto bAccurateWindVelocities = 0x98; // Size: 1, Type: bool
	}
} 
