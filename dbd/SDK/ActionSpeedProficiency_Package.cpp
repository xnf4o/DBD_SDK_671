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
	 * 		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UInteractionDefinition*                      ChargeableInteraction                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  InteractingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	TArray<class ADBDPlayer*> UActionSpeedProficiency_C::FetchInteractingPlayers(class UInteractionDefinition* ChargeableInteraction, class ADBDPlayer* InteractingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActionSpeedProficiency.ActionSpeedProficiency_C.FetchInteractingPlayers"));
		
		UActionSpeedProficiency_C_FetchInteractingPlayers_Params params {};
		params.ChargeableInteraction = ChargeableInteraction;
		params.InteractingPlayer = InteractingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            ChargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  InteractingPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UActionSpeedProficiency_C::ComputeOverallspeedincludingmultipleinteractors(class UChargeableInteractionDefinition* ChargeableInteraction, class ADBDPlayer* InteractingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActionSpeedProficiency.ActionSpeedProficiency_C.Compute Overall speed including multiple interactors"));
		
		UActionSpeedProficiency_C_ComputeOverallspeedincludingmultipleinteractors_Params params {};
		params.ChargeableInteraction = ChargeableInteraction;
		params.InteractingPlayer = InteractingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            ChargeableInteraction                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UActionSpeedProficiency_C::ShouldAndCanShowMultipleActorsSpeedProficiency(class UChargeableInteractionDefinition* ChargeableInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActionSpeedProficiency.ActionSpeedProficiency_C.ShouldAndCanShowMultipleActorsSpeedProficiency"));
		
		UActionSpeedProficiency_C_ShouldAndCanShowMultipleActorsSpeedProficiency_Params params {};
		params.ChargeableInteraction = ChargeableInteraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float UActionSpeedProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ActionSpeedProficiency.ActionSpeedProficiency_C.GetValue"));
		
		UActionSpeedProficiency_C_GetValue_Params params {};
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
	 * 		Name   -> PredefinedFunction UActionSpeedProficiency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionSpeedProficiency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass ActionSpeedProficiency.ActionSpeedProficiency_C"));
		return ptr;
	}

}


