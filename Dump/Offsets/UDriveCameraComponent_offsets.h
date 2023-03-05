namespace offsets
{
	namespace UDriveCameraComponent
	{
			constexpr auto BlurMaterialInstance = 0x870; // Size: 8, Type: struct UMaterialInstance*
			constexpr auto OriginPostProcessSettings = 0x880; // Size: 1488, Type: struct FPostProcessSettings
			constexpr auto BlendTime = 0xe50; // Size: 4, Type: float
			constexpr auto ForceCalcViewTarget = 0xe54; // Size: 1, Type: bool
			constexpr auto NormalFov = 0xfec; // Size: 4, Type: float
			constexpr auto NormalFovChangeFactor = 0xff0; // Size: 4, Type: float
			constexpr auto BoostFov = 0xff4; // Size: 4, Type: float
			constexpr auto BoostFovChangeFactor = 0xff8; // Size: 4, Type: float
			constexpr auto MomentBoostFov = 0xffc; // Size: 4, Type: float
			constexpr auto MomentBoostFovChangeFactor = 0x1000; // Size: 4, Type: float
			constexpr auto ZoneBoostFov = 0x1004; // Size: 4, Type: float
			constexpr auto ZoneBoostFovChangeFactor = 0x1008; // Size: 4, Type: float
			constexpr auto RailAndBoostFov = 0x100c; // Size: 4, Type: float
			constexpr auto RailAndBoostFovChangeFactor = 0x1010; // Size: 4, Type: float
			constexpr auto MomentBoostFovSpeedMultiplier = 0x1014; // Size: 4, Type: float
			constexpr auto MinCameraPitchRadians = 0x1018; // Size: 4, Type: float
			constexpr auto CameraPitchSpeedCoefficient = 0x101c; // Size: 4, Type: float
			constexpr auto AdditionalZ = 0x1020; // Size: 4, Type: float
			constexpr auto UpDownFactor = 0x1024; // Size: 4, Type: float
			constexpr auto ZLagSpeed = 0x1028; // Size: 4, Type: float
			constexpr auto bDebug = 0x102c; // Size: 1, Type: bool
			constexpr auto ArmSpeedForwardCoefficient = 0x1030; // Size: 4, Type: float
			constexpr auto ArmSpeedBackwardCoefficient = 0x1034; // Size: 4, Type: float
			constexpr auto DistanceCoefficient = 0x1038; // Size: 4, Type: float
			constexpr auto MinLength = 0x103c; // Size: 4, Type: float
			constexpr auto MaxLength = 0x1040; // Size: 4, Type: float
			constexpr auto MinHeight = 0x1044; // Size: 4, Type: float
			constexpr auto MaxHeight = 0x1048; // Size: 4, Type: float
			constexpr auto HeightCoefficient = 0x104c; // Size: 4, Type: float
			constexpr auto CameraLagSpeed = 0x1050; // Size: 4, Type: float
			constexpr auto DropFactor = 0x1054; // Size: 4, Type: float
			constexpr auto RefreshRate = 0x1058; // Size: 4, Type: float
			constexpr auto CameraRotationLagSpeed = 0x105c; // Size: 4, Type: float
			constexpr auto RotatorForEditorView = 0x1060; // Size: 12, Type: struct FRotator
			constexpr auto CameraTarget = 0x10f0; // Size: 8, Type: struct AActor*
	}
} 
