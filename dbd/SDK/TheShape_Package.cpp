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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillStandingInteractionDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillStandingInteractionDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheShape.KillStandingInteractionDefinition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051FCD50
	 * 		Name   -> Function TheShape.ObjectOfObsession.Authority_OnPlayerImmobilizeStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectOfObsession::Authority_OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheShape.ObjectOfObsession.Authority_OnPlayerImmobilizeStateChanged"));
		
		UObjectOfObsession_Authority_OnPlayerImmobilizeStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051FCC80
	 * 		Name   -> Function TheShape.ObjectOfObsession.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UObjectOfObsession::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheShape.ObjectOfObsession.Authority_OnDamageStateChanged"));
		
		UObjectOfObsession_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObjectOfObsession.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObjectOfObsession::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheShape.ObjectOfObsession"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShapeAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShapeAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheShape.ShapeAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShapePounceAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShapePounceAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheShape.ShapePounceAttackOpenSubstate"));
		return ptr;
	}

}


