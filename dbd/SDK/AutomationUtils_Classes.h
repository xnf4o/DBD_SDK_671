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
	 * Class AutomationUtils.AutomationUtilsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UAutomationUtilsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_TakeGameplayAutomationScreenshot(const class FString& ScreenshotName, float MaxGlobalError, float MaxLocalError, const class FString& MapNameOverride);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
