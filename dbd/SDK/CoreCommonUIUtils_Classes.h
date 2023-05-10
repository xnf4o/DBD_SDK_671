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
	 * Class CoreCommonUIUtils.CoreCommonUIUtils
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCoreCommonUIUtils : public UBlueprintFunctionLibrary
	{
	public:
		class FText STATIC_WrapTextWithStyleTag(const class FText& Text, const class FText& Style);
		bool STATIC_HasOuter(class UObject* Object, class UObject* Root);
		class FText STATIC_GetTextBasedOnRarity(EItemRarity Rarity);
		float STATIC_GetDPIScale();
		class FText STATIC_GetBeautifiedNumericText(int32_t value);
		class FString STATIC_GetBeautifiedNumericString(int32_t value);
		class FString STATIC_BeautifyNarrativeText(const class FString& str, int32_t charLimit);
		class FString STATIC_BeautifyName(const class FString& Name, int32_t maxCharacters);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
