#pragma once 
#include <LocationServicesBPLibrary_Structs.h>
 
 
 
//Class LocationServicesBPLibrary.LocationServices Size 40
// Inherited 40 bytes 
class ULocationServices : public UBlueprintFunctionLibrary
{

 public: 



 // Functions 
 public:
	bool StopLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StopLocationServices
	bool StartLocationServices(); // Function LocationServicesBPLibrary.LocationServices.StartLocationServices
	bool IsLocationAccuracyAvailable(enum class ELocationAccuracy Accuracy); // Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	bool InitLocationServices(enum class ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter); // Function LocationServicesBPLibrary.LocationServices.InitLocationServices
	struct ULocationServicesImpl* GetLocationServicesImpl(); // Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	struct FLocationServicesData GetLastKnownLocation(); // Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	bool AreLocationServicesEnabled(); // Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
}; 
 
 


//Class LocationServicesBPLibrary.LocationServicesImpl Size 56
// Inherited 40 bytes 
class ULocationServicesImpl : public UObject
{

 public: 
	struct FMulticastInlineDelegate OnLocationChanged;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


