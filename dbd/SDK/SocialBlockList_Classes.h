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
	 * Class SocialBlockList.BlockListFacade
	 * Size -> 0x00B8 (FullSize[0x00F0] - InheritedSize[0x0038])
	 */
	class UBlockListFacade : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_4MC4[0xB8];                                  // 0x0038(0x00B8) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
