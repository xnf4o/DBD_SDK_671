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
	 * WidgetBlueprintGeneratedClass WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C
	 * Size -> 0x0028 (FullSize[0x0460] - InheritedSize[0x0438])
	 */
	class UWBP_DailyRitualTileWidget_C : public UDailyRitualTileWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0438(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    NewDailyRitual;                                          // 0x0440(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeIn;                                                  // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeOut;                                                 // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UDBDImage*                                           RewardIcon;                                              // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void Finished_138C48CA45BF3996E8DAF7814D16D1ED();
		void Finished_F2C6128D460D972B729F1FB6DE6530D6();
		void PlayFadeInAnimation();
		void PlayFadeOutAnimation();
		void ExecuteUbergraph_WBP_DailyRitualTileWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
