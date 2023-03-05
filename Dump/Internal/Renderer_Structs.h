#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct Renderer.LightPropagationVolumeSettings Size 64
class FLightPropagationVolumeSettings
{

 public: 
	char bOverride_LPVIntensity : 1;  // Offset: 0 Size: 1
	char bOverride_LPVDirectionalOcclusionIntensity : 1;  // Offset: 0 Size: 1
	char bOverride_LPVDirectionalOcclusionRadius : 1;  // Offset: 0 Size: 1
	char bOverride_LPVDiffuseOcclusionExponent : 1;  // Offset: 0 Size: 1
	char bOverride_LPVSpecularOcclusionExponent : 1;  // Offset: 0 Size: 1
	char bOverride_LPVDiffuseOcclusionIntensity : 1;  // Offset: 0 Size: 1
	char bOverride_LPVSpecularOcclusionIntensity : 1;  // Offset: 0 Size: 1
	char bOverride_LPVSize : 1;  // Offset: 0 Size: 1
	char bOverride_LPVSecondaryOcclusionIntensity : 1;  // Offset: 1 Size: 1
	char bOverride_LPVSecondaryBounceIntensity : 1;  // Offset: 1 Size: 1
	char bOverride_LPVGeometryVolumeBias : 1;  // Offset: 1 Size: 1
	char bOverride_LPVVplInjectionBias : 1;  // Offset: 1 Size: 1
	char bOverride_LPVEmissiveInjectionIntensity : 1;  // Offset: 1 Size: 1
	char pad_1_1 : 3;  // Offset: 1 Size: 1
	char pad_2[3];  // Offset: 2 Size: 3
	float LPVIntensity;  // Offset: 4 Size: 4
	float LPVVplInjectionBias;  // Offset: 8 Size: 4
	float LPVSize;  // Offset: 12 Size: 4
	float LPVSecondaryOcclusionIntensity;  // Offset: 16 Size: 4
	float LPVSecondaryBounceIntensity;  // Offset: 20 Size: 4
	float LPVGeometryVolumeBias;  // Offset: 24 Size: 4
	float LPVEmissiveInjectionIntensity;  // Offset: 28 Size: 4
	float LPVDirectionalOcclusionIntensity;  // Offset: 32 Size: 4
	float LPVDirectionalOcclusionRadius;  // Offset: 36 Size: 4
	float LPVDiffuseOcclusionExponent;  // Offset: 40 Size: 4
	float LPVSpecularOcclusionExponent;  // Offset: 44 Size: 4
	float LPVDiffuseOcclusionIntensity;  // Offset: 48 Size: 4
	float LPVSpecularOcclusionIntensity;  // Offset: 52 Size: 4
	float LPVFadeRange;  // Offset: 56 Size: 4
	float LPVDirectionalOcclusionFadeRange;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 