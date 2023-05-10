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
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETextJustify                                       newAlignment                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreStandardButton_C::OnAlignmentChanged(ETextJustify newAlignment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnAlignmentChanged"));
		
		UWBP_CoreStandardButton_C_OnAlignmentChanged_Params params {};
		params.newAlignment = newAlignment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_CoreStandardButton_C::OnHovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnHovered"));
		
		UWBP_CoreStandardButton_C_OnHovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_CoreStandardButton_C::OnUnhovered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnUnhovered"));
		
		UWBP_CoreStandardButton_C_OnUnhovered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_CoreStandardButton_C::OnPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnPressed"));
		
		UWBP_CoreStandardButton_C_OnPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsEnabled                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreStandardButton_C::OnEnabledChanged(bool IsEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.OnEnabledChanged"));
		
		UWBP_CoreStandardButton_C_OnEnabledChanged_Params params {};
		params.IsEnabled = IsEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreStandardButton_C::ExecuteUbergraph_WBP_CoreStandardButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreStandardButton.WBP_CoreStandardButton_C.ExecuteUbergraph_WBP_CoreStandardButton"));
		
		UWBP_CoreStandardButton_C_ExecuteUbergraph_WBP_CoreStandardButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CoreStandardButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CoreStandardButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_CoreStandardButton.WBP_CoreStandardButton_C"));
		return ptr;
	}

}


