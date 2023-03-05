#pragma once 
#include <SDK_Engine_Objects.h> 
 
 
//ScriptStruct InteractiveToolsFramework.InputRayHit Size 40
class FInputRayHit
{

 public: 
	char pad_0[40];  // Offset: 0 Size: 40



 // Functions 
 public:
}; 
 
 //ScriptStruct InteractiveToolsFramework.BrushStampData Size 168
class FBrushStampData
{

 public: 
	char pad_0[168];  // Offset: 0 Size: 168



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState Size 1
class FUpdateHoverState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bHovering : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //ScriptStruct InteractiveToolsFramework.BehaviorInfo Size 32
class FBehaviorInfo
{

 public: 
	struct UInputBehavior* Behavior;  // Offset: 0 Size: 8
	char pad_8[24];  // Offset: 8 Size: 24



 // Functions 
 public:
}; 
 
 //ScriptStruct InteractiveToolsFramework.ActiveGizmo Size 48
class FActiveGizmo
{

 public: 
	char pad_0[48];  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange Size 16
class FGizmoVec2ParameterChange
{

 public: 
	struct FVector2D InitialValue;  // Offset: 0 Size: 8
	struct FVector2D CurrentValue;  // Offset: 8 Size: 8



 // Functions 
 public:
}; 
 
 //ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange Size 8
class FGizmoFloatParameterChange
{

 public: 
	float InitialValue;  // Offset: 0 Size: 4
	float CurrentValue;  // Offset: 4 Size: 4



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState Size 1
class FUpdateWorldLocalState
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool bWorldIn : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoTransformSource.GetTransform Size 48
class FGetTransform
{

 public: 
	struct FTransform ReturnValue;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoTransformSource.SetTransform Size 48
class FSetTransform
{

 public: 
	struct FTransform NewTransform;  // Offset: 0 Size: 48



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoAxisSource.GetDirection Size 12
class FGetDirection
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin Size 12
class FGetOrigin
{

 public: 
	struct FVector ReturnValue;  // Offset: 0 Size: 12



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors Size 24
class FGetTangentVectors
{

 public: 
	struct FVector TangentXOut;  // Offset: 0 Size: 12
	struct FVector TangentYOut;  // Offset: 12 Size: 12



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors Size 1
class FHasTangentVectors
{

 public: 
	char pad_0_1 : 7;  // Offset: 0 Size: 1
	bool ReturnValue : 1;  // Offset: 0 Size: 1



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter Size 8
class FGetParameter
{

 public: 
	struct FVector2D ReturnValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 //Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter Size 8
class FSetParameter
{

 public: 
	struct FVector2D NewValue;  // Offset: 0 Size: 8



 // Functions 
 public:
}; 
 
 