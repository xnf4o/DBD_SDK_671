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
	 * 		RVA    -> 0x04624730
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorStatusComponent::OnValidatedInteractionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionStarted"));
		
		USurvivorStatusComponent_OnValidatedInteractionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624730
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorStatusComponent::OnValidatedInteractionEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnValidatedInteractionEnded"));
		
		USurvivorStatusComponent_OnValidatedInteractionEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624750
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorStatusComponent::OnSuvivorDamaged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSuvivorDamaged"));
		
		USurvivorStatusComponent_OnSuvivorDamaged_Params params {};
		params.oldDamageState = oldDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void USurvivorStatusComponent::OnSurivorStatusChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnSurivorStatusChange"));
		
		USurvivorStatusComponent_OnSurivorStatusChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046246A0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorStatusComponent::OnRunningAndMovementChanged(bool isRunningAndMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnRunningAndMovementChanged"));
		
		USurvivorStatusComponent_OnRunningAndMovementChanged_Params params {};
		params.isRunningAndMoving = isRunningAndMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624750
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorStatusComponent::OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnPlayerImmobilizeStateChanged"));
		
		USurvivorStatusComponent_OnPlayerImmobilizeStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624730
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorStatusComponent::OnHookedStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnHookedStateChanged"));
		
		USurvivorStatusComponent_OnHookedStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624730
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorStatusComponent::OnGuidedStateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnGuidedStateChanged"));
		
		USurvivorStatusComponent_OnGuidedStateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046246A0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isCrouched                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorStatusComponent::OnCrouchChanged(bool isCrouched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.OnCrouchChanged"));
		
		USurvivorStatusComponent_OnCrouchChanged_Params params {};
		params.isCrouched = isCrouched;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624670
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsSleeping()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsSleeping"));
		
		USurvivorStatusComponent_IsSleeping_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624640
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsRunning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsRunning"));
		
		USurvivorStatusComponent_IsRunning_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624610
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsInjured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsInjured"));
		
		USurvivorStatusComponent_IsInjured_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046245E0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsHooked()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHooked"));
		
		USurvivorStatusComponent_IsHooked_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046245B0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsHiding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHiding"));
		
		USurvivorStatusComponent_IsHiding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624580
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsHealing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHealing"));
		
		USurvivorStatusComponent_IsHealing_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624550
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsHarpooned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsHarpooned"));
		
		USurvivorStatusComponent_IsHarpooned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624520
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsGettingStrangled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingStrangled"));
		
		USurvivorStatusComponent_IsGettingStrangled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046244F0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsGettingSacrificed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsGettingSacrificed"));
		
		USurvivorStatusComponent_IsGettingSacrificed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046244C0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsDying()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsDying"));
		
		USurvivorStatusComponent_IsDying_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624490
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsDead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsDead"));
		
		USurvivorStatusComponent_IsDead_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624460
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsCrouching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCrouching"));
		
		USurvivorStatusComponent_IsCrouching_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04624430
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorStatusComponent::IsCaptured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.IsCaptured"));
		
		USurvivorStatusComponent_IsCaptured_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x046242F0
	 * 		Name   -> Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		float                                              currentMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              percentMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              maximumMovementSpeed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorStatusComponent::GetMovementSpeed(float* currentMovementSpeed, float* percentMovementSpeed, float* maximumMovementSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDGameplayPresenter.SurvivorStatusComponent.GetMovementSpeed"));
		
		USurvivorStatusComponent_GetMovementSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (currentMovementSpeed != nullptr)
			*currentMovementSpeed = params.currentMovementSpeed;
		if (percentMovementSpeed != nullptr)
			*percentMovementSpeed = params.percentMovementSpeed;
		if (maximumMovementSpeed != nullptr)
			*maximumMovementSpeed = params.maximumMovementSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorStatusComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorStatusComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDGameplayPresenter.SurvivorStatusComponent"));
		return ptr;
	}

}


