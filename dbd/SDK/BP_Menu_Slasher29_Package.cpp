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
	 * 		Name   -> Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.BeginSmokeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher29_C::BeginSmokeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.BeginSmokeIn"));
		
		ABP_Menu_Slasher29_C_BeginSmokeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.EnableCloth
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher29_C::EnableCloth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.EnableCloth"));
		
		ABP_Menu_Slasher29_C_EnableCloth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.PlayTentacleInterrupt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Menu_Slasher29_C::PlayTentacleInterrupt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.PlayTentacleInterrupt"));
		
		ABP_Menu_Slasher29_C_PlayTentacleInterrupt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.ExecuteUbergraph_BP_Menu_Slasher29
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Menu_Slasher29_C::ExecuteUbergraph_BP_Menu_Slasher29(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function BP_Menu_Slasher29.BP_Menu_Slasher29_C.ExecuteUbergraph_BP_Menu_Slasher29"));
		
		ABP_Menu_Slasher29_C_ExecuteUbergraph_BP_Menu_Slasher29_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Menu_Slasher29_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Menu_Slasher29_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass BP_Menu_Slasher29.BP_Menu_Slasher29_C"));
		return ptr;
	}

}


