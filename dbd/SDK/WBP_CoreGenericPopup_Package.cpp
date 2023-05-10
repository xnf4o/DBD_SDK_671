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
	 * 		Name   -> Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericPopup_C::SetHeaderColor(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.SetHeaderColor"));
		
		UWBP_CoreGenericPopup_C_SetHeaderColor_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UBasePopupViewData*                          Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericPopup_C::Show(class UBasePopupViewData* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Show"));
		
		UWBP_CoreGenericPopup_C_Show_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UWBP_CoreGenericPopup_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.Hide"));
		
		UWBP_CoreGenericPopup_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FAnalogInputEvent                           InAnalogInputEvent                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CoreGenericPopup_C::HandleAnalogInputEvent(const struct FAnalogInputEvent& InAnalogInputEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.HandleAnalogInputEvent"));
		
		UWBP_CoreGenericPopup_C_HandleAnalogInputEvent_Params params {};
		params.InAnalogInputEvent = InAnalogInputEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreGenericPopup_C::ExecuteUbergraph_WBP_CoreGenericPopup(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreGenericPopup.WBP_CoreGenericPopup_C.ExecuteUbergraph_WBP_CoreGenericPopup"));
		
		UWBP_CoreGenericPopup_C_ExecuteUbergraph_WBP_CoreGenericPopup_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CoreGenericPopup_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CoreGenericPopup_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_CoreGenericPopup.WBP_CoreGenericPopup_C"));
		return ptr;
	}

}


