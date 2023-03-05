#pragma once 
#include <InteractiveToolsFramework_Structs.h>
 
 
 
class UInputBehaviorSource
{
public:
	UInputBehaviorSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoTransformSource
{
public:
	UGizmoTransformSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoBoxComponent
{
public:
	UGizmoBoxComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 1168);
	}
	struct FQuat GetRotation() {
		return memory.read<struct FQuat>(m_addr + 1184);
	}
	struct FVector GetDimensions() {
		return memory.read<struct FVector>(m_addr + 1200);
	}
	float GetLineThickness() {
		return memory.read<float>(m_addr + 1212);
	}
	bool GetbRemoveHiddenLines() {
		return memory.read<bool>(m_addr + 1216);
	}
	bool GetbEnableAxisFlip() {
		return memory.read<bool>(m_addr + 1217);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveToolPropertySet
{
public:
	UInteractiveToolPropertySet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInteractiveToolPropertySet GetCachedProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UInteractiveToolPropertySet(ptr_addr);
	}
	bool GetbIsPropertySetEnabled() {
		return memory.read<bool>(m_addr + 64);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoArrowComponent
{
public:
	UGizmoArrowComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 1168);
	}
	float GetGap() {
		return memory.read<float>(m_addr + 1180);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 1184);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 1188);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveToolBuilder
{
public:
	UInteractiveToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UBrushBaseProperties
{
public:
	UBrushBaseProperties(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrushSize() {
		return memory.read<float>(m_addr + 96);
	}
	bool GetbSpecifyRadius() {
		return memory.read<bool>(m_addr + 100);
	}
	float GetBrushRadius() {
		return memory.read<float>(m_addr + 104);
	}
	float GetBrushStrength() {
		return memory.read<float>(m_addr + 108);
	}
	float GetBrushFalloffAmount() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbShowStrength() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbShowFalloff() {
		return memory.read<bool>(m_addr + 117);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoAxisSource
{
public:
	UGizmoAxisSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInputBehavior
{
public:
	UInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInteractiveTool
{
public:
	UInteractiveTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInputBehaviorSet GetInputBehaviors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UInputBehaviorSet(ptr_addr);
	}
	struct TArray<struct UObject> GetToolPropertyObjects() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct TArray<struct UObject>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiSelectionTool
{
public:
	UMultiSelectionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class USingleSelectionTool
{
public:
	USingleSelectionTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInteractionMechanic
{
public:
	UInteractionMechanic(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoVec2ParameterSource
{
public:
	UGizmoVec2ParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AInternalToolFrameworkActor
{
public:
	AInternalToolFrameworkActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoComponentWorldTransformSource
{
public:
	UGizmoComponentWorldTransformSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct USceneComponent(ptr_addr);
	}
	bool GetbModifyComponentOnTransform() {
		return memory.read<bool>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoRectangleComponent
{
public:
	UGizmoRectangleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetDirectionX() {
		return memory.read<struct FVector>(m_addr + 1168);
	}
	struct FVector GetDirectionY() {
		return memory.read<struct FVector>(m_addr + 1180);
	}
	float GetOffsetX() {
		return memory.read<float>(m_addr + 1192);
	}
	float GetOffsetY() {
		return memory.read<float>(m_addr + 1196);
	}
	float GetLengthX() {
		return memory.read<float>(m_addr + 1200);
	}
	float GetLengthY() {
		return memory.read<float>(m_addr + 1204);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 1208);
	}
	char GetSegmentFlags() {
		return memory.read<char>(m_addr + 1212);
	}

private:
	std::uint64_t m_addr = 0;
};


class UClickDragInputBehavior
{
public:
	UClickDragInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbUpdateModifiersDuringDrag() {
		return memory.read<bool>(m_addr + 288);
	}

private:
	std::uint64_t m_addr = 0;
};


class USingleClickTool
{
public:
	USingleClickTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSurfacePointToolBuilder
{
public:
	UMeshSurfacePointToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSurfacePointTool
{
public:
	UMeshSurfacePointTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoAxisIntervalParameterSource
{
public:
	UGizmoAxisIntervalParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoFloatParameterSource> GetFloatParameterSource() {
		return memory.read<struct TScriptInterface<IGizmoFloatParameterSource>>(m_addr + 72);
	}
	float GetMinParameter() {
		return memory.read<float>(m_addr + 88);
	}
	float GetMaxParameter() {
		return memory.read<float>(m_addr + 92);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBaseBrushTool
{
public:
	UBaseBrushTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UBrushBaseProperties GetBrushProperties() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 192);
		return struct UBrushBaseProperties(ptr_addr);
	}
	bool GetbInBrushStroke() {
		return memory.read<bool>(m_addr + 200);
	}
	float GetWorldToLocalScale() {
		return memory.read<float>(m_addr + 204);
	}
	struct FBrushStampData GetLastBrushStamp() {
		return memory.read<struct FBrushStampData>(m_addr + 208);
	}
	struct TSoftClassPtr<UObject> GetPropertyClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 392);
	}
	struct UBrushStampIndicator GetBrushStampIndicator() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 432);
		return struct UBrushStampIndicator(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveGizmoBuilder
{
public:
	UInteractiveGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UIntervalGizmo
{
public:
	UIntervalGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGizmoTransformChangeStateTarget GetStateTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UGizmoTransformChangeStateTarget(ptr_addr);
	}
	struct UTransformProxy GetTransformProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 80);
		return struct UTransformProxy(ptr_addr);
	}
	struct TArray<struct UPrimitiveComponent> GetActiveComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}
	struct TArray<struct UInteractiveGizmo> GetActiveGizmos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct TArray<struct UInteractiveGizmo>(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetAxisYSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetAxisZSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 152);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoLineHandleComponent
{
public:
	UGizmoLineHandleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 1168);
	}
	float GetHandleSize() {
		return memory.read<float>(m_addr + 1180);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 1184);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 1188);
	}
	float GetLength() {
		return memory.read<float>(m_addr + 1200);
	}
	bool GetbImageScale() {
		return memory.read<bool>(m_addr + 1204);
	}

private:
	std::uint64_t m_addr = 0;
};


class UToolContextTransactionProvider
{
public:
	UToolContextTransactionProvider(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UInteractiveGizmo
{
public:
	UInteractiveGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInputBehaviorSet GetInputBehaviors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UInputBehaviorSet(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushStampIndicator
{
public:
	UBrushStampIndicator(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetBrushRadius() {
		return memory.read<float>(m_addr + 56);
	}
	float GetBrushFalloff() {
		return memory.read<float>(m_addr + 60);
	}
	struct FVector GetBrushPosition() {
		return memory.read<struct FVector>(m_addr + 64);
	}
	struct FVector GetBrushNormal() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	bool GetbDrawIndicatorLines() {
		return memory.read<bool>(m_addr + 88);
	}
	bool GetbDrawRadiusCircle() {
		return memory.read<bool>(m_addr + 89);
	}
	int32_t GetSampleStepCount() {
		return memory.read<int32_t>(m_addr + 92);
	}
	struct FLinearColor GetLineColor() {
		return memory.read<struct FLinearColor>(m_addr + 96);
	}
	float GetLineThickness() {
		return memory.read<float>(m_addr + 112);
	}
	bool GetbDepthTested() {
		return memory.read<bool>(m_addr + 116);
	}
	bool GetbDrawSecondaryLines() {
		return memory.read<bool>(m_addr + 117);
	}
	float GetSecondaryLineThickness() {
		return memory.read<float>(m_addr + 120);
	}
	struct FLinearColor GetSecondaryLineColor() {
		return memory.read<struct FLinearColor>(m_addr + 124);
	}
	struct UPrimitiveComponent GetAttachedComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAxisPositionGizmo
{
public:
	UAxisPositionGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 72);
	}
	struct TScriptInterface<IGizmoFloatParameterSource> GetParameterSource() {
		return memory.read<struct TScriptInterface<IGizmoFloatParameterSource>>(m_addr + 88);
	}
	struct TScriptInterface<IGizmoClickTarget> GetHitTarget() {
		return memory.read<struct TScriptInterface<IGizmoClickTarget>>(m_addr + 104);
	}
	struct TScriptInterface<IGizmoStateTarget> GetStateTarget() {
		return memory.read<struct TScriptInterface<IGizmoStateTarget>>(m_addr + 120);
	}
	bool GetbEnableSignedAxis() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetbInInteraction() {
		return memory.read<bool>(m_addr + 137);
	}
	struct FVector GetInteractionOrigin() {
		return memory.read<struct FVector>(m_addr + 140);
	}
	struct FVector GetInteractionAxis() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	struct FVector GetInteractionStartPoint() {
		return memory.read<struct FVector>(m_addr + 164);
	}
	struct FVector GetInteractionCurPoint() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	float GetInteractionStartParameter() {
		return memory.read<float>(m_addr + 188);
	}
	float GetInteractionCurParameter() {
		return memory.read<float>(m_addr + 192);
	}
	float GetParameterSign() {
		return memory.read<float>(m_addr + 196);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAnyButtonInputBehavior
{
public:
	UAnyButtonInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoLocalVec2ParameterSource
{
public:
	UGizmoLocalVec2ParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector2D GetValue() {
		return memory.read<struct FVector2D>(m_addr + 72);
	}
	struct FGizmoVec2ParameterChange GetLastChange() {
		return memory.read<struct FGizmoVec2ParameterChange>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class UAxisAngleGizmoBuilder
{
public:
	UAxisAngleGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAxisAngleGizmo
{
public:
	UAxisAngleGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 72);
	}
	struct TScriptInterface<IGizmoFloatParameterSource> GetAngleSource() {
		return memory.read<struct TScriptInterface<IGizmoFloatParameterSource>>(m_addr + 88);
	}
	struct TScriptInterface<IGizmoClickTarget> GetHitTarget() {
		return memory.read<struct TScriptInterface<IGizmoClickTarget>>(m_addr + 104);
	}
	struct TScriptInterface<IGizmoStateTarget> GetStateTarget() {
		return memory.read<struct TScriptInterface<IGizmoStateTarget>>(m_addr + 120);
	}
	bool GetbInInteraction() {
		return memory.read<bool>(m_addr + 136);
	}
	struct FVector GetRotationOrigin() {
		return memory.read<struct FVector>(m_addr + 140);
	}
	struct FVector GetRotationAxis() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	struct FVector GetRotationPlaneX() {
		return memory.read<struct FVector>(m_addr + 164);
	}
	struct FVector GetRotationPlaneY() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	struct FVector GetInteractionStartPoint() {
		return memory.read<struct FVector>(m_addr + 188);
	}
	struct FVector GetInteractionCurPoint() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	float GetInteractionStartAngle() {
		return memory.read<float>(m_addr + 212);
	}
	float GetInteractionCurAngle() {
		return memory.read<float>(m_addr + 216);
	}

private:
	std::uint64_t m_addr = 0;
};


class UBrushStampIndicatorBuilder
{
public:
	UBrushStampIndicatorBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UAxisPositionGizmoBuilder
{
public:
	UAxisPositionGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoConstantAxisSource
{
public:
	UGizmoConstantAxisSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoConstantFrameAxisSource
{
public:
	UGizmoConstantFrameAxisSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	struct FVector GetDirection() {
		return memory.read<struct FVector>(m_addr + 60);
	}
	struct FVector GetTangentX() {
		return memory.read<struct FVector>(m_addr + 72);
	}
	struct FVector GetTangentY() {
		return memory.read<struct FVector>(m_addr + 84);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoWorldAxisSource
{
public:
	UGizmoWorldAxisSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetOrigin() {
		return memory.read<struct FVector>(m_addr + 48);
	}
	int32_t GetAxisIndex() {
		return memory.read<int32_t>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class UMultiClickSequenceInputBehavior
{
public:
	UMultiClickSequenceInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoComponentAxisSource
{
public:
	UGizmoComponentAxisSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct USceneComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct USceneComponent(ptr_addr);
	}
	int32_t GetAxisIndex() {
		return memory.read<int32_t>(m_addr + 56);
	}
	bool GetbLocalAxes() {
		return memory.read<bool>(m_addr + 60);
	}

private:
	std::uint64_t m_addr = 0;
};


class ULocalClickDragInputBehavior
{
public:
	ULocalClickDragInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClickDragToolBuilder
{
public:
	UClickDragToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UClickDragTool
{
public:
	UClickDragTool(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AGizmoActor
{
public:
	AGizmoActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoBaseVec2ParameterSource
{
public:
	UGizmoBaseVec2ParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoComponentHitTarget
{
public:
	UGizmoComponentHitTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UKeyAsModifierInputBehavior
{
public:
	UKeyAsModifierInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoBaseComponent
{
public:
	UGizmoBaseComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FLinearColor GetColor() {
		return memory.read<struct FLinearColor>(m_addr + 1136);
	}
	float GetHoverSizeMultiplier() {
		return memory.read<float>(m_addr + 1152);
	}
	float GetPixelHitDistanceThreshold() {
		return memory.read<float>(m_addr + 1156);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoCircleComponent
{
public:
	UGizmoCircleComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct FVector GetNormal() {
		return memory.read<struct FVector>(m_addr + 1168);
	}
	float GetRadius() {
		return memory.read<float>(m_addr + 1180);
	}
	float GetThickness() {
		return memory.read<float>(m_addr + 1184);
	}
	int32_t GetNumSides() {
		return memory.read<int32_t>(m_addr + 1188);
	}
	bool GetbViewAligned() {
		return memory.read<bool>(m_addr + 1192);
	}
	bool GetbOnlyAllowFrontFacingHits() {
		return memory.read<bool>(m_addr + 1193);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoClickTarget
{
public:
	UGizmoClickTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoStateTarget
{
public:
	UGizmoStateTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoFloatParameterSource
{
public:
	UGizmoFloatParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoLocalFloatParameterSource
{
public:
	UGizmoLocalFloatParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	float GetValue() {
		return memory.read<float>(m_addr + 72);
	}
	struct FGizmoFloatParameterChange GetLastChange() {
		return memory.read<struct FGizmoFloatParameterChange>(m_addr + 76);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoLambdaHitTarget
{
public:
	UGizmoLambdaHitTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoUniformScaleParameterSource
{
public:
	UGizmoUniformScaleParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 72);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 88);
	}
	float GetScaleMultiplier() {
		return memory.read<float>(m_addr + 104);
	}
	struct FVector2D GetParameter() {
		return memory.read<struct FVector2D>(m_addr + 108);
	}
	struct FGizmoVec2ParameterChange GetLastChange() {
		return memory.read<struct FGizmoVec2ParameterChange>(m_addr + 116);
	}
	struct FVector GetCurScaleOrigin() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	struct FVector GetCurScaleNormal() {
		return memory.read<struct FVector>(m_addr + 144);
	}
	struct FVector GetCurScaleAxisX() {
		return memory.read<struct FVector>(m_addr + 156);
	}
	struct FVector GetCurScaleAxisY() {
		return memory.read<struct FVector>(m_addr + 168);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputBehaviorSet
{
public:
	UInputBehaviorSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FBehaviorInfo> GetBehaviors() {
		return memory.read<struct TArray<struct FBehaviorInfo>>(m_addr + 40);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInputRouter
{
public:
	UInputRouter(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbAutoInvalidateOnHover() {
		return memory.read<bool>(m_addr + 40);
	}
	bool GetbAutoInvalidateOnCapture() {
		return memory.read<bool>(m_addr + 41);
	}
	struct UInputBehaviorSet GetActiveInputBehaviors() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UInputBehaviorSet(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveGizmoManager
{
public:
	UInteractiveGizmoManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<struct FActiveGizmo> GetActiveGizmos() {
		return memory.read<struct TArray<struct FActiveGizmo>>(m_addr + 48);
	}
	struct TMap<struct FString, struct UInteractiveGizmoBuilder> GetGizmoBuilders() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct TMap<struct FString, struct UInteractiveGizmoBuilder>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveToolManager
{
public:
	UInteractiveToolManager(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInteractiveTool GetActiveLeftTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 48);
		return struct UInteractiveTool(ptr_addr);
	}
	struct UInteractiveTool GetActiveRightTool() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 56);
		return struct UInteractiveTool(ptr_addr);
	}
	struct TMap<struct FString, struct UInteractiveToolBuilder> GetToolBuilders() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 144);
		return struct TMap<struct FString, struct UInteractiveToolBuilder>(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UToolFrameworkComponent
{
public:
	UToolFrameworkComponent(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class AIntervalGizmoActor
{
public:
	AIntervalGizmoActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UGizmoLineHandleComponent GetUpIntervalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UGizmoLineHandleComponent(ptr_addr);
	}
	struct UGizmoLineHandleComponent GetDownIntervalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UGizmoLineHandleComponent(ptr_addr);
	}
	struct UGizmoLineHandleComponent GetForwardIntervalComponent() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UGizmoLineHandleComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UInteractiveToolsContext
{
public:
	UInteractiveToolsContext(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UInputRouter GetInputRouter() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 88);
		return struct UInputRouter(ptr_addr);
	}
	struct UInteractiveToolManager GetToolManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 96);
		return struct UInteractiveToolManager(ptr_addr);
	}
	struct UInteractiveGizmoManager GetGizmoManager() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 104);
		return struct UInteractiveGizmoManager(ptr_addr);
	}
	struct TSoftClassPtr<UObject> GetToolManagerClass() {
		return memory.read<struct TSoftClassPtr<UObject>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class UIntervalGizmoBuilder
{
public:
	UIntervalGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoBaseFloatParameterSource
{
public:
	UGizmoBaseFloatParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMouseHoverBehavior
{
public:
	UMouseHoverBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoAxisTranslationParameterSource
{
public:
	UGizmoAxisTranslationParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 144);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 160);
	}
	float GetParameter() {
		return memory.read<float>(m_addr + 176);
	}
	struct FGizmoFloatParameterChange GetLastChange() {
		return memory.read<struct FGizmoFloatParameterChange>(m_addr + 180);
	}
	struct FVector GetCurTranslationAxis() {
		return memory.read<struct FVector>(m_addr + 188);
	}
	struct FVector GetCurTranslationOrigin() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoPlaneTranslationParameterSource
{
public:
	UGizmoPlaneTranslationParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 144);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 160);
	}
	struct FVector2D GetParameter() {
		return memory.read<struct FVector2D>(m_addr + 176);
	}
	struct FGizmoVec2ParameterChange GetLastChange() {
		return memory.read<struct FGizmoVec2ParameterChange>(m_addr + 184);
	}
	struct FVector GetCurTranslationOrigin() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	struct FVector GetCurTranslationNormal() {
		return memory.read<struct FVector>(m_addr + 212);
	}
	struct FVector GetCurTranslationAxisX() {
		return memory.read<struct FVector>(m_addr + 224);
	}
	struct FVector GetCurTranslationAxisY() {
		return memory.read<struct FVector>(m_addr + 236);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoAxisRotationParameterSource
{
public:
	UGizmoAxisRotationParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 144);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 160);
	}
	float GetAngle() {
		return memory.read<float>(m_addr + 176);
	}
	struct FGizmoFloatParameterChange GetLastChange() {
		return memory.read<struct FGizmoFloatParameterChange>(m_addr + 180);
	}
	struct FVector GetCurRotationAxis() {
		return memory.read<struct FVector>(m_addr + 188);
	}
	struct FVector GetCurRotationOrigin() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 224);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoAxisScaleParameterSource
{
public:
	UGizmoAxisScaleParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 72);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 88);
	}
	float GetScaleMultiplier() {
		return memory.read<float>(m_addr + 104);
	}
	float GetParameter() {
		return memory.read<float>(m_addr + 108);
	}
	struct FGizmoFloatParameterChange GetLastChange() {
		return memory.read<struct FGizmoFloatParameterChange>(m_addr + 112);
	}
	struct FVector GetCurScaleAxis() {
		return memory.read<struct FVector>(m_addr + 120);
	}
	struct FVector GetCurScaleOrigin() {
		return memory.read<struct FVector>(m_addr + 132);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 144);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoPlaneScaleParameterSource
{
public:
	UGizmoPlaneScaleParameterSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 144);
	}
	struct TScriptInterface<IGizmoTransformSource> GetTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 160);
	}
	float GetScaleMultiplier() {
		return memory.read<float>(m_addr + 176);
	}
	struct FVector2D GetParameter() {
		return memory.read<struct FVector2D>(m_addr + 180);
	}
	struct FGizmoVec2ParameterChange GetLastChange() {
		return memory.read<struct FGizmoVec2ParameterChange>(m_addr + 188);
	}
	struct FVector GetCurScaleOrigin() {
		return memory.read<struct FVector>(m_addr + 204);
	}
	struct FVector GetCurScaleNormal() {
		return memory.read<struct FVector>(m_addr + 216);
	}
	struct FVector GetCurScaleAxisX() {
		return memory.read<struct FVector>(m_addr + 228);
	}
	struct FVector GetCurScaleAxisY() {
		return memory.read<struct FVector>(m_addr + 240);
	}
	struct FTransform GetInitialTransform() {
		return memory.read<struct FTransform>(m_addr + 256);
	}

private:
	std::uint64_t m_addr = 0;
};


class UPlanePositionGizmoBuilder
{
public:
	UPlanePositionGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UPlanePositionGizmo
{
public:
	UPlanePositionGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoAxisSource> GetAxisSource() {
		return memory.read<struct TScriptInterface<IGizmoAxisSource>>(m_addr + 72);
	}
	struct TScriptInterface<IGizmoVec2ParameterSource> GetParameterSource() {
		return memory.read<struct TScriptInterface<IGizmoVec2ParameterSource>>(m_addr + 88);
	}
	struct TScriptInterface<IGizmoClickTarget> GetHitTarget() {
		return memory.read<struct TScriptInterface<IGizmoClickTarget>>(m_addr + 104);
	}
	struct TScriptInterface<IGizmoStateTarget> GetStateTarget() {
		return memory.read<struct TScriptInterface<IGizmoStateTarget>>(m_addr + 120);
	}
	bool GetbEnableSignedAxis() {
		return memory.read<bool>(m_addr + 136);
	}
	bool GetbFlipX() {
		return memory.read<bool>(m_addr + 137);
	}
	bool GetbFlipY() {
		return memory.read<bool>(m_addr + 138);
	}
	bool GetbInInteraction() {
		return memory.read<bool>(m_addr + 139);
	}
	struct FVector GetInteractionOrigin() {
		return memory.read<struct FVector>(m_addr + 140);
	}
	struct FVector GetInteractionNormal() {
		return memory.read<struct FVector>(m_addr + 152);
	}
	struct FVector GetInteractionAxisX() {
		return memory.read<struct FVector>(m_addr + 164);
	}
	struct FVector GetInteractionAxisY() {
		return memory.read<struct FVector>(m_addr + 176);
	}
	struct FVector GetInteractionStartPoint() {
		return memory.read<struct FVector>(m_addr + 188);
	}
	struct FVector GetInteractionCurPoint() {
		return memory.read<struct FVector>(m_addr + 200);
	}
	struct FVector2D GetInteractionStartParameter() {
		return memory.read<struct FVector2D>(m_addr + 212);
	}
	struct FVector2D GetInteractionCurParameter() {
		return memory.read<struct FVector2D>(m_addr + 220);
	}
	struct FVector2D GetParameterSigns() {
		return memory.read<struct FVector2D>(m_addr + 228);
	}

private:
	std::uint64_t m_addr = 0;
};


class USelectionSet
{
public:
	USelectionSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UMeshSelectionSet
{
public:
	UMeshSelectionSet(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TArray<int32_t> GetVertices() {
		return memory.read<struct TArray<int32_t>>(m_addr + 64);
	}
	struct TArray<int32_t> GetEdges() {
		return memory.read<struct TArray<int32_t>>(m_addr + 80);
	}
	struct TArray<int32_t> GetFaces() {
		return memory.read<struct TArray<int32_t>>(m_addr + 96);
	}
	struct TArray<int32_t> GetGroups() {
		return memory.read<struct TArray<int32_t>>(m_addr + 112);
	}

private:
	std::uint64_t m_addr = 0;
};


class USingleClickInputBehavior
{
public:
	USingleClickInputBehavior(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetHitTestOnRelease() {
		return memory.read<bool>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class USingleClickToolBuilder
{
public:
	USingleClickToolBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoNilStateTarget
{
public:
	UGizmoNilStateTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoLambdaStateTarget
{
public:
	UGizmoLambdaStateTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoObjectModifyStateTarget
{
public:
	UGizmoObjectModifyStateTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoTransformChangeStateTarget
{
public:
	UGizmoTransformChangeStateTarget(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IToolContextTransactionProvider> GetTransactionManager() {
		return memory.read<struct TScriptInterface<IToolContextTransactionProvider>>(m_addr + 80);
	}

private:
	std::uint64_t m_addr = 0;
};


class ATransformGizmoActor
{
public:
	ATransformGizmoActor(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UPrimitiveComponent GetTranslateX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 544);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetTranslateY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 552);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetTranslateZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 560);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetTranslateYZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 568);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetTranslateXZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 576);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetTranslateXY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 584);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetRotateX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 592);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetRotateY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 600);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetRotateZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 608);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetUniformScale() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 616);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetAxisScaleX() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 624);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetAxisScaleY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 632);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetAxisScaleZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 640);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetPlaneScaleYZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 648);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetPlaneScaleXZ() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 656);
		return struct UPrimitiveComponent(ptr_addr);
	}
	struct UPrimitiveComponent GetPlaneScaleXY() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 664);
		return struct UPrimitiveComponent(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTransformGizmoBuilder
{
public:
	UTransformGizmoBuilder(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UTransformGizmo
{
public:
	UTransformGizmo(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformProxy GetActiveTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 64);
		return struct UTransformProxy(ptr_addr);
	}
	bool GetbSnapToWorldGrid() {
		return memory.read<bool>(m_addr + 72);
	}
	bool GetbGridSizeIsExplicit() {
		return memory.read<bool>(m_addr + 73);
	}
	struct FVector GetExplicitGridSize() {
		return memory.read<struct FVector>(m_addr + 76);
	}
	bool GetbRotationGridSizeIsExplicit() {
		return memory.read<bool>(m_addr + 88);
	}
	struct FRotator GetExplicitRotationGridSize() {
		return memory.read<struct FRotator>(m_addr + 92);
	}
	bool GetbSnapToWorldRotGrid() {
		return memory.read<bool>(m_addr + 104);
	}
	bool GetbUseContextCoordinateSystem() {
		return memory.read<bool>(m_addr + 105);
	}
	enum class EToolContextCoordinateSystem GetCurrentCoordinateSystem() {
		return memory.read<enum class EToolContextCoordinateSystem>(m_addr + 108);
	}
	struct TArray<struct UPrimitiveComponent> GetActiveComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 256);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}
	struct TArray<struct UPrimitiveComponent> GetNonuniformScaleComponents() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 272);
		return struct TArray<struct UPrimitiveComponent>(ptr_addr);
	}
	struct TArray<struct UInteractiveGizmo> GetActiveGizmos() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 288);
		return struct TArray<struct UInteractiveGizmo>(ptr_addr);
	}
	struct UGizmoConstantFrameAxisSource GetCameraAxisSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 320);
		return struct UGizmoConstantFrameAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetAxisXSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 328);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetAxisYSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 336);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetAxisZSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 344);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetUnitAxisXSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 352);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetUnitAxisYSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 360);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoComponentAxisSource GetUnitAxisZSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 368);
		return struct UGizmoComponentAxisSource(ptr_addr);
	}
	struct UGizmoTransformChangeStateTarget GetStateTarget() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 376);
		return struct UGizmoTransformChangeStateTarget(ptr_addr);
	}
	struct UGizmoScaledTransformSource GetScaledTransformSource() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 384);
		return struct UGizmoScaledTransformSource(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


class UTransformProxy
{
public:
	UTransformProxy(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	bool GetbRotatePerObject() {
		return memory.read<bool>(m_addr + 112);
	}
	bool GetbSetPivotMode() {
		return memory.read<bool>(m_addr + 113);
	}
	struct FTransform GetSharedTransform() {
		return memory.read<struct FTransform>(m_addr + 144);
	}
	struct FTransform GetInitialSharedTransform() {
		return memory.read<struct FTransform>(m_addr + 192);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoBaseTransformSource
{
public:
	UGizmoBaseTransformSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }


private:
	std::uint64_t m_addr = 0;
};


class UGizmoScaledTransformSource
{
public:
	UGizmoScaledTransformSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct TScriptInterface<IGizmoTransformSource> GetChildTransformSource() {
		return memory.read<struct TScriptInterface<IGizmoTransformSource>>(m_addr + 72);
	}

private:
	std::uint64_t m_addr = 0;
};


class UGizmoTransformProxyTransformSource
{
public:
	UGizmoTransformProxyTransformSource(std::uint64_t p_addr = 0) : m_addr(p_addr) {}

	std::uint64_t GetAddress() { return m_addr; }

	bool IsValidClass() { return m_addr > 0; }

	struct UTransformProxy GetProxy() {
		auto ptr_addr = memory.read<std::uint64_t>(m_addr + 72);
		return struct UTransformProxy(ptr_addr);
	}

private:
	std::uint64_t m_addr = 0;
};


