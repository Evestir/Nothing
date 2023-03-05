namespace offsets
{
	namespace APawn
	{
			constexpr auto bUseControllerRotationPitch = 0x228; // Size: 1, Type: char
			constexpr auto bUseControllerRotationYaw = 0x228; // Size: 1, Type: char
			constexpr auto bUseControllerRotationRoll = 0x228; // Size: 1, Type: char
			constexpr auto bCanAffectNavigationGeneration = 0x228; // Size: 1, Type: char
			constexpr auto BaseEyeHeight = 0x22c; // Size: 4, Type: float
			constexpr auto AutoPossessPlayer = 0x230; // Size: 1, Type: enum class EAutoReceiveInput
			constexpr auto AutoPossessAI = 0x231; // Size: 1, Type: enum class EAutoPossessAI
			constexpr auto RemoteViewPitch = 0x232; // Size: 1, Type: char
			constexpr auto AIControllerClass = 0x238; // Size: 8, Type: AController*
			constexpr auto PlayerState = 0x240; // Size: 8, Type: struct APlayerState*
			constexpr auto LastHitBy = 0x250; // Size: 8, Type: struct AController*
			constexpr auto Controller = 0x258; // Size: 8, Type: struct AController*
			constexpr auto ControlInputVector = 0x264; // Size: 12, Type: struct FVector
			constexpr auto LastControlInputVector = 0x270; // Size: 12, Type: struct FVector
	}
} 
