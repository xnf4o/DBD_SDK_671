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
	 * Class ExperimentalFeatures.ExperimentalFeaturesManager
	 * Size -> 0x0108 (FullSize[0x0140] - InheritedSize[0x0038])
	 */
	class UExperimentalFeaturesManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_83TJ[0x108];                                 // 0x0038(0x0108) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
