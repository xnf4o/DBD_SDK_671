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
	 * 		Name   -> PredefinedFunction UAddon_ThePig_JigsawSketch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_ThePig_JigsawSketch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.Addon_ThePig_JigsawSketch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051F5970
	 * 		Name   -> Function ThePig.AttachReverseBearTrap.GetCamper
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UAttachReverseBearTrap::GetCamper()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ThePig.AttachReverseBearTrap.GetCamper"));
		
		UAttachReverseBearTrap_GetCamper_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAttachReverseBearTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAttachReverseBearTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.AttachReverseBearTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDetectivesHunch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDetectivesHunch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.DetectivesHunch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK11AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK11AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.K11AnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttackOpenSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttackHittingSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttackMissSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAmbushAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAmbushAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.PigAmbushAttackObstructSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URBTSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URBTSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.RBTSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051F6ED0
	 * 		Name   -> Function ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool URemoveReverseBearTrapChargeable::HasSuccessfullyRemoved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ThePig.RemoveReverseBearTrapChargeable.HasSuccessfullyRemoved"));
		
		URemoveReverseBearTrapChargeable_HasSuccessfullyRemoved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               searchingPlayer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoveReverseBearTrapChargeable::BP_OnFinishWithoutDetach(class ACamperPlayer* searchingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithoutDetach"));
		
		URemoveReverseBearTrapChargeable_BP_OnFinishWithoutDetach_Params params {};
		params.searchingPlayer = searchingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               searchingPlayer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoveReverseBearTrapChargeable::BP_OnFinishWithDetach(class ACamperPlayer* searchingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function ThePig.RemoveReverseBearTrapChargeable.BP_OnFinishWithDetach"));
		
		URemoveReverseBearTrapChargeable_BP_OnFinishWithDetach_Params params {};
		params.searchingPlayer = searchingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveReverseBearTrapChargeable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveReverseBearTrapChargeable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class ThePig.RemoveReverseBearTrapChargeable"));
		return ptr;
	}

}


