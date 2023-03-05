namespace offsets
{
	namespace UParticleModuleTypeDataBeam2
	{
			constexpr auto BeamMethod = 0x30; // Size: 1, Type: enum class EBeam2Method
			constexpr auto TextureTile = 0x34; // Size: 4, Type: int32_t
			constexpr auto TextureTileDistance = 0x38; // Size: 4, Type: float
			constexpr auto Sheets = 0x3c; // Size: 4, Type: int32_t
			constexpr auto MaxBeamCount = 0x40; // Size: 4, Type: int32_t
			constexpr auto Speed = 0x44; // Size: 4, Type: float
			constexpr auto InterpolationPoints = 0x48; // Size: 4, Type: int32_t
			constexpr auto bAlwaysOn = 0x4c; // Size: 1, Type: char
			constexpr auto UpVectorStepSize = 0x50; // Size: 4, Type: int32_t
			constexpr auto BranchParentName = 0x54; // Size: 8, Type: struct FName
			constexpr auto Distance = 0x60; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto TaperMethod = 0x90; // Size: 1, Type: enum class EBeamTaperMethod
			constexpr auto TaperFactor = 0x98; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto TaperScale = 0xc8; // Size: 48, Type: struct FRawDistributionFloat
			constexpr auto RenderGeometry = 0xf8; // Size: 1, Type: char
			constexpr auto RenderDirectLine = 0xf8; // Size: 1, Type: char
			constexpr auto RenderLines = 0xf8; // Size: 1, Type: char
			constexpr auto RenderTessellation = 0xf8; // Size: 1, Type: char
	}
} 
