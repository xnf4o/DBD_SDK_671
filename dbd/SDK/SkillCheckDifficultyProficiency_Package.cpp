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
	 * 		Name   -> Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool USkillCheckDifficultyProficiency_C::GetIsActive(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetIsActive"));
		
		USkillCheckDifficultyProficiency_C_GetIsActive_Params params {};
		params.chargeableInteraction = chargeableInteraction;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              value                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	EStatusEffectType USkillCheckDifficultyProficiency_C::GetType(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetType"));
		
		USkillCheckDifficultyProficiency_C_GetType_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 * Parameters:
	 * 		class UChargeableInteractionDefinition*            chargeableInteraction                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	float USkillCheckDifficultyProficiency_C::GetValue(class UChargeableInteractionDefinition* chargeableInteraction, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C.GetValue"));
		
		USkillCheckDifficultyProficiency_C_GetValue_Params params {};
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
	 * 		Name   -> PredefinedFunction USkillCheckDifficultyProficiency_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkillCheckDifficultyProficiency_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("BlueprintGeneratedClass SkillCheckDifficultyProficiency.SkillCheckDifficultyProficiency_C"));
		return ptr;
	}

}


