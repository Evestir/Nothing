namespace offsets
{
	namespace ADefaultPawn
	{
			constexpr auto BaseTurnRate = 0x280; // Size: 4, Type: float
			constexpr auto BaseLookUpRate = 0x284; // Size: 4, Type: float
			constexpr auto MovementComponent = 0x288; // Size: 8, Type: struct UPawnMovementComponent*
			constexpr auto CollisionComponent = 0x290; // Size: 8, Type: struct USphereComponent*
			constexpr auto MeshComponent = 0x298; // Size: 8, Type: struct UStaticMeshComponent*
			constexpr auto bAddDefaultMovementBindings = 0x2a0; // Size: 1, Type: char
	}
} 
