namespace offsets
{
	namespace ULicenseScoreComponent
	{
			constexpr auto Condition = 0xb0; // Size: 8, Type: struct ULicenseStarCondition*
			constexpr auto ReasonMap = 0xb8; // Size: 80, Type: struct TMap<enum class ELicenseScoreReason, struct FLicenseResultData>
			constexpr auto TimeScoreReason = 0x108; // Size: 1, Type: enum class ELicenseScoreReason
			constexpr auto FinishScoreReason = 0x109; // Size: 1, Type: enum class ELicenseScoreReason
			constexpr auto StarLevel = 0x10c; // Size: 4, Type: int32_t
			constexpr auto Score = 0x110; // Size: 4, Type: int32_t
			constexpr auto ResultTime = 0x114; // Size: 4, Type: float
			constexpr auto TotalTime = 0x118; // Size: 4, Type: float
			constexpr auto TimeScoreWeight = 0x11c; // Size: 4, Type: float
			constexpr auto FinishScore = 0x120; // Size: 4, Type: int32_t
			constexpr auto bFailOnTimeOver = 0x124; // Size: 1, Type: bool
			constexpr auto bFail = 0x125; // Size: 1, Type: bool
			constexpr auto bCalcResult = 0x126; // Size: 1, Type: bool
	}
} 
