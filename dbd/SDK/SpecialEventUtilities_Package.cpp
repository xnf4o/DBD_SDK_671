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
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARespawnableInteractable::OnUnhidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnableInteractable.OnUnhidden"));
		
		ARespawnableInteractable_OnUnhidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EDA140
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ARespawnableInteractable::OnRep_IsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnableInteractable.OnRep_IsHidden"));
		
		ARespawnableInteractable_OnRep_IsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.OnHidden
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ARespawnableInteractable::OnHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnableInteractable.OnHidden"));
		
		ARespawnableInteractable_OnHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EDA110
	 * 		Name   -> Function SpecialEventUtilities.RespawnableInteractable.IsHidden
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ARespawnableInteractable::IsHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnableInteractable.IsHidden"));
		
		ARespawnableInteractable_IsHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARespawnableInteractable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARespawnableInteractable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnableInteractable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void URespawningEventComponent::DBD_ForceRespawnSpecialEventObject()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawningEventComponent.DBD_ForceRespawnSpecialEventObject"));
		
		URespawningEventComponent_DBD_ForceRespawnSpecialEventObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EDABC0
	 * 		Name   -> Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URespawningEventComponent::Authority_OnIsInteractingWithAnyRespawnableInteractableChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawningEventComponent.Authority_OnIsInteractingWithAnyRespawnableInteractableChanged"));
		
		URespawningEventComponent_Authority_OnIsInteractingWithAnyRespawnableInteractableChanged_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawningEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawningEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawningEventComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnableTrigger"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED9BC0
	 * 		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    newRespawnableInteractable                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionRespawnableTrigger::Authority_OnNewRespawnableSubscribed(class ARespawnableInteractable* newRespawnableInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnNewRespawnableSubscribed"));
		
		UInteractionRespawnableTrigger_Authority_OnNewRespawnableSubscribed_Params params {};
		params.newRespawnableInteractable = newRespawnableInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04ED9B30
	 * 		Name   -> Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInteractionRespawnableTrigger::Authority_OnInteractionEnded(class ARespawnableInteractable* RespawnableInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.InteractionRespawnableTrigger.Authority_OnInteractionEnded"));
		
		UInteractionRespawnableTrigger_Authority_OnInteractionEnded_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionRespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionRespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.InteractionRespawnableTrigger"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerEventDispatcher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerEventDispatcher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.PlayerEventDispatcher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EDA410
	 * 		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URespawnablePositioner::Authority_OnIsInteractingChangedEvent(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnablePositioner.Authority_OnIsInteractingChangedEvent"));
		
		URespawnablePositioner_Authority_OnIsInteractingChangedEvent_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EDA380
	 * 		Name   -> Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class ARespawnableInteractable*> URespawnablePositioner::Authority_GetRespawnables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function SpecialEventUtilities.RespawnablePositioner.Authority_GetRespawnables"));
		
		URespawnablePositioner_Authority_GetRespawnables_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnablePositioner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnablePositioner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnablePositioner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnableStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnableStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnableStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnAtRandomLocationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnAtRandomLocationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnAtRandomLocationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawnFurthestFromPlayersStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawnFurthestFromPlayersStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawnFurthestFromPlayersStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URespawningEventUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URespawningEventUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.RespawningEventUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedInteractionRespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedInteractionRespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.TimedInteractionRespawnableTrigger"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedRespawnableTrigger.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedRespawnableTrigger::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class SpecialEventUtilities.TimedRespawnableTrigger"));
		return ptr;
	}

}


