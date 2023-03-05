namespace offsets
{
	namespace UKartChannelParam
	{
			constexpr auto Mass = 0x30; // Size: 4, Type: float
			constexpr auto airFriction = 0x34; // Size: 4, Type: float
			constexpr auto dragFactor = 0x38; // Size: 4, Type: float
			constexpr auto forwardAccelForce = 0x3c; // Size: 4, Type: float
			constexpr auto backwardAccelForce = 0x40; // Size: 4, Type: float
			constexpr auto gripBrake = 0x44; // Size: 4, Type: float
			constexpr auto slipBrake = 0x48; // Size: 4, Type: float
			constexpr auto maxSteerDeg = 0x4c; // Size: 4, Type: float
			constexpr auto steerConstraint = 0x50; // Size: 4, Type: float
			constexpr auto frontGripFactor = 0x54; // Size: 4, Type: float
			constexpr auto rearGripFactor = 0x58; // Size: 4, Type: float
			constexpr auto driftTrigFactor = 0x5c; // Size: 4, Type: float
			constexpr auto driftTrigTime = 0x60; // Size: 4, Type: float
			constexpr auto driftSlipFactor = 0x64; // Size: 4, Type: float
			constexpr auto driftEscapeForce = 0x68; // Size: 4, Type: float
			constexpr auto cornerDrawFactor = 0x6c; // Size: 4, Type: float
			constexpr auto driftMaxGauge = 0x70; // Size: 4, Type: float
			constexpr auto transAccelFactor = 0x74; // Size: 4, Type: float
	}
} 
