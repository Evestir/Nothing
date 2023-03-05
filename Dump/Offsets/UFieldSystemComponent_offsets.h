namespace offsets
{
	namespace UFieldSystemComponent
	{
			constexpr auto FieldSystem = 0x470; // Size: 8, Type: struct UFieldSystem*
			constexpr auto bIsWorldField = 0x478; // Size: 1, Type: bool
			constexpr auto bIsChaosField = 0x479; // Size: 1, Type: bool
			constexpr auto SupportedSolvers = 0x480; // Size: 16, Type: struct TArray<struct TSoftObjectPtr<AChaosSolverActor>>
			constexpr auto ConstructionCommands = 0x490; // Size: 48, Type: struct FFieldObjectCommands
			constexpr auto BufferCommands = 0x4c0; // Size: 48, Type: struct FFieldObjectCommands
	}
} 
