#pragma once 
#include <CinematicCamera_Structs.h>
 
 
 
//Class CinematicCamera.CineCameraActor Size 2176
// Inherited 2080 bytes 
class ACineCameraActor : public ACameraActor
{

 public: 
	struct FCameraLookatTrackingSettings LookatTrackingSettings;  // Offset: 2080 Size: 80
	char pad_2160[16];  // Offset: 2160 Size: 16



 // Functions 
 public:
	struct UCineCameraComponent* GetCineCameraComponent(); // Function CinematicCamera.CineCameraActor.GetCineCameraComponent
}; 
 
 


//Class CinematicCamera.CameraRig_Crane Size 592
// Inherited 544 bytes 
class ACameraRig_Crane : public AActor
{

 public: 
	float CranePitch;  // Offset: 544 Size: 4
	float CraneYaw;  // Offset: 548 Size: 4
	float CraneArmLength;  // Offset: 552 Size: 4
	char pad_556_1 : 7;  // Offset: 556 Size: 1
	bool bLockMountPitch : 1;  // Offset: 556 Size: 1
	char pad_557_1 : 7;  // Offset: 557 Size: 1
	bool bLockMountYaw : 1;  // Offset: 557 Size: 1
	char pad_558[2];  // Offset: 558 Size: 2
	struct USceneComponent* TransformComponent;  // Offset: 560 Size: 8
	struct USceneComponent* CraneYawControl;  // Offset: 568 Size: 8
	struct USceneComponent* CranePitchControl;  // Offset: 576 Size: 8
	struct USceneComponent* CraneCameraMount;  // Offset: 584 Size: 8



 // Functions 
 public:
}; 
 
 


//Class CinematicCamera.CameraRig_Rail Size 576
// Inherited 544 bytes 
class ACameraRig_Rail : public AActor
{

 public: 
	float CurrentPositionOnRail;  // Offset: 544 Size: 4
	char pad_548_1 : 7;  // Offset: 548 Size: 1
	bool bLockOrientationToRail : 1;  // Offset: 548 Size: 1
	char pad_549[3];  // Offset: 549 Size: 3
	struct USceneComponent* TransformComponent;  // Offset: 552 Size: 8
	struct USplineComponent* RailSplineComponent;  // Offset: 560 Size: 8
	struct USceneComponent* RailCameraMount;  // Offset: 568 Size: 8



 // Functions 
 public:
	struct USplineComponent* GetRailSplineComponent(); // Function CinematicCamera.CameraRig_Rail.GetRailSplineComponent
}; 
 
 


//Class CinematicCamera.CineCameraComponent Size 2400
// Inherited 2144 bytes 
class UCineCameraComponent : public UCameraComponent
{

 public: 
	struct FCameraFilmbackSettings FilmbackSettings;  // Offset: 2144 Size: 12
	struct FCameraFilmbackSettings Filmback;  // Offset: 2156 Size: 12
	struct FCameraLensSettings LensSettings;  // Offset: 2168 Size: 24
	struct FCameraFocusSettings FocusSettings;  // Offset: 2192 Size: 88
	float CurrentFocalLength;  // Offset: 2280 Size: 4
	float CurrentAperture;  // Offset: 2284 Size: 4
	float CurrentFocusDistance;  // Offset: 2288 Size: 4
	char pad_2292[12];  // Offset: 2292 Size: 12
	struct TArray<struct FNamedFilmbackPreset> FilmbackPresets;  // Offset: 2304 Size: 16
	struct TArray<struct FNamedLensPreset> LensPresets;  // Offset: 2320 Size: 16
	struct FString DefaultFilmbackPresetName;  // Offset: 2336 Size: 16
	struct FString DefaultFilmbackPreset;  // Offset: 2352 Size: 16
	struct FString DefaultLensPresetName;  // Offset: 2368 Size: 16
	float DefaultLensFocalLength;  // Offset: 2384 Size: 4
	float DefaultLensFStop;  // Offset: 2388 Size: 4
	char pad_2392[8];  // Offset: 2392 Size: 8



 // Functions 
 public:
	void SetLensPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetLensPresetByName
	void SetFilmbackPresetByName(struct FString InPresetName); // Function CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	void SetCurrentFocalLength(float InFocalLength); // Function CinematicCamera.CineCameraComponent.SetCurrentFocalLength
	float GetVerticalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	struct TArray<struct FNamedLensPreset> GetLensPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetLensPresetsCopy
	struct FString GetLensPresetName(); // Function CinematicCamera.CineCameraComponent.GetLensPresetName
	float GetHorizontalFieldOfView(); // Function CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	struct TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetsCopy
	struct FString GetFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	struct FString GetDefaultFilmbackPresetName(); // Function CinematicCamera.CineCameraComponent.GetDefaultFilmbackPresetName
}; 
 
 


