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
	 * WidgetBlueprintGeneratedClass WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C
	 * Size -> 0x0018 (FullSize[0x03F0] - InheritedSize[0x03D8])
	 */
	class UWBP_CoreDailyRitualsPopupWidget_C : public UDailyRitualsPopupWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              BackgroundDetails;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDBDImage*                                           Smoke;                                                   // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		void SetProgressionButtonAlignmentAndPadding(bool isAfterTrial);
		void SetDailyRitualDetailAlignment(bool isAfterTrial);
		void SetBackground(bool isAfterTrial);
		void GetAfterTrialProgressionButtonPadding(float* Padding);
		void SetVisuals(bool isAfterTrial);
		void ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
