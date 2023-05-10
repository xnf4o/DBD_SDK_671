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
	 * Class Onboarding.OnboardingManager
	 * Size -> 0x0200 (FullSize[0x0238] - InheritedSize[0x0038])
	 */
	class UOnboardingManager : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_E2DD[0x200];                                 // 0x0038(0x0200) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
