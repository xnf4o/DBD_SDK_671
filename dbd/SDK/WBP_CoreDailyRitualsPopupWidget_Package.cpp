/**
 * Name: dbd
 * Version: 6711
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetProgressionButtonAlignmentAndPadding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAfterTrial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::SetProgressionButtonAlignmentAndPadding(bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetProgressionButtonAlignmentAndPadding"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_SetProgressionButtonAlignmentAndPadding_Params params {};
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAfterTrial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::SetDailyRitualDetailAlignment(bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetDailyRitualDetailAlignment"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_SetDailyRitualDetailAlignment_Params params {};
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAfterTrial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::SetBackground(bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetBackground"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_SetBackground_Params params {};
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Padding                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::GetAfterTrialProgressionButtonPadding(float* Padding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.GetAfterTrialProgressionButtonPadding"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_GetAfterTrialProgressionButtonPadding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Padding != nullptr)
			*Padding = params.Padding;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isAfterTrial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::SetVisuals(bool isAfterTrial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.SetVisuals"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_SetVisuals_Params params {};
		params.isAfterTrial = isAfterTrial;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreDailyRitualsPopupWidget_C::ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C.ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget"));
		
		UWBP_CoreDailyRitualsPopupWidget_C_ExecuteUbergraph_WBP_CoreDailyRitualsPopupWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CoreDailyRitualsPopupWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CoreDailyRitualsPopupWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_CoreDailyRitualsPopupWidget.WBP_CoreDailyRitualsPopupWidget_C"));
		return ptr;
	}

}


