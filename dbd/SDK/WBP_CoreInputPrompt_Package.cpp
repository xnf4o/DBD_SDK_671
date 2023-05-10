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
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FInputPromptDataRow                         PromptDataRow                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_CoreInputPrompt_C::HandlePromptDataRow(struct FInputPromptDataRow* PromptDataRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandlePromptDataRow"));
		
		UWBP_CoreInputPrompt_C_HandlePromptDataRow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PromptDataRow != nullptr)
			*PromptDataRow = params.PromptDataRow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_CoreInputPrompt_C::HandleUnfoundPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.HandleUnfoundPrompt"));
		
		UWBP_CoreInputPrompt_C_HandleUnfoundPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UDataTable*                                  DataTable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsFound                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreInputPrompt_C::GetDataTable(class UDataTable** DataTable, bool* IsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.GetDataTable"));
		
		UWBP_CoreInputPrompt_C_GetDataTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DataTable != nullptr)
			*DataTable = params.DataTable;
		if (IsFound != nullptr)
			*IsFound = params.IsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  IconTexture                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreInputPrompt_C::SetIconTexture(class UTexture2D** IconTexture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.SetIconTexture"));
		
		UWBP_CoreInputPrompt_C_SetIconTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IconTexture != nullptr)
			*IconTexture = params.IconTexture;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CoreInputPrompt_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.PreConstruct"));
		
		UWBP_CoreInputPrompt_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWBP_CoreInputPrompt_C::DisplayPrompt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.DisplayPrompt"));
		
		UWBP_CoreInputPrompt_C_DisplayPrompt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CoreInputPrompt_C::ExecuteUbergraph_WBP_CoreInputPrompt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function WBP_CoreInputPrompt.WBP_CoreInputPrompt_C.ExecuteUbergraph_WBP_CoreInputPrompt"));
		
		UWBP_CoreInputPrompt_C_ExecuteUbergraph_WBP_CoreInputPrompt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CoreInputPrompt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CoreInputPrompt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("WidgetBlueprintGeneratedClass WBP_CoreInputPrompt.WBP_CoreInputPrompt_C"));
		return ptr;
	}

}


