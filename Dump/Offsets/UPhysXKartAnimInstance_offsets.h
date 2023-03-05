namespace offsets
{
	namespace UPhysXKartAnimInstance
	{
			constexpr auto bOldSteer = 0x2c8; // Size: 1, Type: bool
			constexpr auto MAX_SUSPENSION_TRAVEL = 0x2cc; // Size: 4, Type: float
			constexpr auto MAX_SUSPENSION_TRAVEL_LOWER = 0x2d0; // Size: 4, Type: float
			constexpr auto HasFrontSteering = 0x2d4; // Size: 1, Type: bool
			constexpr auto SteerRotation = 0x2d8; // Size: 4, Type: float
			constexpr auto FrontRotation = 0x2e0; // Size: 12, Type: struct FRotator
			constexpr auto BackRotation = 0x2ec; // Size: 12, Type: struct FRotator
			constexpr auto KartSpeed = 0x2f8; // Size: 4, Type: float
			constexpr auto SpeedRate = 0x2fc; // Size: 4, Type: float
			constexpr auto SuspensionZ = 0x300; // Size: 16, Type: struct TArray<float>
			constexpr auto PhysicsWithBlend = 0x310; // Size: 4, Type: float
			constexpr auto WheelBlendWeights = 0x314; // Size: 4, Type: float
			constexpr auto LayerBlend = 0x318; // Size: 16, Type: struct TArray<float>
			constexpr auto bTransforming = 0xac4; // Size: 1, Type: bool
			constexpr auto bTransformed = 0xac5; // Size: 1, Type: bool
			constexpr auto bUntransforming = 0xac6; // Size: 1, Type: bool
			constexpr auto bUntransformed = 0xac7; // Size: 1, Type: bool
			constexpr auto bPick = 0xac8; // Size: 1, Type: bool
			constexpr auto bLastPick = 0xac9; // Size: 1, Type: bool
			constexpr auto bLastTransforming = 0xaca; // Size: 1, Type: bool
			constexpr auto bHasIdleAnim = 0xacb; // Size: 1, Type: bool
			constexpr auto bHasTransformAnim = 0xacc; // Size: 1, Type: bool
			constexpr auto bHasTransformedAnim = 0xacd; // Size: 1, Type: bool
			constexpr auto IdleAnimation = 0xb28; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto AnimTransform = 0xb30; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto AnimTransformed = 0xb38; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto SufferMontage_Rocket = 0xb40; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SufferMontage_Water = 0xb48; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SufferMontage_WaterEnd = 0xb50; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SufferMontage_Ice = 0xb58; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SufferMontage_IceEnd = 0xb60; // Size: 8, Type: struct UAnimMontage*
			constexpr auto SufferMontage_Banana = 0xb68; // Size: 8, Type: struct UAnimMontage*
			constexpr auto PickAnim = 0xb70; // Size: 8, Type: struct UAnimSequenceBase*
			constexpr auto Montage_EngineStarting = 0xb78; // Size: 8, Type: struct UAnimMontage*
			constexpr auto TransformAnimRate = 0xb80; // Size: 4, Type: float
			constexpr auto UntransLoopRate = 0xb84; // Size: 4, Type: float
			constexpr auto TransLoopRate = 0xb88; // Size: 4, Type: float
			constexpr auto IdleAnimRate = 0xb8c; // Size: 4, Type: float
			constexpr auto DefaultIdleAnimRate = 0xb90; // Size: 4, Type: float
			constexpr auto DefaultTransformLoopAnimRate = 0xb94; // Size: 4, Type: float
			constexpr auto bIdleRateBySpeed = 0xb98; // Size: 1, Type: bool
			constexpr auto bTransformLoopRateBySpeed = 0xb99; // Size: 1, Type: bool
	}
} 
