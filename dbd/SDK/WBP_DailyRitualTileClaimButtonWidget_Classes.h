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
	 * WidgetBlueprintGeneratedClass WBP_DailyRitualTileClaimButtonWidget.WBP_DailyRitualTileClaimButtonWidget_C
	 * Size -> 0x0018 (FullSize[0x0420] - InheritedSize[0x0408])
	 */
	class UWBP_DailyRitualTileClaimButtonWidget_C : public UCoreButtonWidget
	{
	public:
		class UWidgetAnimation*                                    CompletedGlowAnimation;                                  // 0x0408(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UDBDImage*                                           GlowAnimation;                                           // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDBDImage*                                           Icon;                                                    // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
