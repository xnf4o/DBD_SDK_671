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
	 * Class Penalty.PenaltyTracker
	 * Size -> 0x0088 (FullSize[0x00B8] - InheritedSize[0x0030])
	 */
	class UPenaltyTracker : public UObject
	{
	public:
		unsigned char                                              UnknownData_IPRC[0x88];                                  // 0x0030(0x0088) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
