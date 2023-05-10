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
	 * Class TickUtilities.RoundRobinTicker
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class URoundRobinTicker : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_BRZB[0x50];                                  // 0x0038(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TickUtilities.TimeBudgeter
	 * Size -> 0x0058 (FullSize[0x0090] - InheritedSize[0x0038])
	 */
	class UTimeBudgeter : public UWorldSubsystem
	{
	public:
		unsigned char                                              UnknownData_0AWD[0x58];                                  // 0x0038(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
