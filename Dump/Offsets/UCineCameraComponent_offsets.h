namespace offsets
{
	namespace UCineCameraComponent
	{
			constexpr auto FilmbackSettings = 0x860; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto Filmback = 0x86c; // Size: 12, Type: struct FCameraFilmbackSettings
			constexpr auto LensSettings = 0x878; // Size: 24, Type: struct FCameraLensSettings
			constexpr auto FocusSettings = 0x890; // Size: 88, Type: struct FCameraFocusSettings
			constexpr auto CurrentFocalLength = 0x8e8; // Size: 4, Type: float
			constexpr auto CurrentAperture = 0x8ec; // Size: 4, Type: float
			constexpr auto CurrentFocusDistance = 0x8f0; // Size: 4, Type: float
			constexpr auto FilmbackPresets = 0x900; // Size: 16, Type: struct TArray<struct FNamedFilmbackPreset>
			constexpr auto LensPresets = 0x910; // Size: 16, Type: struct TArray<struct FNamedLensPreset>
			constexpr auto DefaultFilmbackPresetName = 0x920; // Size: 16, Type: struct FString
			constexpr auto DefaultFilmbackPreset = 0x930; // Size: 16, Type: struct FString
			constexpr auto DefaultLensPresetName = 0x940; // Size: 16, Type: struct FString
			constexpr auto DefaultLensFocalLength = 0x950; // Size: 4, Type: float
			constexpr auto DefaultLensFStop = 0x954; // Size: 4, Type: float
	}
} 
