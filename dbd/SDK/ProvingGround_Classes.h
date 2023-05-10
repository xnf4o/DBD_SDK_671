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
	 * Class ProvingGround.ProvingGroundManager
	 * Size -> 0x0080 (FullSize[0x00B8] - InheritedSize[0x0038])
	 */
	class UProvingGroundManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_3ACT[0x80];                                  // 0x0038(0x0080) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
