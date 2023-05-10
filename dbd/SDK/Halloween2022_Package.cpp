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
	 * 		RVA    -> 0x04EBC130
	 * 		Name   -> Function Halloween2022.VoidEnergyChangeQEEvaluator.ListenToOnComponentAddedEvent
	 * 		Flags  -> (Native, Protected)
	 */
	void UVoidEnergyChangeQEEvaluator::ListenToOnComponentAddedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyChangeQEEvaluator.ListenToOnComponentAddedEvent"));
		
		UVoidEnergyChangeQEEvaluator_ListenToOnComponentAddedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyChangeQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyChangeQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyChangeQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDepositEnergyInMatchQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDepositEnergyInMatchQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.DepositEnergyInMatchQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EB9620
	 * 		Name   -> Function Halloween2022.DepositVoidEnergyTierQEEvaluator.OnVoidEnergyDeposited
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDepositVoidEnergyTierQEEvaluator::OnVoidEnergyDeposited(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.DepositVoidEnergyTierQEEvaluator.OnVoidEnergyDeposited"));
		
		UDepositVoidEnergyTierQEEvaluator_OnVoidEnergyDeposited_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDepositVoidEnergyTierQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDepositVoidEnergyTierQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.DepositVoidEnergyTierQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBA0E0
	 * 		Name   -> Function Halloween2022.HalloweenCentrifugeAnimInstance.SetDesiredBlendValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              blendValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHalloweenCentrifugeAnimInstance::SetDesiredBlendValue(float blendValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.HalloweenCentrifugeAnimInstance.SetDesiredBlendValue"));
		
		UHalloweenCentrifugeAnimInstance_SetDesiredBlendValue_Params params {};
		params.blendValue = blendValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBA010
	 * 		Name   -> Function Halloween2022.HalloweenCentrifugeAnimInstance.OnEnergySpawned
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            previousEnergy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            currentEnergy                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHalloweenCentrifugeAnimInstance::OnEnergySpawned(int32_t previousEnergy, int32_t currentEnergy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.HalloweenCentrifugeAnimInstance.OnEnergySpawned"));
		
		UHalloweenCentrifugeAnimInstance_OnEnergySpawned_Params params {};
		params.previousEnergy = previousEnergy;
		params.currentEnergy = currentEnergy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.HalloweenCentrifugeAnimInstance.OnBlendValueChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              blendValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHalloweenCentrifugeAnimInstance::OnBlendValueChanged(float blendValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.HalloweenCentrifugeAnimInstance.OnBlendValueChanged"));
		
		UHalloweenCentrifugeAnimInstance_OnBlendValueChanged_Params params {};
		params.blendValue = blendValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHalloweenCentrifugeAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHalloweenCentrifugeAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.HalloweenCentrifugeAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EB9C30
	 * 		Name   -> Function Halloween2022.GeneratorCentrifugeAnimInstance.StopRepairing
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorCentrifugeAnimInstance::StopRepairing(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.GeneratorCentrifugeAnimInstance.StopRepairing"));
		
		UGeneratorCentrifugeAnimInstance_StopRepairing_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EB9B20
	 * 		Name   -> Function Halloween2022.GeneratorCentrifugeAnimInstance.StartRepairing
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UGeneratorCentrifugeAnimInstance::StartRepairing(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.GeneratorCentrifugeAnimInstance.StartRepairing"));
		
		UGeneratorCentrifugeAnimInstance_StartRepairing_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStopRepair
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorCentrifugeAnimInstance::OnStopRepair(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStopRepair"));
		
		UGeneratorCentrifugeAnimInstance_OnStopRepair_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStartRepair
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorCentrifugeAnimInstance::OnStartRepair(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.GeneratorCentrifugeAnimInstance.OnStartRepair"));
		
		UGeneratorCentrifugeAnimInstance_OnStartRepair_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorCentrifugeAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorCentrifugeAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.GeneratorCentrifugeAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBA630
	 * 		Name   -> Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerNoLongerOnHook
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMeatHookCentrifugeAnimInstance::PlayerNoLongerOnHook(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerNoLongerOnHook"));
		
		UMeatHookCentrifugeAnimInstance_PlayerNoLongerOnHook_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBA520
	 * 		Name   -> Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerHooked
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMeatHookCentrifugeAnimInstance::PlayerHooked(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.MeatHookCentrifugeAnimInstance.PlayerHooked"));
		
		UMeatHookCentrifugeAnimInstance_PlayerHooked_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerNoLongerOnHook
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AMeatHook*                                   MeatHook                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeatHookCentrifugeAnimInstance::OnPlayerNoLongerOnHook(class AMeatHook* MeatHook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerNoLongerOnHook"));
		
		UMeatHookCentrifugeAnimInstance_OnPlayerNoLongerOnHook_Params params {};
		params.MeatHook = MeatHook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerHooked
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AMeatHook*                                   MeatHook                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeatHookCentrifugeAnimInstance::OnPlayerHooked(class AMeatHook* MeatHook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.MeatHookCentrifugeAnimInstance.OnPlayerHooked"));
		
		UMeatHookCentrifugeAnimInstance_OnPlayerHooked_Params params {};
		params.MeatHook = MeatHook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeatHookCentrifugeAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeatHookCentrifugeAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.MeatHookCentrifugeAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnVoidEnergySpent
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerVoidEnergy::OnVoidEnergySpent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnVoidEnergySpent"));
		
		UPlayerVoidEnergy_OnVoidEnergySpent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyLost
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerVoidEnergy::OnVoidEnergyLost()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyLost"));
		
		UPlayerVoidEnergy_OnVoidEnergyLost_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyGained
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPlayerVoidEnergy::OnVoidEnergyGained()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnVoidEnergyGained"));
		
		UPlayerVoidEnergy_OnVoidEnergyGained_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAFB0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnRep_TotalVoidEnergySpent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerVoidEnergy::OnRep_TotalVoidEnergySpent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnRep_TotalVoidEnergySpent"));
		
		UPlayerVoidEnergy_OnRep_TotalVoidEnergySpent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAF20
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnRep_CurrentVoidEnergy
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            previousEnergyCount                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerVoidEnergy::OnRep_CurrentVoidEnergy(int32_t previousEnergyCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnRep_CurrentVoidEnergy"));
		
		UPlayerVoidEnergy_OnRep_CurrentVoidEnergy_Params params {};
		params.previousEnergyCount = previousEnergyCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAE90
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayerVoidEnergy::OnLocallyObservedChanged(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnLocallyObservedChanged"));
		
		UPlayerVoidEnergy_OnLocallyObservedChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAE70
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.OnLocallyControlledChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerVoidEnergy::OnLocallyControlledChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.OnLocallyControlledChanged"));
		
		UPlayerVoidEnergy_OnLocallyControlledChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAE40
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.GetTotalVoidEnergyDeposited
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerVoidEnergy::GetTotalVoidEnergyDeposited()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.GetTotalVoidEnergyDeposited"));
		
		UPlayerVoidEnergy_GetTotalVoidEnergyDeposited_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAE10
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.GetMaxAmountOfVoidEnergyCanReceive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerVoidEnergy::GetMaxAmountOfVoidEnergyCanReceive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.GetMaxAmountOfVoidEnergyCanReceive"));
		
		UPlayerVoidEnergy_GetMaxAmountOfVoidEnergyCanReceive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBADE0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyRewardTier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerVoidEnergy::GetCurrentVoidEnergyRewardTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyRewardTier"));
		
		UPlayerVoidEnergy_GetCurrentVoidEnergyRewardTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBADB0
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyCount
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPlayerVoidEnergy::GetCurrentVoidEnergyCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.GetCurrentVoidEnergyCount"));
		
		UPlayerVoidEnergy_GetCurrentVoidEnergyCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBAD80
	 * 		Name   -> Function Halloween2022.PlayerVoidEnergy.GetCurrentBloodPointMultiplier
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPlayerVoidEnergy::GetCurrentBloodPointMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.PlayerVoidEnergy.GetCurrentBloodPointMultiplier"));
		
		UPlayerVoidEnergy_GetCurrentBloodPointMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerVoidEnergy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerVoidEnergy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.PlayerVoidEnergy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBB500
	 * 		Name   -> Function Halloween2022.UnstableRift.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AUnstableRift::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.OnIntroCompleted"));
		
		AUnstableRift_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnTeleportStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               hadPlayerInteraction                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnstableRift::Cosmetic_OnTeleportStart(bool hadPlayerInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnTeleportStart"));
		
		AUnstableRift_Cosmetic_OnTeleportStart_Params params {};
		params.hadPlayerInteraction = hadPlayerInteraction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnTeleportFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AUnstableRift::Cosmetic_OnTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnTeleportFinished"));
		
		AUnstableRift_Cosmetic_OnTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnTeleportDelayStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AUnstableRift::Cosmetic_OnTeleportDelayStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnTeleportDelayStarted"));
		
		AUnstableRift_Cosmetic_OnTeleportDelayStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnStoppedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AUnstableRift::Cosmetic_OnStoppedInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnStoppedInteracting"));
		
		AUnstableRift_Cosmetic_OnStoppedInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnstableRift::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnStartedInteracting"));
		
		AUnstableRift_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnstableRift::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_OnInteractionCompleted"));
		
		AUnstableRift_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.UnstableRift.Cosmetic_ChangeUnstableVisibility
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AUnstableRift::Cosmetic_ChangeUnstableVisibility(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRift.Cosmetic_ChangeUnstableVisibility"));
		
		AUnstableRift_Cosmetic_ChangeUnstableVisibility_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUnstableRift.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUnstableRift::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.UnstableRift"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnstableRiftInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnstableRiftInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.UnstableRiftInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnstableRiftOutlineStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnstableRiftOutlineStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.UnstableRiftOutlineStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FD1B0
	 * 		Name   -> Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_TeleportUnstableRift
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnstableRiftTeleportationComponent::Multicast_TeleportUnstableRift(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_TeleportUnstableRift"));
		
		UUnstableRiftTeleportationComponent_Multicast_TeleportUnstableRift_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBBCA0
	 * 		Name   -> Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_PreTeleportation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     teleportLocation                                           (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hadPlayerInteraction                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnstableRiftTeleportationComponent::Multicast_PreTeleportation(const struct FVector& teleportLocation, bool hadPlayerInteraction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRiftTeleportationComponent.Multicast_PreTeleportation"));
		
		UUnstableRiftTeleportationComponent_Multicast_PreTeleportation_Params params {};
		params.teleportLocation = teleportLocation;
		params.hadPlayerInteraction = hadPlayerInteraction;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBBC80
	 * 		Name   -> Function Halloween2022.UnstableRiftTeleportationComponent.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UUnstableRiftTeleportationComponent::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.UnstableRiftTeleportationComponent.Authority_OnLevelReadyToPlay"));
		
		UUnstableRiftTeleportationComponent_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnstableRiftTeleportationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnstableRiftTeleportationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.UnstableRiftTeleportationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyAmountInMatchQEEvaluator.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyAmountInMatchQEEvaluator::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyAmountInMatchQEEvaluator"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBDAD0
	 * 		Name   -> Function Halloween2022.VoidEnergyProducer.OnRep_TotalEnergyGiven
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		int32_t                                            lastTotalEnergyGivenValue                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyProducer::OnRep_TotalEnergyGiven(int32_t lastTotalEnergyGivenValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyProducer.OnRep_TotalEnergyGiven"));
		
		UVoidEnergyProducer_OnRep_TotalEnergyGiven_Params params {};
		params.lastTotalEnergyGivenValue = lastTotalEnergyGivenValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBDAA0
	 * 		Name   -> Function Halloween2022.VoidEnergyProducer.HasEnergyLeftToGive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UVoidEnergyProducer::HasEnergyLeftToGive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyProducer.HasEnergyLeftToGive"));
		
		UVoidEnergyProducer_HasEnergyLeftToGive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBDA70
	 * 		Name   -> Function Halloween2022.VoidEnergyProducer.GetRemainingEnergy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UVoidEnergyProducer::GetRemainingEnergy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyProducer.GetRemainingEnergy"));
		
		UVoidEnergyProducer_GetRemainingEnergy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.VoidEnergyProducer.Cosmetic_OnVoidOrbsSpawned
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            orbsSpawned                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyProducer::Cosmetic_OnVoidOrbsSpawned(int32_t orbsSpawned)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyProducer.Cosmetic_OnVoidOrbsSpawned"));
		
		UVoidEnergyProducer_Cosmetic_OnVoidOrbsSpawned_Params params {};
		params.orbsSpawned = orbsSpawned;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyProducer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyProducer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyProducer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBC340
	 * 		Name   -> Function Halloween2022.VoidEnergyGeneratorComponent.GetCurrentTimeDoneOnGenerator
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UVoidEnergyGeneratorComponent::GetCurrentTimeDoneOnGenerator(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyGeneratorComponent.GetCurrentTimeDoneOnGenerator"));
		
		UVoidEnergyGeneratorComponent_GetCurrentTimeDoneOnGenerator_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyGeneratorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyGeneratorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyGeneratorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyMeatHookComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyMeatHookComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyMeatHookComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBC910
	 * 		Name   -> Function Halloween2022.VoidEnergyOrb.PlaceOrbInQueue
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 */
	void AVoidEnergyOrb::PlaceOrbInQueue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrb.PlaceOrbInQueue"));
		
		AVoidEnergyOrb_PlaceOrbInQueue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbSpawned
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerGivingOrbTo                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isLargeOrb                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoidEnergyOrb::Cosmetic_OnOrbSpawned(class ADBDPlayer* playerGivingOrbTo, bool isLargeOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbSpawned"));
		
		AVoidEnergyOrb_Cosmetic_OnOrbSpawned_Params params {};
		params.playerGivingOrbTo = playerGivingOrbTo;
		params.isLargeOrb = isLargeOrb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithoutCollection
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isLargeOrb                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoidEnergyOrb::Cosmetic_OnOrbDisappearWithoutCollection(bool isLargeOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithoutCollection"));
		
		AVoidEnergyOrb_Cosmetic_OnOrbDisappearWithoutCollection_Params params {};
		params.isLargeOrb = isLargeOrb;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithCollection
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerGivingOrbTo                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoidEnergyOrb::Cosmetic_OnOrbDisappearWithCollection(class ADBDPlayer* playerGivingOrbTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrb.Cosmetic_OnOrbDisappearWithCollection"));
		
		AVoidEnergyOrb_Cosmetic_OnOrbDisappearWithCollection_Params params {};
		params.playerGivingOrbTo = playerGivingOrbTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrb.Cosmetic_DelayBeforeCollection
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  playerGivingOrbTo                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AVoidEnergyOrb::Cosmetic_DelayBeforeCollection(class ADBDPlayer* playerGivingOrbTo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrb.Cosmetic_DelayBeforeCollection"));
		
		AVoidEnergyOrb_Cosmetic_DelayBeforeCollection_Params params {};
		params.playerGivingOrbTo = playerGivingOrbTo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVoidEnergyOrb.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVoidEnergyOrb::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyOrb"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD690
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Multicast_SpawnVoidEnergyOrb
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FOrbProperties                              OrbProperties                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               isLargeOrb                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Multicast_SpawnVoidEnergyOrb(const struct FOrbProperties& OrbProperties, bool isLargeOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Multicast_SpawnVoidEnergyOrb"));
		
		UVoidEnergyOrbSpawner_Multicast_SpawnVoidEnergyOrb_Params params {};
		params.OrbProperties = OrbProperties;
		params.isLargeOrb = isLargeOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD550
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_TimerSpawnVoidEnergyOrb
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FOrbProperties                              OrbProperties                                              (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               isLargeOrb                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_TimerSpawnVoidEnergyOrb(const struct FOrbProperties& OrbProperties, bool isLargeOrb)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_TimerSpawnVoidEnergyOrb"));
		
		UVoidEnergyOrbSpawner_Authority_TimerSpawnVoidEnergyOrb_Params params {};
		params.OrbProperties = OrbProperties;
		params.isLargeOrb = isLargeOrb;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD440
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunOnKiller
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_SurvivorStunOnKiller(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunOnKiller"));
		
		UVoidEnergyOrbSpawner_Authority_SurvivorStunOnKiller_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD330
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithPallet
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithPallet(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithPallet"));
		
		UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithPallet_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD220
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithHeadOn
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithHeadOn(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithHeadOn"));
		
		UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithHeadOn_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBD110
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithFlashLight
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_SurvivorStunKillerWithFlashLight(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_SurvivorStunKillerWithFlashLight"));
		
		UVoidEnergyOrbSpawner_Authority_SurvivorStunKillerWithFlashLight_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBCFB0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_SpawnVoidEnergyOrbs
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		struct FOrbProperties                              OrbProperties                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numberOfOrbsToSpawn                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            numberOfOrbsThatCanBeAbsorbed                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_SpawnVoidEnergyOrbs(const struct FOrbProperties& OrbProperties, int32_t numberOfOrbsToSpawn, int32_t numberOfOrbsThatCanBeAbsorbed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_SpawnVoidEnergyOrbs"));
		
		UVoidEnergyOrbSpawner_Authority_SpawnVoidEnergyOrbs_Params params {};
		params.OrbProperties = OrbProperties;
		params.numberOfOrbsToSpawn = numberOfOrbsToSpawn;
		params.numberOfOrbsThatCanBeAbsorbed = numberOfOrbsThatCanBeAbsorbed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBCEA0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_KillerDownSurvivor
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_KillerDownSurvivor(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_KillerDownSurvivor"));
		
		UVoidEnergyOrbSpawner_Authority_KillerDownSurvivor_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04EBCDD0
	 * 		Name   -> Function Halloween2022.VoidEnergyOrbSpawner.Authority_GiveVoidEnergyToPlayer
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EVoidEnergyType                                    VoidEnergyType                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            voidEnergyToAdd                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoidEnergyOrbSpawner::Authority_GiveVoidEnergyToPlayer(EVoidEnergyType VoidEnergyType, int32_t voidEnergyToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Halloween2022.VoidEnergyOrbSpawner.Authority_GiveVoidEnergyToPlayer"));
		
		UVoidEnergyOrbSpawner_Authority_GiveVoidEnergyToPlayer_Params params {};
		params.VoidEnergyType = VoidEnergyType;
		params.voidEnergyToAdd = voidEnergyToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyOrbSpawner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyOrbSpawner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyOrbSpawner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoidEnergyPumpkinComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoidEnergyPumpkinComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Halloween2022.VoidEnergyPumpkinComponent"));
		return ptr;
	}

}


