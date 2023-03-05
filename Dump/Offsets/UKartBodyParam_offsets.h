namespace offsets
{
	namespace UKartBodyParam
	{
			constexpr auto Mass = 0x30; // Size: 4, Type: float
			constexpr auto forwardAccelForce = 0x34; // Size: 4, Type: float
			constexpr auto driftEscapeForce = 0x38; // Size: 4, Type: float
			constexpr auto backwardAccelForce = 0x3c; // Size: 4, Type: float
			constexpr auto gripBrake = 0x40; // Size: 4, Type: float
			constexpr auto slipBrake = 0x44; // Size: 4, Type: float
			constexpr auto useTransformBooster = 0x48; // Size: 1, Type: bool
			constexpr auto transAccelFactor = 0x4c; // Size: 4, Type: float
			constexpr auto boostAccelFactor = 0x50; // Size: 4, Type: float
			constexpr auto normalBoosterTime = 0x54; // Size: 4, Type: float
			constexpr auto teamBoosterTime = 0x58; // Size: 4, Type: float
			constexpr auto animalBoosterTime = 0x5c; // Size: 4, Type: float
			constexpr auto startBoosterTime = 0x60; // Size: 4, Type: float
			constexpr auto startBoosterTimeItem = 0x64; // Size: 4, Type: float
			constexpr auto startBoosterTimeSpeed = 0x68; // Size: 4, Type: float
			constexpr auto startForwardAccelFactor = 0x6c; // Size: 4, Type: float
			constexpr auto startForwardAccelFactorItem = 0x70; // Size: 4, Type: float
			constexpr auto startForwardAccelFactorSpeed = 0x74; // Size: 4, Type: float
			constexpr auto maxSteerDeg = 0x78; // Size: 4, Type: float
			constexpr auto steerConstraint = 0x7c; // Size: 4, Type: float
			constexpr auto frontGripFactor = 0x80; // Size: 4, Type: float
			constexpr auto rearGripFactor = 0x84; // Size: 4, Type: float
			constexpr auto driftTrigFactor = 0x88; // Size: 4, Type: float
			constexpr auto driftTrigTime = 0x8c; // Size: 4, Type: float
			constexpr auto driftSlipFactor = 0x90; // Size: 4, Type: float
			constexpr auto cornerDrawFactor = 0x94; // Size: 4, Type: float
			constexpr auto driftLeanFactor = 0x98; // Size: 4, Type: float
			constexpr auto steerLeanFactor = 0x9c; // Size: 4, Type: float
			constexpr auto driftMaxGauge = 0xa0; // Size: 4, Type: float
			constexpr auto driftGaugePreservePercent = 0xa4; // Size: 4, Type: float
			constexpr auto airFriction = 0xa8; // Size: 4, Type: float
			constexpr auto dragFactor = 0xac; // Size: 4, Type: float
			constexpr auto antiCollideBalance = 0xb0; // Size: 4, Type: float
			constexpr auto draftMulAccelFactor = 0xb4; // Size: 4, Type: float
			constexpr auto draftTick = 0xb8; // Size: 4, Type: uint32_t
			constexpr auto driftBoostMulAccelFactor = 0xbc; // Size: 4, Type: float
			constexpr auto driftBoostTick = 0xc0; // Size: 4, Type: uint32_t
			constexpr auto chargeBoostBySpeed = 0xc4; // Size: 4, Type: float
			constexpr auto bUseExtendedAfterBooster = 0xc8; // Size: 1, Type: bool
			constexpr auto boostAccelFactorOnlyItem = 0xcc; // Size: 4, Type: float
			constexpr auto evadeForce = 0xd0; // Size: 4, Type: float
			constexpr auto bMotorCycleType = 0xd4; // Size: 1, Type: bool
			constexpr auto speedSlotCapacity = 0xd8; // Size: 4, Type: uint32_t
			constexpr auto itemSlotCapacity = 0xdc; // Size: 4, Type: uint32_t
			constexpr auto specialSlotCapacity = 0xe0; // Size: 4, Type: uint32_t
			constexpr auto autoChargeLowSpeed = 0xe4; // Size: 4, Type: float
			constexpr auto bTransformAutoCharge = 0xe8; // Size: 1, Type: bool
			constexpr auto descEngineGrade = 0xec; // Size: 4, Type: float
			constexpr auto descBalance = 0xf0; // Size: 4, Type: float
			constexpr auto descStability = 0xf4; // Size: 4, Type: float
			constexpr auto descEnchantCap = 0xf8; // Size: 4, Type: float
			constexpr auto descCornering = 0xfc; // Size: 4, Type: float
			constexpr auto TransformTime = 0x100; // Size: 4, Type: float
	}
} 
