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
	 * 		Name   -> Function PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C.IsLungeAttackAugmented
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  SlasherPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsLungeAttackAugmented                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPounceAttackOpenSubstate_BP_C::IsLungeAttackAugmented(class ADBDPlayer* SlasherPlayer, bool* IsLungeAttackAugmented)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C.IsLungeAttackAugmented"));
		
		UPounceAttackOpenSubstate_BP_C_IsLungeAttackAugmented_Params params {};
		params.SlasherPlayer = SlasherPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLungeAttackAugmented != nullptr)
			*IsLungeAttackAugmented = params.IsLungeAttackAugmented;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPounceAttackOpenSubstate_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPounceAttackOpenSubstate_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass PounceAttackOpenSubstate_BP.PounceAttackOpenSubstate_BP_C"));
		return ptr;
	}

}


