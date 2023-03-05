namespace offsets
{
	namespace UNiagaraDataInterfaceGrid2D
	{
			constexpr auto NumCellsX = 0xd8; // Size: 4, Type: int32_t
			constexpr auto NumCellsY = 0xdc; // Size: 4, Type: int32_t
			constexpr auto NumCellsMaxAxis = 0xe0; // Size: 4, Type: int32_t
			constexpr auto NumAttributes = 0xe4; // Size: 4, Type: int32_t
			constexpr auto SetGridFromMaxAxis = 0xe8; // Size: 1, Type: bool
			constexpr auto WorldBBoxSize = 0xec; // Size: 8, Type: struct FVector2D
	}
} 
