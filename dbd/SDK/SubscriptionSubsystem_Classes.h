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
	 * Class SubscriptionSubsystem.SubscriptionSubsystem
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class USubscriptionSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_6JTZ[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
