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
	 * 		Name   -> Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_138C48CA45BF3996E8DAF7814D16D1ED
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DailyRitualTileWidget_C::Finished_138C48CA45BF3996E8DAF7814D16D1ED()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_138C48CA45BF3996E8DAF7814D16D1ED"));
		
		UWBP_DailyRitualTileWidget_C_Finished_138C48CA45BF3996E8DAF7814D16D1ED_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_F2C6128D460D972B729F1FB6DE6530D6
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DailyRitualTileWidget_C::Finished_F2C6128D460D972B729F1FB6DE6530D6()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.Finished_F2C6128D460D972B729F1FB6DE6530D6"));
		
		UWBP_DailyRitualTileWidget_C_Finished_F2C6128D460D972B729F1FB6DE6530D6_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeInAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DailyRitualTileWidget_C::PlayFadeInAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeInAnimation"));
		
		UWBP_DailyRitualTileWidget_C_PlayFadeInAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeOutAnimation
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_DailyRitualTileWidget_C::PlayFadeOutAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.PlayFadeOutAnimation"));
		
		UWBP_DailyRitualTileWidget_C_PlayFadeOutAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.ExecuteUbergraph_WBP_DailyRitualTileWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_DailyRitualTileWidget_C::ExecuteUbergraph_WBP_DailyRitualTileWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C.ExecuteUbergraph_WBP_DailyRitualTileWidget"));
		
		UWBP_DailyRitualTileWidget_C_ExecuteUbergraph_WBP_DailyRitualTileWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_DailyRitualTileWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_DailyRitualTileWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_DailyRitualTileWidget.WBP_DailyRitualTileWidget_C"));
		return ptr;
	}

}


