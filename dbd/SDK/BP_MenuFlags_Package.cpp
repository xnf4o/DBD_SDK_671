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
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_MenuFlags_C::TML_FlagDissolveController__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__FinishedFunc"));
		
		ABP_MenuFlags_C_TML_FlagDissolveController__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_MenuFlags_C::TML_FlagDissolveController__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__UpdateFunc"));
		
		ABP_MenuFlags_C_TML_FlagDissolveController__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__Disable Shadow__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABP_MenuFlags_C::TML_FlagDissolveController__DisableShadow__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.TML_FlagDissolveController__Disable Shadow__EventFunc"));
		
		ABP_MenuFlags_C_TML_FlagDissolveController__DisableShadow__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.Event_DissolveFlag
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MenuFlags_C::Event_DissolveFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.Event_DissolveFlag"));
		
		ABP_MenuFlags_C_Event_DissolveFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.Event_QuickDissolveFlag_In
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_MenuFlags_C::Event_QuickDissolveFlag_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.Event_QuickDissolveFlag_In"));
		
		ABP_MenuFlags_C_Event_QuickDissolveFlag_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_MenuFlags_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.ReceiveBeginPlay"));
		
		ABP_MenuFlags_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_MenuFlags.BP_MenuFlags_C.ExecuteUbergraph_BP_MenuFlags
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_MenuFlags_C::ExecuteUbergraph_BP_MenuFlags(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_MenuFlags.BP_MenuFlags_C.ExecuteUbergraph_BP_MenuFlags"));
		
		ABP_MenuFlags_C_ExecuteUbergraph_BP_MenuFlags_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_MenuFlags_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_MenuFlags_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_MenuFlags.BP_MenuFlags_C"));
		return ptr;
	}

}


