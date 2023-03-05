#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//Function LocationServicesBPLibrary.LocationServices.StartLocationServices Size 1
class FStartLocationServices
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //DelegateFunction LocationServicesBPLibrary.LocationServicesData_OnLocationChanged__DelegateSignature Size 24
class FLocationServicesData_OnLocationChanged__DelegateSignature
{

 public: 
	struct FLocationServicesData LocationData;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable Size 2
class FIsLocationAccuracyAvailable
{

 public: 
	enum class ELocationAccuracy Accuracy;  // Offset: 0 Size: 1
	char pad_1_1 : 7;  // Offset: 1 Size: 1
	bool ReturnValue : 1;  // Offset: 1 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct LocationServicesBPLibrary.LocationServicesData Size 24
class FLocationServicesData
{

 public: 
	float Timestamp;  // Offset: 0 Size: 4
	float Longitude;  // Offset: 4 Size: 4
	float Latitude;  // Offset: 8 Size: 4
	float HorizontalAccuracy;  // Offset: 12 Size: 4
	float VerticalAccuracy;  // Offset: 16 Size: 4
	float Altitude;  // Offset: 20 Size: 4



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled Size 1
class FAreLocationServicesEnabled
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation Size 24
class FGetLastKnownLocation
{

 public: 
	struct FLocationServicesData ReturnValue;  // Offset: 0 Size: 24



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl Size 8
class FGetLocationServicesImpl
{

 public: 
	struct ULocationServicesImpl* ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.InitLocationServices Size 16
class FInitLocationServices
{

 public: 
	enum class ELocationAccuracy Accuracy;  // Offset: 0 Size: 1
	char pad_1[3];  // Offset: 1 Size: 3
	float UpdateFrequency;  // Offset: 4 Size: 4
	float MinDistanceFilter;  // Offset: 8 Size: 4
	char pad_12_1 : 7;  // Offset: 12 Size: 1
	bool ReturnValue : 1;  // Offset: 12 Size: 1
	char pad_13[3];  // Offset: 13 Size: 3



 // Functions 
 public:
}; 
 
 //Function LocationServicesBPLibrary.LocationServices.StopLocationServices Size 1
class FStopLocationServices
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 