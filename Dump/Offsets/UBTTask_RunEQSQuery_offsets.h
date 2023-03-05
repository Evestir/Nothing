namespace offsets
{
	namespace UBTTask_RunEQSQuery
	{
			constexpr auto QueryTemplate = 0x98; // Size: 8, Type: struct UEnvQuery*
			constexpr auto QueryParams = 0xa0; // Size: 16, Type: struct TArray<struct FEnvNamedValue>
			constexpr auto QueryConfig = 0xb0; // Size: 16, Type: struct TArray<struct FAIDynamicParam>
			constexpr auto RunMode = 0xc0; // Size: 1, Type: enum class EEnvQueryRunMode
			constexpr auto EQSQueryBlackboardKey = 0xc8; // Size: 40, Type: struct FBlackboardKeySelector
			constexpr auto bUseBBKey = 0xf0; // Size: 1, Type: bool
			constexpr auto EQSRequest = 0xf8; // Size: 72, Type: struct FEQSParametrizedQueryExecutionRequest
	}
} 
