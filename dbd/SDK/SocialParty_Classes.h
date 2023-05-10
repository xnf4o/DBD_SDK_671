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
	 * Class SocialParty.PartyFacade
	 * Size -> 0x0498 (FullSize[0x04C8] - InheritedSize[0x0030])
	 */
	class UPartyFacade : public UObject
	{
	public:
		unsigned char                                              UnknownData_9LWB[0x498];                                 // 0x0030(0x0498) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
