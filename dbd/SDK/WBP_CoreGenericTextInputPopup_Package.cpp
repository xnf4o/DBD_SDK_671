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
	 * 		Name   -> Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericTextInputPopup_C::SetHeaderColor(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.SetHeaderColor"));
		
		UWBP_CoreGenericTextInputPopup_C_SetHeaderColor_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericTextInputPopup_C::Show(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Show"));
		
		UWBP_CoreGenericTextInputPopup_C_Show_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Hide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWBP_CoreGenericTextInputPopup_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.Hide"));
		
		UWBP_CoreGenericTextInputPopup_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CoreGenericTextInputPopup_C::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.HandleAnalogInputEvent"));
		
		UWBP_CoreGenericTextInputPopup_C_HandleAnalogInputEvent_Params params {};
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericTextInputPopup_C::ExecuteUbergraph_WBP_CoreGenericTextInputPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C.ExecuteUbergraph_WBP_CoreGenericTextInputPopup"));
		
		UWBP_CoreGenericTextInputPopup_C_ExecuteUbergraph_WBP_CoreGenericTextInputPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CoreGenericTextInputPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CoreGenericTextInputPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_CoreGenericTextInputPopup.WBP_CoreGenericTextInputPopup_C"));
		return ptr;
	}

}


