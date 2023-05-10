#pragma once

/**
 * Name: dbd
 * Version: 6711
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GameFlow.GameFlowHandler
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UGameFlowHandler : public UAbstractGameFlowHandler
	{
	public:
		unsigned char                                              UnknownData_T6K5[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
