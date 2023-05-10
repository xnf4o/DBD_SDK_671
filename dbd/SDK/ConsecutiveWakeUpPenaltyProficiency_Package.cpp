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
	 * 		Name   -> Function ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C.GetValue
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UConsecutiveWakeUpPenaltyProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C.GetValue"));
		
		UConsecutiveWakeUpPenaltyProficiency_C_GetValue_Params params {};
		params.chargeableInteraction = chargeableInteraction;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConsecutiveWakeUpPenaltyProficiency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConsecutiveWakeUpPenaltyProficiency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass ConsecutiveWakeUpPenaltyProficiency.ConsecutiveWakeUpPenaltyProficiency_C"));
		return ptr;
	}

}


