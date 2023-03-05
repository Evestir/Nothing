#pragma once 
#include <InteractiveToolsFramework_Structs.h>
 
 
 
//Class InteractiveToolsFramework.InputBehaviorSource Size 40
// Inherited 40 bytes 
class UInputBehaviorSource : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoTransformSource Size 40
// Inherited 40 bytes 
class UGizmoTransformSource : public UInterface
{

 public: 



 // Functions 
 public:
	void SetTransform(struct FTransform& NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
}; 
 
 


//Class InteractiveToolsFramework.GizmoBoxComponent Size 1232
// Inherited 1168 bytes 
class UGizmoBoxComponent : public UGizmoBaseComponent
{

 public: 
	struct FVector Origin;  // Offset: 1168 Size: 12
	char pad_1180[4];  // Offset: 1180 Size: 4
	struct FQuat Rotation;  // Offset: 1184 Size: 16
	struct FVector Dimensions;  // Offset: 1200 Size: 12
	float LineThickness;  // Offset: 1212 Size: 4
	char pad_1216_1 : 7;  // Offset: 1216 Size: 1
	bool bRemoveHiddenLines : 1;  // Offset: 1216 Size: 1
	char pad_1217_1 : 7;  // Offset: 1217 Size: 1
	bool bEnableAxisFlip : 1;  // Offset: 1217 Size: 1
	char pad_1218[14];  // Offset: 1218 Size: 14



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveToolPropertySet Size 96
// Inherited 40 bytes 
class UInteractiveToolPropertySet : public UObject
{

 public: 
	char pad_40[16];  // Offset: 40 Size: 16
	struct UInteractiveToolPropertySet* CachedProperties;  // Offset: 56 Size: 8
	char pad_64_1 : 7;  // Offset: 64 Size: 1
	bool bIsPropertySetEnabled : 1;  // Offset: 64 Size: 1
	char pad_65[31];  // Offset: 65 Size: 31



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoArrowComponent Size 1200
// Inherited 1168 bytes 
class UGizmoArrowComponent : public UGizmoBaseComponent
{

 public: 
	struct FVector Direction;  // Offset: 1168 Size: 12
	float Gap;  // Offset: 1180 Size: 4
	float Length;  // Offset: 1184 Size: 4
	float Thickness;  // Offset: 1188 Size: 4
	char pad_1192[8];  // Offset: 1192 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveToolBuilder Size 40
// Inherited 40 bytes 
class UInteractiveToolBuilder : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.BrushBaseProperties Size 120
// Inherited 96 bytes 
class UBrushBaseProperties : public UInteractiveToolPropertySet
{

 public: 
	float BrushSize;  // Offset: 96 Size: 4
	char pad_100_1 : 7;  // Offset: 100 Size: 1
	bool bSpecifyRadius : 1;  // Offset: 100 Size: 1
	char pad_101[3];  // Offset: 101 Size: 3
	float BrushRadius;  // Offset: 104 Size: 4
	float BrushStrength;  // Offset: 108 Size: 4
	float BrushFalloffAmount;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bShowStrength : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bShowFalloff : 1;  // Offset: 117 Size: 1
	char pad_118[2];  // Offset: 118 Size: 2



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoAxisSource Size 40
// Inherited 40 bytes 
class UGizmoAxisSource : public UInterface
{

 public: 



 // Functions 
 public:
	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
	void GetTangentVectors(struct FVector& TangentXOut, struct FVector& TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
}; 
 
 


//Class InteractiveToolsFramework.InputBehavior Size 48
// Inherited 40 bytes 
class UInputBehavior : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveTool Size 128
// Inherited 40 bytes 
class UInteractiveTool : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32
	struct UInputBehaviorSet* InputBehaviors;  // Offset: 72 Size: 8
	struct TArray<struct UObject*> ToolPropertyObjects;  // Offset: 80 Size: 16
	char pad_96[32];  // Offset: 96 Size: 32



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MultiSelectionTool Size 144
// Inherited 128 bytes 
class UMultiSelectionTool : public UInteractiveTool
{

 public: 
	char pad_128[16];  // Offset: 128 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.SingleSelectionTool Size 136
// Inherited 128 bytes 
class USingleSelectionTool : public UInteractiveTool
{

 public: 
	char pad_128[8];  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractionMechanic Size 48
// Inherited 40 bytes 
class UInteractionMechanic : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoVec2ParameterSource Size 40
// Inherited 40 bytes 
class UGizmoVec2ParameterSource : public UInterface
{

 public: 



 // Functions 
 public:
	void SetParameter(struct FVector2D& NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
}; 
 
 


//Class InteractiveToolsFramework.InternalToolFrameworkActor Size 544
// Inherited 544 bytes 
class AInternalToolFrameworkActor : public AActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoComponentWorldTransformSource Size 88
// Inherited 72 bytes 
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{

 public: 
	struct USceneComponent* Component;  // Offset: 72 Size: 8
	char pad_80_1 : 7;  // Offset: 80 Size: 1
	bool bModifyComponentOnTransform : 1;  // Offset: 80 Size: 1
	char pad_81[7];  // Offset: 81 Size: 7



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoRectangleComponent Size 1216
// Inherited 1168 bytes 
class UGizmoRectangleComponent : public UGizmoBaseComponent
{

 public: 
	struct FVector DirectionX;  // Offset: 1168 Size: 12
	struct FVector DirectionY;  // Offset: 1180 Size: 12
	float OffsetX;  // Offset: 1192 Size: 4
	float OffsetY;  // Offset: 1196 Size: 4
	float LengthX;  // Offset: 1200 Size: 4
	float LengthY;  // Offset: 1204 Size: 4
	float Thickness;  // Offset: 1208 Size: 4
	char SegmentFlags;  // Offset: 1212 Size: 1
	char pad_1213[3];  // Offset: 1213 Size: 3



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.ClickDragInputBehavior Size 320
// Inherited 128 bytes 
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{

 public: 
	char pad_128[160];  // Offset: 128 Size: 160
	char pad_288_1 : 7;  // Offset: 288 Size: 1
	bool bUpdateModifiersDuringDrag : 1;  // Offset: 288 Size: 1
	char pad_289[31];  // Offset: 289 Size: 31



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.SingleClickTool Size 136
// Inherited 128 bytes 
class USingleClickTool : public UInteractiveTool
{

 public: 
	char pad_128[8];  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MeshSurfacePointToolBuilder Size 48
// Inherited 40 bytes 
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MeshSurfacePointTool Size 192
// Inherited 136 bytes 
class UMeshSurfacePointTool : public USingleSelectionTool
{

 public: 
	char pad_136[56];  // Offset: 136 Size: 56



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource Size 96
// Inherited 72 bytes 
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{

 public: 
	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource;  // Offset: 72 Size: 16
	float MinParameter;  // Offset: 88 Size: 4
	float MaxParameter;  // Offset: 92 Size: 4



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.BaseBrushTool Size 440
// Inherited 192 bytes 
class UBaseBrushTool : public UMeshSurfacePointTool
{

 public: 
	struct UBrushBaseProperties* BrushProperties;  // Offset: 192 Size: 8
	char pad_200_1 : 7;  // Offset: 200 Size: 1
	bool bInBrushStroke : 1;  // Offset: 200 Size: 1
	char pad_201[3];  // Offset: 201 Size: 3
	float WorldToLocalScale;  // Offset: 204 Size: 4
	struct FBrushStampData LastBrushStamp;  // Offset: 208 Size: 168
	char pad_376[16];  // Offset: 376 Size: 16
	struct TSoftClassPtr<UObject> PropertyClass;  // Offset: 392 Size: 40
	struct UBrushStampIndicator* BrushStampIndicator;  // Offset: 432 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveGizmoBuilder Size 40
// Inherited 40 bytes 
class UInteractiveGizmoBuilder : public UObject
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.IntervalGizmo Size 304
// Inherited 56 bytes 
class UIntervalGizmo : public UInteractiveGizmo
{

 public: 
	struct UGizmoTransformChangeStateTarget* StateTarget;  // Offset: 56 Size: 8
	char pad_64[16];  // Offset: 64 Size: 16
	struct UTransformProxy* TransformProxy;  // Offset: 80 Size: 8
	struct TArray<struct UPrimitiveComponent*> ActiveComponents;  // Offset: 88 Size: 16
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos;  // Offset: 104 Size: 16
	char pad_120[24];  // Offset: 120 Size: 24
	struct UGizmoComponentAxisSource* AxisYSource;  // Offset: 144 Size: 8
	struct UGizmoComponentAxisSource* AxisZSource;  // Offset: 152 Size: 8
	char pad_160[144];  // Offset: 160 Size: 144



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoLineHandleComponent Size 1216
// Inherited 1168 bytes 
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{

 public: 
	struct FVector Normal;  // Offset: 1168 Size: 12
	float HandleSize;  // Offset: 1180 Size: 4
	float Thickness;  // Offset: 1184 Size: 4
	struct FVector Direction;  // Offset: 1188 Size: 12
	float Length;  // Offset: 1200 Size: 4
	char pad_1204_1 : 7;  // Offset: 1204 Size: 1
	bool bImageScale : 1;  // Offset: 1204 Size: 1
	char pad_1205[11];  // Offset: 1205 Size: 11



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.ToolContextTransactionProvider Size 40
// Inherited 40 bytes 
class UToolContextTransactionProvider : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveGizmo Size 56
// Inherited 40 bytes 
class UInteractiveGizmo : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UInputBehaviorSet* InputBehaviors;  // Offset: 48 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.BrushStampIndicator Size 176
// Inherited 56 bytes 
class UBrushStampIndicator : public UInteractiveGizmo
{

 public: 
	float BrushRadius;  // Offset: 56 Size: 4
	float BrushFalloff;  // Offset: 60 Size: 4
	struct FVector BrushPosition;  // Offset: 64 Size: 12
	struct FVector BrushNormal;  // Offset: 76 Size: 12
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bDrawIndicatorLines : 1;  // Offset: 88 Size: 1
	char pad_89_1 : 7;  // Offset: 89 Size: 1
	bool bDrawRadiusCircle : 1;  // Offset: 89 Size: 1
	char pad_90[2];  // Offset: 90 Size: 2
	int32_t SampleStepCount;  // Offset: 92 Size: 4
	struct FLinearColor LineColor;  // Offset: 96 Size: 16
	float LineThickness;  // Offset: 112 Size: 4
	char pad_116_1 : 7;  // Offset: 116 Size: 1
	bool bDepthTested : 1;  // Offset: 116 Size: 1
	char pad_117_1 : 7;  // Offset: 117 Size: 1
	bool bDrawSecondaryLines : 1;  // Offset: 117 Size: 1
	char pad_118[2];  // Offset: 118 Size: 2
	float SecondaryLineThickness;  // Offset: 120 Size: 4
	struct FLinearColor SecondaryLineColor;  // Offset: 124 Size: 16
	char pad_140[4];  // Offset: 140 Size: 4
	struct UPrimitiveComponent* AttachedComponent;  // Offset: 144 Size: 8
	char pad_152[24];  // Offset: 152 Size: 24



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.AxisPositionGizmo Size 216
// Inherited 56 bytes 
class UAxisPositionGizmo : public UInteractiveGizmo
{

 public: 
	char pad_56[16];  // Offset: 56 Size: 16
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 72 Size: 16
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource;  // Offset: 88 Size: 16
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // Offset: 104 Size: 16
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bEnableSignedAxis : 1;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool bInInteraction : 1;  // Offset: 137 Size: 1
	char pad_138[2];  // Offset: 138 Size: 2
	struct FVector InteractionOrigin;  // Offset: 140 Size: 12
	struct FVector InteractionAxis;  // Offset: 152 Size: 12
	struct FVector InteractionStartPoint;  // Offset: 164 Size: 12
	struct FVector InteractionCurPoint;  // Offset: 176 Size: 12
	float InteractionStartParameter;  // Offset: 188 Size: 4
	float InteractionCurParameter;  // Offset: 192 Size: 4
	float ParameterSign;  // Offset: 196 Size: 4
	char pad_200[16];  // Offset: 200 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.AnyButtonInputBehavior Size 128
// Inherited 48 bytes 
class UAnyButtonInputBehavior : public UInputBehavior
{

 public: 
	char pad_48[80];  // Offset: 48 Size: 80



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource Size 96
// Inherited 72 bytes 
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{

 public: 
	struct FVector2D Value;  // Offset: 72 Size: 8
	struct FGizmoVec2ParameterChange LastChange;  // Offset: 80 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.AxisAngleGizmoBuilder Size 40
// Inherited 40 bytes 
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.AxisAngleGizmo Size 240
// Inherited 56 bytes 
class UAxisAngleGizmo : public UInteractiveGizmo
{

 public: 
	char pad_56[16];  // Offset: 56 Size: 16
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 72 Size: 16
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource;  // Offset: 88 Size: 16
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // Offset: 104 Size: 16
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bInInteraction : 1;  // Offset: 136 Size: 1
	char pad_137[3];  // Offset: 137 Size: 3
	struct FVector RotationOrigin;  // Offset: 140 Size: 12
	struct FVector RotationAxis;  // Offset: 152 Size: 12
	struct FVector RotationPlaneX;  // Offset: 164 Size: 12
	struct FVector RotationPlaneY;  // Offset: 176 Size: 12
	struct FVector InteractionStartPoint;  // Offset: 188 Size: 12
	struct FVector InteractionCurPoint;  // Offset: 200 Size: 12
	float InteractionStartAngle;  // Offset: 212 Size: 4
	float InteractionCurAngle;  // Offset: 216 Size: 4
	char pad_220[20];  // Offset: 220 Size: 20



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.BrushStampIndicatorBuilder Size 40
// Inherited 40 bytes 
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.AxisPositionGizmoBuilder Size 40
// Inherited 40 bytes 
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoConstantAxisSource Size 72
// Inherited 40 bytes 
class UGizmoConstantAxisSource : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FVector Origin;  // Offset: 48 Size: 12
	struct FVector Direction;  // Offset: 60 Size: 12



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoConstantFrameAxisSource Size 96
// Inherited 40 bytes 
class UGizmoConstantFrameAxisSource : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FVector Origin;  // Offset: 48 Size: 12
	struct FVector Direction;  // Offset: 60 Size: 12
	struct FVector TangentX;  // Offset: 72 Size: 12
	struct FVector TangentY;  // Offset: 84 Size: 12



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoWorldAxisSource Size 64
// Inherited 40 bytes 
class UGizmoWorldAxisSource : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct FVector Origin;  // Offset: 48 Size: 12
	int32_t AxisIndex;  // Offset: 60 Size: 4



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MultiClickSequenceInputBehavior Size 304
// Inherited 128 bytes 
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{

 public: 
	char pad_128[176];  // Offset: 128 Size: 176



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoComponentAxisSource Size 64
// Inherited 40 bytes 
class UGizmoComponentAxisSource : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct USceneComponent* Component;  // Offset: 48 Size: 8
	int32_t AxisIndex;  // Offset: 56 Size: 4
	char pad_60_1 : 7;  // Offset: 60 Size: 1
	bool bLocalAxes : 1;  // Offset: 60 Size: 1
	char pad_61[3];  // Offset: 61 Size: 3



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.LocalClickDragInputBehavior Size 640
// Inherited 320 bytes 
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{

 public: 
	char pad_320[320];  // Offset: 320 Size: 320



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.ClickDragToolBuilder Size 40
// Inherited 40 bytes 
class UClickDragToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.ClickDragTool Size 136
// Inherited 128 bytes 
class UClickDragTool : public UInteractiveTool
{

 public: 
	char pad_128[8];  // Offset: 128 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoActor Size 544
// Inherited 544 bytes 
class AGizmoActor : public AInternalToolFrameworkActor
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource Size 72
// Inherited 40 bytes 
class UGizmoBaseVec2ParameterSource : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoComponentHitTarget Size 128
// Inherited 40 bytes 
class UGizmoComponentHitTarget : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UPrimitiveComponent* Component;  // Offset: 48 Size: 8
	char pad_56[72];  // Offset: 56 Size: 72



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.KeyAsModifierInputBehavior Size 272
// Inherited 48 bytes 
class UKeyAsModifierInputBehavior : public UInputBehavior
{

 public: 
	char pad_48[224];  // Offset: 48 Size: 224



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoBaseComponent Size 1168
// Inherited 1136 bytes 
class UGizmoBaseComponent : public UPrimitiveComponent
{

 public: 
	struct FLinearColor Color;  // Offset: 1136 Size: 16
	float HoverSizeMultiplier;  // Offset: 1152 Size: 4
	float PixelHitDistanceThreshold;  // Offset: 1156 Size: 4
	char pad_1160[8];  // Offset: 1160 Size: 8



 // Functions 
 public:
	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
}; 
 
 


//Class InteractiveToolsFramework.GizmoCircleComponent Size 1200
// Inherited 1168 bytes 
class UGizmoCircleComponent : public UGizmoBaseComponent
{

 public: 
	struct FVector Normal;  // Offset: 1168 Size: 12
	float Radius;  // Offset: 1180 Size: 4
	float Thickness;  // Offset: 1184 Size: 4
	int32_t NumSides;  // Offset: 1188 Size: 4
	char pad_1192_1 : 7;  // Offset: 1192 Size: 1
	bool bViewAligned : 1;  // Offset: 1192 Size: 1
	char pad_1193_1 : 7;  // Offset: 1193 Size: 1
	bool bOnlyAllowFrontFacingHits : 1;  // Offset: 1193 Size: 1
	char pad_1194[6];  // Offset: 1194 Size: 6



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoClickTarget Size 40
// Inherited 40 bytes 
class UGizmoClickTarget : public UInterface
{

 public: 



 // Functions 
 public:
	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
}; 
 
 


//Class InteractiveToolsFramework.GizmoStateTarget Size 40
// Inherited 40 bytes 
class UGizmoStateTarget : public UInterface
{

 public: 



 // Functions 
 public:
	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
}; 
 
 


//Class InteractiveToolsFramework.GizmoFloatParameterSource Size 40
// Inherited 40 bytes 
class UGizmoFloatParameterSource : public UInterface
{

 public: 



 // Functions 
 public:
	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
}; 
 
 


//Class InteractiveToolsFramework.GizmoLocalFloatParameterSource Size 88
// Inherited 72 bytes 
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{

 public: 
	float Value;  // Offset: 72 Size: 4
	struct FGizmoFloatParameterChange LastChange;  // Offset: 76 Size: 8
	char pad_84[4];  // Offset: 84 Size: 4



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoLambdaHitTarget Size 176
// Inherited 40 bytes 
class UGizmoLambdaHitTarget : public UObject
{

 public: 
	char pad_40[136];  // Offset: 40 Size: 136



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoUniformScaleParameterSource Size 240
// Inherited 72 bytes 
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{

 public: 
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 72 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 88 Size: 16
	float ScaleMultiplier;  // Offset: 104 Size: 4
	struct FVector2D Parameter;  // Offset: 108 Size: 8
	struct FGizmoVec2ParameterChange LastChange;  // Offset: 116 Size: 16
	struct FVector CurScaleOrigin;  // Offset: 132 Size: 12
	struct FVector CurScaleNormal;  // Offset: 144 Size: 12
	struct FVector CurScaleAxisX;  // Offset: 156 Size: 12
	struct FVector CurScaleAxisY;  // Offset: 168 Size: 12
	char pad_180[12];  // Offset: 180 Size: 12
	struct FTransform InitialTransform;  // Offset: 192 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InputBehaviorSet Size 56
// Inherited 40 bytes 
class UInputBehaviorSet : public UObject
{

 public: 
	struct TArray<struct FBehaviorInfo> Behaviors;  // Offset: 40 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InputRouter Size 176
// Inherited 40 bytes 
class UInputRouter : public UObject
{

 public: 
	char pad_40_1 : 7;  // Offset: 40 Size: 1
	bool bAutoInvalidateOnHover : 1;  // Offset: 40 Size: 1
	char pad_41_1 : 7;  // Offset: 41 Size: 1
	bool bAutoInvalidateOnCapture : 1;  // Offset: 41 Size: 1
	char pad_42[14];  // Offset: 42 Size: 14
	struct UInputBehaviorSet* ActiveInputBehaviors;  // Offset: 56 Size: 8
	char pad_64[112];  // Offset: 64 Size: 112



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveGizmoManager Size 184
// Inherited 40 bytes 
class UInteractiveGizmoManager : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct TArray<struct FActiveGizmo> ActiveGizmos;  // Offset: 48 Size: 16
	char pad_64[24];  // Offset: 64 Size: 24
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders;  // Offset: 88 Size: 80
	char pad_168[16];  // Offset: 168 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveToolManager Size 312
// Inherited 40 bytes 
class UInteractiveToolManager : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8
	struct UInteractiveTool* ActiveLeftTool;  // Offset: 48 Size: 8
	struct UInteractiveTool* ActiveRightTool;  // Offset: 56 Size: 8
	char pad_64[80];  // Offset: 64 Size: 80
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders;  // Offset: 144 Size: 80
	char pad_224[88];  // Offset: 224 Size: 88



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.ToolFrameworkComponent Size 40
// Inherited 40 bytes 
class UToolFrameworkComponent : public UInterface
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.IntervalGizmoActor Size 568
// Inherited 544 bytes 
class AIntervalGizmoActor : public AGizmoActor
{

 public: 
	struct UGizmoLineHandleComponent* UpIntervalComponent;  // Offset: 544 Size: 8
	struct UGizmoLineHandleComponent* DownIntervalComponent;  // Offset: 552 Size: 8
	struct UGizmoLineHandleComponent* ForwardIntervalComponent;  // Offset: 560 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.InteractiveToolsContext Size 152
// Inherited 40 bytes 
class UInteractiveToolsContext : public UObject
{

 public: 
	char pad_40[48];  // Offset: 40 Size: 48
	struct UInputRouter* InputRouter;  // Offset: 88 Size: 8
	struct UInteractiveToolManager* ToolManager;  // Offset: 96 Size: 8
	struct UInteractiveGizmoManager* GizmoManager;  // Offset: 104 Size: 8
	struct TSoftClassPtr<UObject> ToolManagerClass;  // Offset: 112 Size: 40



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.IntervalGizmoBuilder Size 192
// Inherited 40 bytes 
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 
	char pad_40[152];  // Offset: 40 Size: 152



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoBaseFloatParameterSource Size 72
// Inherited 40 bytes 
class UGizmoBaseFloatParameterSource : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MouseHoverBehavior Size 152
// Inherited 48 bytes 
class UMouseHoverBehavior : public UInputBehavior
{

 public: 
	char pad_48[104];  // Offset: 48 Size: 104



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource Size 272
// Inherited 72 bytes 
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{

 public: 
	char pad_72[72];  // Offset: 72 Size: 72
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 144 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 160 Size: 16
	float Parameter;  // Offset: 176 Size: 4
	struct FGizmoFloatParameterChange LastChange;  // Offset: 180 Size: 8
	struct FVector CurTranslationAxis;  // Offset: 188 Size: 12
	struct FVector CurTranslationOrigin;  // Offset: 200 Size: 12
	char pad_212[12];  // Offset: 212 Size: 12
	struct FTransform InitialTransform;  // Offset: 224 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource Size 304
// Inherited 72 bytes 
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{

 public: 
	char pad_72[72];  // Offset: 72 Size: 72
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 144 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 160 Size: 16
	struct FVector2D Parameter;  // Offset: 176 Size: 8
	struct FGizmoVec2ParameterChange LastChange;  // Offset: 184 Size: 16
	struct FVector CurTranslationOrigin;  // Offset: 200 Size: 12
	struct FVector CurTranslationNormal;  // Offset: 212 Size: 12
	struct FVector CurTranslationAxisX;  // Offset: 224 Size: 12
	struct FVector CurTranslationAxisY;  // Offset: 236 Size: 12
	char pad_248[8];  // Offset: 248 Size: 8
	struct FTransform InitialTransform;  // Offset: 256 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoAxisRotationParameterSource Size 272
// Inherited 72 bytes 
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{

 public: 
	char pad_72[72];  // Offset: 72 Size: 72
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 144 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 160 Size: 16
	float Angle;  // Offset: 176 Size: 4
	struct FGizmoFloatParameterChange LastChange;  // Offset: 180 Size: 8
	struct FVector CurRotationAxis;  // Offset: 188 Size: 12
	struct FVector CurRotationOrigin;  // Offset: 200 Size: 12
	char pad_212[12];  // Offset: 212 Size: 12
	struct FTransform InitialTransform;  // Offset: 224 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoAxisScaleParameterSource Size 192
// Inherited 72 bytes 
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{

 public: 
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 72 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 88 Size: 16
	float ScaleMultiplier;  // Offset: 104 Size: 4
	float Parameter;  // Offset: 108 Size: 4
	struct FGizmoFloatParameterChange LastChange;  // Offset: 112 Size: 8
	struct FVector CurScaleAxis;  // Offset: 120 Size: 12
	struct FVector CurScaleOrigin;  // Offset: 132 Size: 12
	struct FTransform InitialTransform;  // Offset: 144 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource Size 304
// Inherited 72 bytes 
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{

 public: 
	char pad_72[72];  // Offset: 72 Size: 72
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 144 Size: 16
	struct TScriptInterface<IGizmoTransformSource> TransformSource;  // Offset: 160 Size: 16
	float ScaleMultiplier;  // Offset: 176 Size: 4
	struct FVector2D Parameter;  // Offset: 180 Size: 8
	struct FGizmoVec2ParameterChange LastChange;  // Offset: 188 Size: 16
	struct FVector CurScaleOrigin;  // Offset: 204 Size: 12
	struct FVector CurScaleNormal;  // Offset: 216 Size: 12
	struct FVector CurScaleAxisX;  // Offset: 228 Size: 12
	struct FVector CurScaleAxisY;  // Offset: 240 Size: 12
	char pad_252[4];  // Offset: 252 Size: 4
	struct FTransform InitialTransform;  // Offset: 256 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.PlanePositionGizmoBuilder Size 40
// Inherited 40 bytes 
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.PlanePositionGizmo Size 256
// Inherited 56 bytes 
class UPlanePositionGizmo : public UInteractiveGizmo
{

 public: 
	char pad_56[16];  // Offset: 56 Size: 16
	struct TScriptInterface<IGizmoAxisSource> AxisSource;  // Offset: 72 Size: 16
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;  // Offset: 88 Size: 16
	struct TScriptInterface<IGizmoClickTarget> HitTarget;  // Offset: 104 Size: 16
	struct TScriptInterface<IGizmoStateTarget> StateTarget;  // Offset: 120 Size: 16
	char pad_136_1 : 7;  // Offset: 136 Size: 1
	bool bEnableSignedAxis : 1;  // Offset: 136 Size: 1
	char pad_137_1 : 7;  // Offset: 137 Size: 1
	bool bFlipX : 1;  // Offset: 137 Size: 1
	char pad_138_1 : 7;  // Offset: 138 Size: 1
	bool bFlipY : 1;  // Offset: 138 Size: 1
	char pad_139_1 : 7;  // Offset: 139 Size: 1
	bool bInInteraction : 1;  // Offset: 139 Size: 1
	struct FVector InteractionOrigin;  // Offset: 140 Size: 12
	struct FVector InteractionNormal;  // Offset: 152 Size: 12
	struct FVector InteractionAxisX;  // Offset: 164 Size: 12
	struct FVector InteractionAxisY;  // Offset: 176 Size: 12
	struct FVector InteractionStartPoint;  // Offset: 188 Size: 12
	struct FVector InteractionCurPoint;  // Offset: 200 Size: 12
	struct FVector2D InteractionStartParameter;  // Offset: 212 Size: 8
	struct FVector2D InteractionCurParameter;  // Offset: 220 Size: 8
	struct FVector2D ParameterSigns;  // Offset: 228 Size: 8
	char pad_236[20];  // Offset: 236 Size: 20



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.SelectionSet Size 64
// Inherited 40 bytes 
class USelectionSet : public UObject
{

 public: 
	char pad_40[24];  // Offset: 40 Size: 24



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.MeshSelectionSet Size 128
// Inherited 64 bytes 
class UMeshSelectionSet : public USelectionSet
{

 public: 
	struct TArray<int32_t> Vertices;  // Offset: 64 Size: 16
	struct TArray<int32_t> Edges;  // Offset: 80 Size: 16
	struct TArray<int32_t> Faces;  // Offset: 96 Size: 16
	struct TArray<int32_t> Groups;  // Offset: 112 Size: 16



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.SingleClickInputBehavior Size 304
// Inherited 128 bytes 
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{

 public: 
	char pad_128[64];  // Offset: 128 Size: 64
	char pad_192_1 : 7;  // Offset: 192 Size: 1
	bool HitTestOnRelease : 1;  // Offset: 192 Size: 1
	char pad_193[111];  // Offset: 193 Size: 111



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.SingleClickToolBuilder Size 40
// Inherited 40 bytes 
class USingleClickToolBuilder : public UInteractiveToolBuilder
{

 public: 



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoNilStateTarget Size 48
// Inherited 40 bytes 
class UGizmoNilStateTarget : public UObject
{

 public: 
	char pad_40[8];  // Offset: 40 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoLambdaStateTarget Size 176
// Inherited 40 bytes 
class UGizmoLambdaStateTarget : public UObject
{

 public: 
	char pad_40[136];  // Offset: 40 Size: 136



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoObjectModifyStateTarget Size 88
// Inherited 40 bytes 
class UGizmoObjectModifyStateTarget : public UObject
{

 public: 
	char pad_40[48];  // Offset: 40 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoTransformChangeStateTarget Size 224
// Inherited 40 bytes 
class UGizmoTransformChangeStateTarget : public UObject
{

 public: 
	char pad_40[40];  // Offset: 40 Size: 40
	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager;  // Offset: 80 Size: 16
	char pad_96[128];  // Offset: 96 Size: 128



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.TransformGizmoActor Size 672
// Inherited 544 bytes 
class ATransformGizmoActor : public AGizmoActor
{

 public: 
	struct UPrimitiveComponent* TranslateX;  // Offset: 544 Size: 8
	struct UPrimitiveComponent* TranslateY;  // Offset: 552 Size: 8
	struct UPrimitiveComponent* TranslateZ;  // Offset: 560 Size: 8
	struct UPrimitiveComponent* TranslateYZ;  // Offset: 568 Size: 8
	struct UPrimitiveComponent* TranslateXZ;  // Offset: 576 Size: 8
	struct UPrimitiveComponent* TranslateXY;  // Offset: 584 Size: 8
	struct UPrimitiveComponent* RotateX;  // Offset: 592 Size: 8
	struct UPrimitiveComponent* RotateY;  // Offset: 600 Size: 8
	struct UPrimitiveComponent* RotateZ;  // Offset: 608 Size: 8
	struct UPrimitiveComponent* UniformScale;  // Offset: 616 Size: 8
	struct UPrimitiveComponent* AxisScaleX;  // Offset: 624 Size: 8
	struct UPrimitiveComponent* AxisScaleY;  // Offset: 632 Size: 8
	struct UPrimitiveComponent* AxisScaleZ;  // Offset: 640 Size: 8
	struct UPrimitiveComponent* PlaneScaleYZ;  // Offset: 648 Size: 8
	struct UPrimitiveComponent* PlaneScaleXZ;  // Offset: 656 Size: 8
	struct UPrimitiveComponent* PlaneScaleXY;  // Offset: 664 Size: 8



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.TransformGizmoBuilder Size 192
// Inherited 40 bytes 
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{

 public: 
	char pad_40[152];  // Offset: 40 Size: 152



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.TransformGizmo Size 416
// Inherited 56 bytes 
class UTransformGizmo : public UInteractiveGizmo
{

 public: 
	char pad_56[8];  // Offset: 56 Size: 8
	struct UTransformProxy* ActiveTarget;  // Offset: 64 Size: 8
	char pad_72_1 : 7;  // Offset: 72 Size: 1
	bool bSnapToWorldGrid : 1;  // Offset: 72 Size: 1
	char pad_73_1 : 7;  // Offset: 73 Size: 1
	bool bGridSizeIsExplicit : 1;  // Offset: 73 Size: 1
	char pad_74[2];  // Offset: 74 Size: 2
	struct FVector ExplicitGridSize;  // Offset: 76 Size: 12
	char pad_88_1 : 7;  // Offset: 88 Size: 1
	bool bRotationGridSizeIsExplicit : 1;  // Offset: 88 Size: 1
	char pad_89[3];  // Offset: 89 Size: 3
	struct FRotator ExplicitRotationGridSize;  // Offset: 92 Size: 12
	char pad_104_1 : 7;  // Offset: 104 Size: 1
	bool bSnapToWorldRotGrid : 1;  // Offset: 104 Size: 1
	char pad_105_1 : 7;  // Offset: 105 Size: 1
	bool bUseContextCoordinateSystem : 1;  // Offset: 105 Size: 1
	char pad_106[2];  // Offset: 106 Size: 2
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem;  // Offset: 108 Size: 4
	char pad_112[144];  // Offset: 112 Size: 144
	struct TArray<struct UPrimitiveComponent*> ActiveComponents;  // Offset: 256 Size: 16
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents;  // Offset: 272 Size: 16
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos;  // Offset: 288 Size: 16
	char pad_304[16];  // Offset: 304 Size: 16
	struct UGizmoConstantFrameAxisSource* CameraAxisSource;  // Offset: 320 Size: 8
	struct UGizmoComponentAxisSource* AxisXSource;  // Offset: 328 Size: 8
	struct UGizmoComponentAxisSource* AxisYSource;  // Offset: 336 Size: 8
	struct UGizmoComponentAxisSource* AxisZSource;  // Offset: 344 Size: 8
	struct UGizmoComponentAxisSource* UnitAxisXSource;  // Offset: 352 Size: 8
	struct UGizmoComponentAxisSource* UnitAxisYSource;  // Offset: 360 Size: 8
	struct UGizmoComponentAxisSource* UnitAxisZSource;  // Offset: 368 Size: 8
	struct UGizmoTransformChangeStateTarget* StateTarget;  // Offset: 376 Size: 8
	struct UGizmoScaledTransformSource* ScaledTransformSource;  // Offset: 384 Size: 8
	char pad_392[24];  // Offset: 392 Size: 24



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.TransformProxy Size 240
// Inherited 40 bytes 
class UTransformProxy : public UObject
{

 public: 
	char pad_40[72];  // Offset: 40 Size: 72
	char pad_112_1 : 7;  // Offset: 112 Size: 1
	bool bRotatePerObject : 1;  // Offset: 112 Size: 1
	char pad_113_1 : 7;  // Offset: 113 Size: 1
	bool bSetPivotMode : 1;  // Offset: 113 Size: 1
	char pad_114[30];  // Offset: 114 Size: 30
	struct FTransform SharedTransform;  // Offset: 144 Size: 48
	struct FTransform InitialSharedTransform;  // Offset: 192 Size: 48



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoBaseTransformSource Size 72
// Inherited 40 bytes 
class UGizmoBaseTransformSource : public UObject
{

 public: 
	char pad_40[32];  // Offset: 40 Size: 32



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoScaledTransformSource Size 224
// Inherited 72 bytes 
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{

 public: 
	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource;  // Offset: 72 Size: 16
	char pad_88[136];  // Offset: 88 Size: 136



 // Functions 
 public:
}; 
 
 


//Class InteractiveToolsFramework.GizmoTransformProxyTransformSource Size 80
// Inherited 72 bytes 
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{

 public: 
	struct UTransformProxy* Proxy;  // Offset: 72 Size: 8



 // Functions 
 public:
}; 
 
 


