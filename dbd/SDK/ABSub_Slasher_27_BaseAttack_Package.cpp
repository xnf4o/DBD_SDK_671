﻿/**
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
	 * 		Name   -> Function ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.BlueprintInitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UABSub_Slasher_27_BaseAttack_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.BlueprintInitializeAnimation"));
		
		UABSub_Slasher_27_BaseAttack_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.ExecuteUbergraph_ABSub_Slasher_27_BaseAttack
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABSub_Slasher_27_BaseAttack_C::ExecuteUbergraph_ABSub_Slasher_27_BaseAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C.ExecuteUbergraph_ABSub_Slasher_27_BaseAttack"));
		
		UABSub_Slasher_27_BaseAttack_C_ExecuteUbergraph_ABSub_Slasher_27_BaseAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABSub_Slasher_27_BaseAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABSub_Slasher_27_BaseAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("AnimBlueprintGeneratedClass ABSub_Slasher_27_BaseAttack.ABSub_Slasher_27_BaseAttack_C"));
		return ptr;
	}

}


