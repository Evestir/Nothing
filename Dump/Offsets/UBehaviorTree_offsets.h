namespace offsets
{
	namespace UBehaviorTree
	{
			constexpr auto RootNode = 0x30; // Size: 8, Type: struct UBTCompositeNode*
			constexpr auto BlackboardAsset = 0x38; // Size: 8, Type: struct UBlackboardData*
			constexpr auto RootDecorators = 0x40; // Size: 16, Type: struct TArray<struct UBTDecorator*>
			constexpr auto RootDecoratorOps = 0x50; // Size: 16, Type: struct TArray<struct FBTDecoratorLogic>
	}
} 
