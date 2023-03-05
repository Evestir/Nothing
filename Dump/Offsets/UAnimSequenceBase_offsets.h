namespace offsets
{
	namespace UAnimSequenceBase
	{
			constexpr auto Notifies = 0x80; // Size: 16, Type: struct TArray<struct FAnimNotifyEvent>
			constexpr auto SequenceLength = 0x90; // Size: 4, Type: float
			constexpr auto RateScale = 0x94; // Size: 4, Type: float
			constexpr auto RawCurveData = 0x98; // Size: 16, Type: struct FRawCurveTracks
	}
} 
