namespace offsets
{
	namespace UNiagaraComponentRendererProperties
	{
			constexpr auto ComponentType = 0x78; // Size: 8, Type: USceneComponent*
			constexpr auto ComponentCountLimit = 0x80; // Size: 4, Type: uint32_t
			constexpr auto EnabledBinding = 0x88; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto RendererVisibilityTagBinding = 0xe0; // Size: 88, Type: struct FNiagaraVariableAttributeBinding
			constexpr auto bAssignComponentsOnParticleID = 0x138; // Size: 1, Type: bool
			constexpr auto bOnlyCreateComponentsOnParticleSpawn = 0x139; // Size: 1, Type: bool
			constexpr auto RendererVisibility = 0x13c; // Size: 4, Type: int32_t
			constexpr auto TemplateComponent = 0x140; // Size: 8, Type: struct USceneComponent*
			constexpr auto PropertyBindings = 0x148; // Size: 16, Type: struct TArray<struct FNiagaraComponentPropertyBinding>
	}
} 
