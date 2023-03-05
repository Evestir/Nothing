namespace offsets
{
	namespace USmoothMeshTool
	{
			constexpr auto SmoothProperties = 0x400; // Size: 8, Type: struct USmoothMeshToolProperties*
			constexpr auto IterativeProperties = 0x408; // Size: 8, Type: struct UIterativeSmoothProperties*
			constexpr auto DiffusionProperties = 0x410; // Size: 8, Type: struct UDiffusionSmoothProperties*
			constexpr auto ImplicitProperties = 0x418; // Size: 8, Type: struct UImplicitSmoothProperties*
			constexpr auto WeightMapProperties = 0x420; // Size: 8, Type: struct USmoothWeightMapSetProperties*
	}
} 
