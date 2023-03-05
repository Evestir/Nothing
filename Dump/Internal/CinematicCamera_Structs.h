#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function CinematicCamera.CineCameraActor.GetCineCameraComponent Size 8
class FGetCineCameraComponent
{

 public: 
	struct UCineCameraComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.NamedFilmbackPreset Size 32
class FNamedFilmbackPreset
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FCameraFilmbackSettings FilmbackSettings;  // Offset: 16 Size: 12
	char pad_28[4];  // Offset: 28 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.CameraLookatTrackingSettings Size 80
class FCameraLookatTrackingSettings
{

 public: 
	char bEnableLookAtTracking : 1;  // Offset: 0 Size: 1
	char bDrawDebugLookAtTrackingPosition : 1;  // Offset: 0 Size: 1
	char pad_0_1 : 6;  // Offset: 0 Size: 1
	char pad_1[4];  // Offset: 1 Size: 4
	float LookAtTrackingInterpSpeed;  // Offset: 4 Size: 4
	char pad_8[16];  // Offset: 8 Size: 16
	struct TSoftObjectPtr<AActor> ActorToTrack;  // Offset: 24 Size: 40
	struct FVector RelativeOffset;  // Offset: 64 Size: 12
	char bAllowRoll : 1;  // Offset: 76 Size: 1
	char pad_76_1 : 7;  // Offset: 76 Size: 1
	char pad_77[4];  // Offset: 77 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.CameraLensSettings Size 24
class FCameraLensSettings
{

 public: 
	float MinFocalLength;  // Offset: 0 Size: 4
	float MaxFocalLength;  // Offset: 4 Size: 4
	float MinFStop;  // Offset: 8 Size: 4
	float MaxFStop;  // Offset: 12 Size: 4
	float MinimumFocusDistance;  // Offset: 16 Size: 4
	int32_t DiaphragmBladeCount;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.CameraFocusSettings Size 88
class FCameraFocusSettings
{

 public: 
	enum class ECameraFocusMethod FocusMethod;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float ManualFocusDistance;  // Offset: 4 Size: 4
	struct FCameraTrackingFocusSettings TrackingFocusSettings;  // Offset: 8 Size: 56
	char bDrawDebugFocusPlane : 1;  // Offset: 64 Size: 1
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	char pad_65[4];  // Offset: 65 Size: 4
	struct FColor DebugFocusPlaneColor;  // Offset: 68 Size: 4
	char bSmoothFocusChanges : 1;  // Offset: 72 Size: 1
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	char pad_73[4];  // Offset: 73 Size: 4
	float FocusSmoothingInterpSpeed;  // Offset: 76 Size: 4
	float FocusOffset;  // Offset: 80 Size: 4
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.CameraTrackingFocusSettings Size 56
class FCameraTrackingFocusSettings
{

 public: 
	struct TSoftObjectPtr<AActor> ActorToTrack;  // Offset: 0 Size: 40
	struct FVector RelativeOffset;  // Offset: 40 Size: 12
	char bDrawDebugTrackingFocusPoint : 1;  // Offset: 52 Size: 1
	char pad_52_1 : 7;  // Offset: 52 Size: 1
	char pad_53[4];  // Offset: 53 Size: 4



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.NamedLensPreset Size 40
class FNamedLensPreset
{

 public: 
	struct FString Name;  // Offset: 0 Size: 16
	struct FCameraLensSettings LensSettings;  // Offset: 16 Size: 24



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName Size 16
class FGetFilmbackPresetName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //ScriptStruct CinematicCamera.CameraFilmbackSettings Size 12
class FCameraFilmbackSettings
{

 public: 
	float SensorWidth;  // Offset: 0 Size: 4
	float SensorHeight;  // Offset: 4 Size: 4
	float SensorAspectRatio;  // Offset: 8 Size: 4



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent Size 8
class FGetRailSplineComponent
{

 public: 
	struct USplineComponent* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName Size 16
class FGetDefaultFilmbackPresetName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy Size 16
class FGetFilmbackPresetsCopy
{

 public: 
	struct TArray<struct FNamedFilmbackPreset> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView Size 4
class FGetHorizontalFieldOfView
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetLensPresetName Size 16
class FGetLensPresetName
{

 public: 
	struct FString ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy Size 16
class FGetLensPresetsCopy
{

 public: 
	struct TArray<struct FNamedLensPreset> ReturnValue;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView Size 4
class FGetVerticalFieldOfView
{

 public: 
	float ReturnValue;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength Size 4
class FSetCurrentFocalLength
{

 public: 
	float InFocalLength;  // Offset: 0 Size: 4



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName Size 16
class FSetFilmbackPresetByName
{

 public: 
	struct FString InPresetName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 //Function CinematicCamera.CineCameraComponent.SetLensPresetByName Size 16
class FSetLensPresetByName
{

 public: 
	struct FString InPresetName;  // Offset: 0 Size: 16



 // Functions 
 public:
}; 
 
 