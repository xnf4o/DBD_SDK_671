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
	 * WidgetBlueprintGeneratedClass WBP_CoreInputPrompt.WBP_CoreInputPrompt_C
	 * Size -> 0x0090 (FullSize[0x03E0] - InheritedSize[0x0350])
	 */
	class UWBP_CoreInputPrompt_C : public UCoreInputPromptWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USpacer*                                             LeftSpacerForRect;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDBDImage*                                           PromptIcon;                                              // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USpacer*                                             RightSpacerForRect;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TextLabel;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<EControlMode, class UDataTable*>                      ControlModeDataMap;                                      // 0x0378(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsPromptFound;                                           // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QX0P[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          DefaultMouseKBIcon;                                      // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EHorizontalAlignment                                       PaddingAlignment;                                        // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CQW9[0x3];                                   // 0x03D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PaddingValue;                                            // 0x03DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HandlePromptDataRow(struct FInputPromptDataRow* PromptDataRow);
		void HandleUnfoundPrompt();
		void GetDataTable(class UDataTable** DataTable, bool* IsFound);
		void SetIconTexture(class UTexture2D** IconTexture);
		void PreConstruct(bool IsDesignTime);
		void DisplayPrompt();
		void ExecuteUbergraph_WBP_CoreInputPrompt(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
