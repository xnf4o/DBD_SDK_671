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
	 * Class CampaignEvents.CampaignEventsManager
	 * Size -> 0x0230 (FullSize[0x0268] - InheritedSize[0x0038])
	 */
	class UCampaignEventsManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_5CHS[0x230];                                 // 0x0038(0x0230) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
