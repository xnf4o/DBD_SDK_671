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
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_ColdDirt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_ColdDirt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_ColdDirt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseFrenzyMixtapeAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseFrenzyMixtapeAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.BaseFrenzyMixtapeAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_FranksMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_FranksMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_FranksMixTape"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_FumingMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_FumingMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_FumingMixTape"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_JoeysMixTape.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_JoeysMixTape::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_JoeysMixTape"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_MuralSketch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_MuralSketch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_MuralSketch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_NeverSleepPills.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_NeverSleepPills::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_NeverSleepPills"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_Frenzy_StolenSketchBook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_Frenzy_StolenSketchBook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Addon_Frenzy_StolenSketchBook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseImposeEffectOnFrenzyBleedout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseImposeEffectOnFrenzyBleedout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.BaseImposeEffectOnFrenzyBleedout"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrenzyAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.FrenzyAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrenzyAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.FrenzyAttackHittingSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrenzyAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.FrenzyAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518E120
	 * 		Name   -> Function TheLegion.FrenzyComponent.StartFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::StartFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.StartFrenzy"));
		
		UFrenzyComponent_StartFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518E090
	 * 		Name   -> Function TheLegion.FrenzyComponent.SetStartingFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               startingFrenzy                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::SetStartingFrenzy(bool startingFrenzy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.SetStartingFrenzy"));
		
		UFrenzyComponent_SetStartingFrenzy_Params params {};
		params.startingFrenzy = startingFrenzy;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518E000
	 * 		Name   -> Function TheLegion.FrenzyComponent.SetObjectState
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameplayTagContainerComponent*              objectState                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::SetObjectState(class UGameplayTagContainerComponent* objectState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.SetObjectState"));
		
		UFrenzyComponent_SetObjectState_Params params {};
		params.objectState = objectState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DFE0
	 * 		Name   -> Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::ResumeFrenzyChargeDepletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.ResumeFrenzyChargeDepletion"));
		
		UFrenzyComponent_ResumeFrenzyChargeDepletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DFC0
	 * 		Name   -> Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::PauseFrenzyChargeDepletion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.PauseFrenzyChargeDepletion"));
		
		UFrenzyComponent_PauseFrenzyChargeDepletion_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DFA0
	 * 		Name   -> Function TheLegion.FrenzyComponent.OnMoriStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFrenzyComponent::OnMoriStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.OnMoriStarted"));
		
		UFrenzyComponent_OnMoriStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DF80
	 * 		Name   -> Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UFrenzyComponent::OnFrenzyCooldownStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.OnFrenzyCooldownStarted"));
		
		UFrenzyComponent_OnFrenzyCooldownStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DF40
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsStartingFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsStartingFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.IsStartingFrenzy"));
		
		UFrenzyComponent_IsStartingFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DF00
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsInFrenzyCooldown
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsInFrenzyCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.IsInFrenzyCooldown"));
		
		UFrenzyComponent_IsInFrenzyCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DEC0
	 * 		Name   -> Function TheLegion.FrenzyComponent.IsInFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::IsInFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.IsInFrenzy"));
		
		UFrenzyComponent_IsInFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DEA0
	 * 		Name   -> Function TheLegion.FrenzyComponent.InitializeFrenzy
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFrenzyComponent::InitializeFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.InitializeFrenzy"));
		
		UFrenzyComponent_InitializeFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DE70
	 * 		Name   -> Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::HasStartedInjuredBleedoutDuringThisFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.HasStartedInjuredBleedoutDuringThisFrenzy"));
		
		UFrenzyComponent_HasStartedInjuredBleedoutDuringThisFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DDF0
	 * 		Name   -> Function TheLegion.FrenzyComponent.EndFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EFrenzyEndReason                                   Reason                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzyComponent::EndFrenzy(EFrenzyEndReason Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.EndFrenzy"));
		
		UFrenzyComponent_EndFrenzy_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DDB0
	 * 		Name   -> Function TheLegion.FrenzyComponent.CanStartFrenzy
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::CanStartFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.CanStartFrenzy"));
		
		UFrenzyComponent_CanStartFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518DD80
	 * 		Name   -> Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UFrenzyComponent::CanManuallyEndFrenzy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzyComponent.CanManuallyEndFrenzy"));
		
		UFrenzyComponent_CanManuallyEndFrenzy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrenzyComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzyComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.FrenzyComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518E5A0
	 * 		Name   -> Function TheLegion.FrenzySlasherVault.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFrenzySlasherVault::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.FrenzySlasherVault.OnSlasherSet"));
		
		UFrenzySlasherVault_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFrenzySlasherVault.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFrenzySlasherVault::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.FrenzySlasherVault"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UJoeysMixtapeEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoeysMixtapeEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.JoeysMixtapeEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegionAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.LegionAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegionAttackPicker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionAttackPicker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.LegionAttackPicker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518F070
	 * 		Name   -> Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void ULegionCheatComponent::DBD_LegionFrenzyForever()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.LegionCheatComponent.DBD_LegionFrenzyForever"));
		
		ULegionCheatComponent_DBD_LegionFrenzyForever_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegionCheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionCheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.LegionCheatComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518F200
	 * 		Name   -> Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegionKillerAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.LegionKillerAnalyticsComponent.SetGameEventDispatcher"));
		
		ULegionKillerAnalyticsComponent_SetGameEventDispatcher_Params params {};
		params.GameEventDispatcher = GameEventDispatcher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULegionKillerAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionKillerAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.LegionKillerAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518F540
	 * 		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UGameEventDispatcher*                        GameEventDispatcher                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULegionSurvivorAnalyticsComponent::SetGameEventDispatcher(class UGameEventDispatcher* GameEventDispatcher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.LegionSurvivorAnalyticsComponent.SetGameEventDispatcher"));
		
		ULegionSurvivorAnalyticsComponent_SetGameEventDispatcher_Params params {};
		params.GameEventDispatcher = GameEventDispatcher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518F430
	 * 		Name   -> Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void ULegionSurvivorAnalyticsComponent::OnGameEventDispatched(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.LegionSurvivorAnalyticsComponent.OnGameEventDispatched"));
		
		ULegionSurvivorAnalyticsComponent_OnGameEventDispatched_Params params {};
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
	 * 		Name   -> PredefinedFunction ULegionSurvivorAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULegionSurvivorAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.LegionSurvivorAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMadgrit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMadgrit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.Madgrit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0518F950
	 * 		Name   -> Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            tier                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UModifyFrenzyFOVEffect::Authority_OnFrenzyTierIncreased(int32_t tier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheLegion.ModifyFrenzyFOVEffect.Authority_OnFrenzyTierIncreased"));
		
		UModifyFrenzyFOVEffect_Authority_OnFrenzyTierIncreased_Params params {};
		params.tier = tier;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UModifyFrenzyFOVEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UModifyFrenzyFOVEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.ModifyFrenzyFOVEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnSelfMendImposeEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnSelfMendImposeEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheLegion.OnSelfMendImposeEffect"));
		return ptr;
	}

}


