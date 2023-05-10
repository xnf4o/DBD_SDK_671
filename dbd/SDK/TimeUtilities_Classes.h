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
	 * Class TimeUtilities.DBDTimeUtilities
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class UDBDTimeUtilities : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_BJR4[0x38];                                  // 0x0038(0x0038) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
