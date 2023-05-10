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
	 * 		Name   -> PredefinedFunction UEnduranceEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnduranceEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.EnduranceEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8620
	 * 		Name   -> Function DBDCompetence.ActivatableEnduranceEffect.Authority_Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivatableEnduranceEffect::Authority_Start(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ActivatableEnduranceEffect.Authority_Start"));
		
		UActivatableEnduranceEffect_Authority_Start_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivatableEnduranceEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatableEnduranceEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivatableEnduranceEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdjustableCooldownStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdjustableCooldownStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AdjustableCooldownStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ExhaustedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8620
	 * 		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Duration                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivatableExhaustedEffect::Authority_Start(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ActivatableExhaustedEffect.Authority_Start"));
		
		UActivatableExhaustedEffect_Authority_Start_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B81A0
	 * 		Name   -> Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameEvent                                                  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UActivatableExhaustedEffect::Authority_OnHookCamper(const struct FGameplayTag& GameEvent, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ActivatableExhaustedEffect.Authority_OnHookCamper"));
		
		UActivatableExhaustedEffect_Authority_OnHookCamper_Params params {};
		params.GameEvent = GameEvent;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivatableExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivatableExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivatableExhaustedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateOnEventTimedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventTimedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivateOnEventTimedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateOnEventBaseActivationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventBaseActivationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivateOnEventBaseActivationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateOnEventAlwaysActivationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventAlwaysActivationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivateOnEventAlwaysActivationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateOnEventTargetActivationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventTargetActivationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivateOnEventTargetActivationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateOnEventInstigatorActivationStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateOnEventInstigatorActivationStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ActivateOnEventInstigatorActivationStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8A10
	 * 		Name   -> Function DBDCompetence.Adrenaline.Multicast_DispatchAdrenalineEvents
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               IsHealthy                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HealAmount                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAdrenaline::Multicast_DispatchAdrenalineEvents(bool IsHealthy, float HealAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Adrenaline.Multicast_DispatchAdrenalineEvents"));
		
		UAdrenaline_Multicast_DispatchAdrenalineEvents_Params params {};
		params.IsHealthy = IsHealthy;
		params.HealAmount = HealAmount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B80D0
	 * 		Name   -> Function DBDCompetence.Adrenaline.Authority_AttemptApplyPerk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAdrenaline::Authority_AttemptApplyPerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Adrenaline.Authority_AttemptApplyPerk"));
		
		UAdrenaline_Authority_AttemptApplyPerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAdrenaline.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAdrenaline::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Adrenaline"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAlertKillerRevealEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAlertKillerRevealEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AlertKillerRevealEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAllHexTotemsAreActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAllHexTotemsAreActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AllHexTotemsAreActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8AF0
	 * 		Name   -> Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnyActorPairQueryRangeIsTrue::OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.AnyActorPairQueryRangeIsTrue.OnInRangeChanged"));
		
		UAnyActorPairQueryRangeIsTrue_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnyActorPairQueryRangeIsTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyActorPairQueryRangeIsTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AnyActorPairQueryRangeIsTrue"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8360
	 * 		Name   -> Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp
	 * 		Flags  -> (Final, Native, Private, HasOutParms, Const)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAnyMeansNecessary::Authority_OnPalletPulledUp(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.AnyMeansNecessary.Authority_OnPalletPulledUp"));
		
		UAnyMeansNecessary_Authority_OnPalletPulledUp_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnyMeansNecessary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnyMeansNecessary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AnyMeansNecessary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B90F0
	 * 		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnySurvivorHasObjectState::OnSurvivorRemoved(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorRemoved"));
		
		UAnySurvivorHasObjectState_OnSurvivorRemoved_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B9060
	 * 		Name   -> Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAnySurvivorHasObjectState::OnSurvivorAdded(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.AnySurvivorHasObjectState.OnSurvivorAdded"));
		
		UAnySurvivorHasObjectState_OnSurvivorAdded_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnySurvivorHasObjectState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnySurvivorHasObjectState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.AnySurvivorHasObjectState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBabysitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBabysitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Babysitter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBabysitterEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBabysitterEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BabysitterEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseIsPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseIsPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BaseIsPerkUsableCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B92E0
	 * 		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BaseIsPlayerPerformingInteraction.UpdateIsTrue"));
		
		UBaseIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
		params.InteractionDefinition = InteractionDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B91A0
	 * 		Name   -> Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UBaseIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BaseIsPlayerPerformingInteraction.SetInteractionSemantics"));
		
		UBaseIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseIsPlayerPerformingInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseIsPlayerPerformingInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BaseIsPlayerPerformingInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B9260
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              lingerDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseLingeringStatusEffect::SetLingerDuration(float lingerDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BaseLingeringStatusEffect.SetLingerDuration"));
		
		UBaseLingeringStatusEffect_SetLingerDuration_Params params {};
		params.lingerDuration = lingerDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B80F0
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBaseLingeringStatusEffect::Authority_DeactivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BaseLingeringStatusEffect.Authority_DeactivateEffect"));
		
		UBaseLingeringStatusEffect_Authority_DeactivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B80B0
	 * 		Name   -> Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UBaseLingeringStatusEffect::Authority_ActivateEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BaseLingeringStatusEffect.Authority_ActivateEffect"));
		
		UBaseLingeringStatusEffect_Authority_ActivateEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseLingeringStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLingeringStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BaseLingeringStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8F50
	 * 		Name   -> Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBetterTogether::OnStartedGeneratorRepair(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BetterTogether.OnStartedGeneratorRepair"));
		
		UBetterTogether_OnStartedGeneratorRepair_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B88A0
	 * 		Name   -> Function DBDCompetence.BetterTogether.GetRevealDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UBetterTogether::GetRevealDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BetterTogether.GetRevealDistance"));
		
		UBetterTogether_GetRevealDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBetterTogether.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBetterTogether::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BetterTogether"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBlessedStatusEffect::OnExitBoonRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BlessedStatusEffect.OnExitBoonRange"));
		
		UBlessedStatusEffect_OnExitBoonRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void UBlessedStatusEffect::OnEnterBoonRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BlessedStatusEffect.OnEnterBoonRange"));
		
		UBlessedStatusEffect_OnEnterBoonRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8810
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoundTotem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATotem* UBlessedStatusEffect::GetBoundTotem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BlessedStatusEffect.GetBoundTotem"));
		
		UBlessedStatusEffect_GetBoundTotem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87E0
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBlessedStatusEffect::GetBoonTotemBlessingRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BlessedStatusEffect.GetBoonTotemBlessingRange"));
		
		UBlessedStatusEffect_GetBoonTotemBlessingRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8590
	 * 		Name   -> Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlessedStatusEffect::Authority_OnSurvivorRemovedFromGame(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BlessedStatusEffect.Authority_OnSurvivorRemovedFromGame"));
		
		UBlessedStatusEffect_Authority_OnSurvivorRemovedFromGame_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlessedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlessedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BlessedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function DBDCompetence.BloodEcho.GetCooldownDurationAtLevel
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBloodEcho::GetCooldownDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BloodEcho.GetCooldownDurationAtLevel"));
		
		UBloodEcho_GetCooldownDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBloodEcho.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBloodEcho::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BloodEcho"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoonDestroyer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonDestroyer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BoonDestroyer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8500
	 * 		Name   -> Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoonPerk::Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.BoonPerk.Authority_OnSurvivorRemoved"));
		
		UBoonPerk_Authority_OnSurvivorRemoved_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoonPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BoonPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoonTotemIsActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoonTotemIsActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BoonTotemIsActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8EC0
	 * 		Name   -> Function DBDCompetence.Breakout.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Breakout.OnSlasherSet"));
		
		UBreakout_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8CE0
	 * 		Name   -> Function DBDCompetence.Breakout.OnRep_IsPerkActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBreakout::OnRep_IsPerkActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Breakout.OnRep_IsPerkActive"));
		
		UBreakout_OnRep_IsPerkActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8470
	 * 		Name   -> Function DBDCompetence.Breakout.Authority_OnRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::Authority_OnRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Breakout.Authority_OnRangeChanged"));
		
		UBreakout_Authority_OnRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8110
	 * 		Name   -> Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBreakout::Authority_ImposeWiggleStatusEffect(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Breakout.Authority_ImposeWiggleStatusEffect"));
		
		UBreakout_Authority_ImposeWiggleStatusEffect_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreakout.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakout::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Breakout"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBuckleUp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBuckleUp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.BuckleUp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCalmSpirit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCalmSpirit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.CalmSpirit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCamaraderie.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCamaraderie::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Camaraderie"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectableOwnerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectableOwnerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.CollectableOwnerSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8CA0
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::OnRep_BlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CorruptIntervention.OnRep_BlockedGenerators"));
		
		UCorruptIntervention_OnRep_BlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B89F0
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.LevelReadyToBlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::LevelReadyToBlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CorruptIntervention.LevelReadyToBlockedGenerators"));
		
		UCorruptIntervention_LevelReadyToBlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.GetGeneratorBlockDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCorruptIntervention::GetGeneratorBlockDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CorruptIntervention.GetGeneratorBlockDuration"));
		
		UCorruptIntervention_GetGeneratorBlockDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B86A0
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.Authority_TryActivatePerk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::Authority_TryActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CorruptIntervention.Authority_TryActivatePerk"));
		
		UCorruptIntervention_Authority_TryActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8340
	 * 		Name   -> Function DBDCompetence.CorruptIntervention.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCorruptIntervention::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CorruptIntervention.Authority_OnLevelReadyToPlay"));
		
		UCorruptIntervention_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCorruptIntervention.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCorruptIntervention::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.CorruptIntervention"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCoulrophobia.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCoulrophobia::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Coulrophobia"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function DBDCompetence.CruelConfinement.GetEffectiveRadiusAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UCruelConfinement::GetEffectiveRadiusAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CruelConfinement.GetEffectiveRadiusAtLevel"));
		
		UCruelConfinement_GetEffectiveRadiusAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function DBDCompetence.CruelConfinement.GetBlockDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UCruelConfinement::GetBlockDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.CruelConfinement.GetBlockDurationAtLevel"));
		
		UCruelConfinement_GetBlockDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCruelConfinement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCruelConfinement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.CruelConfinement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDarkDevotion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkDevotion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DarkDevotion"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B82B0
	 * 		Name   -> Function DBDCompetence.DarkSense.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDarkSense::Authority_OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DarkSense.Authority_OnInRangeChanged"));
		
		UDarkSense_Authority_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDarkSense.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDarkSense::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DarkSense"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B88D0
	 * 		Name   -> Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UIsPlayerPerformingInteraction* UDBDConditionFactory::STATIC_IsPlayerPerformingInteraction(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DBDConditionFactory.IsPlayerPerformingInteraction"));
		
		UDBDConditionFactory_IsPlayerPerformingInteraction_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B86C0
	 * 		Name   -> Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UDoesPerkHaveToken* UDBDConditionFactory::STATIC_DoesPerkHaveToken(class UPerk* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DBDConditionFactory.DoesPerkHaveToken"));
		
		UDBDConditionFactory_DoesPerkHaveToken_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDConditionFactory.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDConditionFactory::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DBDConditionFactory"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadMansSwitchEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadMansSwitchEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DeadMansSwitchEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeceptionEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeceptionEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DeceptionEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B9180
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDecisiveStrike::OnUnhookedTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.OnUnhookedTimerEnded"));
		
		UDecisiveStrike_OnUnhookedTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8D00
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnSkillCheck
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnSkillCheck(bool hadInput, bool success, bool Bonus, ESkillCheckCustomType Type, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.OnSkillCheck"));
		
		UDecisiveStrike_OnSkillCheck_Params params {};
		params.hadInput = hadInput;
		params.success = success;
		params.Bonus = Bonus;
		params.Type = Type;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8CC0
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDecisiveStrike::OnRep_HasBeenAttempted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.OnRep_HasBeenAttempted"));
		
		UDecisiveStrike_OnRep_HasBeenAttempted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8C10
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnPickUpEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnPickUpEnded(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.OnPickUpEnded"));
		
		UDecisiveStrike_OnPickUpEnded_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8B80
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDecisiveStrike::OnOwnerPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.OnOwnerPickedUp"));
		
		UDecisiveStrike_OnOwnerPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function DBDCompetence.DecisiveStrike.GetDurationAfterUnhook
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDecisiveStrike::GetDurationAfterUnhook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DecisiveStrike.GetDurationAfterUnhook"));
		
		UDecisiveStrike_GetDurationAfterUnhook_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDecisiveStrike.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDecisiveStrike::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DecisiveStrike"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE380
	 * 		Name   -> Function DBDCompetence.DejaVu.OnRep_RevealedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDejaVu::OnRep_RevealedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.OnRep_RevealedGenerators"));
		
		UDejaVu_OnRep_RevealedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDD60
	 * 		Name   -> Function DBDCompetence.DejaVu.LevelReadyToRevealOutlineGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDejaVu::LevelReadyToRevealOutlineGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.LevelReadyToRevealOutlineGenerators"));
		
		UDejaVu_LevelReadyToRevealOutlineGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function DBDCompetence.DejaVu.GetPerkDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDejaVu::GetPerkDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.GetPerkDurationAtLevel"));
		
		UDejaVu_GetPerkDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD880
	 * 		Name   -> Function DBDCompetence.DejaVu.GetActionSpeedsAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDejaVu::GetActionSpeedsAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.GetActionSpeedsAtLevel"));
		
		UDejaVu_GetActionSpeedsAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD830
	 * 		Name   -> Function DBDCompetence.DejaVu.Authority_TryActivatePerk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UDejaVu::Authority_TryActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.Authority_TryActivatePerk"));
		
		UDejaVu_Authority_TryActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD270
	 * 		Name   -> Function DBDCompetence.DejaVu.Authority_OnGeneratorRepaired
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            activatedGeneratorCount                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDejaVu::Authority_OnGeneratorRepaired(int32_t activatedGeneratorCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DejaVu.Authority_OnGeneratorRepaired"));
		
		UDejaVu_Authority_OnGeneratorRepaired_Params params {};
		params.activatedGeneratorCount = activatedGeneratorCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDejaVu.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDejaVu::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DejaVu"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD4E0
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDelayedHealEffect::Authority_OnOwningCamperPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperPickedUp"));
		
		UDelayedHealEffect_Authority_OnOwningCamperPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD410
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 before                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 after                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDelayedHealEffect::Authority_OnOwningCamperHealthChanged(ECamperDamageState before, ECamperDamageState after)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DelayedHealEffect.Authority_OnOwningCamperHealthChanged"));
		
		UDelayedHealEffect_Authority_OnOwningCamperHealthChanged_Params params {};
		params.before = before;
		params.after = after;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD250
	 * 		Name   -> Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDelayedHealEffect::Authority_OnActivationTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DelayedHealEffect.Authority_OnActivationTimerComplete"));
		
		UDelayedHealEffect_Authority_OnActivationTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDelayedHealEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelayedHealEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DelayedHealEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDidGameEventOccurred.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDidGameEventOccurred::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DidGameEventOccurred"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE2C0
	 * 		Name   -> Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDistortion::OnRep_AuraBlockIsActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Distortion.OnRep_AuraBlockIsActive"));
		
		UDistortion_OnRep_AuraBlockIsActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.Distortion.OnAuraBlockedCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UDistortion::OnAuraBlockedCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Distortion.OnAuraBlockedCosmetic"));
		
		UDistortion_OnAuraBlockedCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD200
	 * 		Name   -> Function DBDCompetence.Distortion.AuraBlockCanBeActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UDistortion::AuraBlockCanBeActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Distortion.AuraBlockCanBeActive"));
		
		UDistortion_AuraBlockCanBeActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDistortion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDistortion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Distortion"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE690
	 * 		Name   -> Function DBDCompetence.DoesPerkHaveToken.SetPerk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPerk*                                       Perk                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDoesPerkHaveToken::SetPerk(class UPerk* Perk)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DoesPerkHaveToken.SetPerk"));
		
		UDoesPerkHaveToken_SetPerk_Params params {};
		params.Perk = Perk;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE320
	 * 		Name   -> Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDoesPerkHaveToken::OnRep_Perk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DoesPerkHaveToken.OnRep_Perk"));
		
		UDoesPerkHaveToken_OnRep_Perk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDoesPerkHaveToken.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDoesPerkHaveToken::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DoesPerkHaveToken"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE360
	 * 		Name   -> Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDownedByBasicAttack::OnRep_ReplicatedIsTrue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DownedByBasicAttack.OnRep_ReplicatedIsTrue"));
		
		UDownedByBasicAttack_OnRep_ReplicatedIsTrue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDownedByBasicAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDownedByBasicAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DownedByBasicAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDE70
	 * 		Name   -> Function DBDCompetence.DyingLight.OnObsessionChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               newObsession                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               previousObsession                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDyingLight::OnObsessionChanged(class ACamperPlayer* newObsession, class ACamperPlayer* previousObsession)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.DyingLight.OnObsessionChanged"));
		
		UDyingLight_OnObsessionChanged_Params params {};
		params.newObsession = newObsession;
		params.previousObsession = previousObsession;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDyingLight.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDyingLight::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.DyingLight"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnduranceHighlightEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnduranceHighlightEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.EnduranceHighlightEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExposedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExposedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ExposedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFixated.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFixated::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Fixated"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD570
	 * 		Name   -> Function DBDCompetence.FlipFlop.Authority_OnPickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlipFlop::Authority_OnPickedUp(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.FlipFlop.Authority_OnPickedUp"));
		
		UFlipFlop_Authority_OnPickedUp_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFlipFlop.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlipFlop::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.FlipFlop"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFurtiveChase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFurtiveChase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.FurtiveChase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE490
	 * 		Name   -> Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UGateBlockerEffect::RemoveCantEscapeFlag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.GateBlockerEffect.RemoveCantEscapeFlag"));
		
		UGateBlockerEffect_RemoveCantEscapeFlag_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGateBlockerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGateBlockerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.GateBlockerEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasActiveHeartbeatEmitters.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasActiveHeartbeatEmitters::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HasActiveHeartbeatEmitters"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasCleansedTotemInnerStrength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasCleansedTotemInnerStrength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HasCleansedTotemInnerStrength"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasFlag.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasFlag::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HasFlag"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasLineOfSightQueryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasLineOfSightQueryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HasLineOfSightQueryComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE2E0
	 * 		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHasPlayerReachedWiggleFillPercentCondition::OnRep_IsWigglePercentReached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.OnRep_IsWigglePercentReached"));
		
		UHasPlayerReachedWiggleFillPercentCondition_OnRep_IsWigglePercentReached_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD300
	 * 		Name   -> Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHasPlayerReachedWiggleFillPercentCondition::Authority_OnOwnerWiggleChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HasPlayerReachedWiggleFillPercentCondition.Authority_OnOwnerWiggleChargePercentChanged"));
		
		UHasPlayerReachedWiggleFillPercentCondition_Authority_OnOwnerWiggleChargePercentChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.PercentCompletionChange = PercentCompletionChange;
		params.TotalPercentComplete = TotalPercentComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHasPlayerReachedWiggleFillPercentCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHasPlayerReachedWiggleFillPercentCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HasPlayerReachedWiggleFillPercentCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE160
	 * 		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapExit
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::OnPawnOverlapExit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.OnPawnOverlapExit"));
		
		UHeadOn_OnPawnOverlapExit_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDF40
	 * 		Name   -> Function DBDCompetence.HeadOn.OnPawnOverlapEnter
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::OnPawnOverlapEnter(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.OnPawnOverlapEnter"));
		
		UHeadOn_OnPawnOverlapEnter_Params params {};
		params.HitComponent = HitComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDE50
	 * 		Name   -> Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHeadOn::OnHeadOnAnimationComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.OnHeadOnAnimationComplete"));
		
		UHeadOn_OnHeadOnAnimationComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDD80
	 * 		Name   -> Function DBDCompetence.HeadOn.Multicast_TriggerStunOnActor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UObject*                                     stunnableInterfaceUObject                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  stunner                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHeadOn::Multicast_TriggerStunOnActor(class UObject* stunnableInterfaceUObject, class ADBDPlayer* stunner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.Multicast_TriggerStunOnActor"));
		
		UHeadOn_Multicast_TriggerStunOnActor_Params params {};
		params.stunnableInterfaceUObject = stunnableInterfaceUObject;
		params.stunner = stunner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function DBDCompetence.HeadOn.GetHideDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UHeadOn::GetHideDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.GetHideDuration"));
		
		UHeadOn_GetHideDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD850
	 * 		Name   -> Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHeadOn::CanApplyHeadOnInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.CanApplyHeadOnInteraction"));
		
		UHeadOn_CanApplyHeadOnInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD230
	 * 		Name   -> Function DBDCompetence.HeadOn.Authority_ActivatePerk
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 */
	void UHeadOn::Authority_ActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HeadOn.Authority_ActivatePerk"));
		
		UHeadOn_Authority_ActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeadOn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeadOn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HeadOn"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE3C0
	 * 		Name   -> Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing
	 * 		Flags  -> (Native, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Target                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHemorrhageStatusEffect::OnStoppedHealing(class ADBDPlayer* Instigator, class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HemorrhageStatusEffect.OnStoppedHealing"));
		
		UHemorrhageStatusEffect_OnStoppedHealing_Params params {};
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD600
	 * 		Name   -> Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FCamperHealResult                           healResult                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHemorrhageStatusEffect::Authority_OnSurvivorHealed(const struct FCamperHealResult& healResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HemorrhageStatusEffect.Authority_OnSurvivorHealed"));
		
		UHemorrhageStatusEffect_Authority_OnSurvivorHealed_Params params {};
		params.healResult = healResult;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHemorrhageStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHemorrhageStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HemorrhageStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE720
	 * 		Name   -> Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UHexPerk::UpdateCursedStatusViewOnLocalPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexPerk.UpdateCursedStatusViewOnLocalPlayer"));
		
		UHexPerk_UpdateCursedStatusViewOnLocalPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE340
	 * 		Name   -> Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHexPerk::OnRep_PlayersWhoKnowCurse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexPerk.OnRep_PlayersWhoKnowCurse"));
		
		UHexPerk_OnRep_PlayersWhoKnowCurse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDCC0
	 * 		Name   -> Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UHexPerk::IsCurseRevealedToPlayer(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexPerk.IsCurseRevealedToPlayer"));
		
		UHexPerk_IsCurseRevealedToPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD740
	 * 		Name   -> Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               revealed                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::Authority_SetCurseRevealedToPlayer(class ADBDPlayer* Player, bool revealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexPerk.Authority_SetCurseRevealedToPlayer"));
		
		UHexPerk_Authority_SetCurseRevealedToPlayer_Params params {};
		params.Player = Player;
		params.revealed = revealed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD6B0
	 * 		Name   -> Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               revealed                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHexPerk::Authority_RevealCurseToAllSurvivors(bool revealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexPerk.Authority_RevealCurseToAllSurvivors"));
		
		UHexPerk_Authority_RevealCurseToAllSurvivors_Params params {};
		params.revealed = revealed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD9B0
	 * 		Name   -> Function DBDCompetence.HexDevourHope.GetRangeFromUnhookedSurvivorNeeded
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHexDevourHope::GetRangeFromUnhookedSurvivorNeeded(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexDevourHope.GetRangeFromUnhookedSurvivorNeeded"));
		
		UHexDevourHope_GetRangeFromUnhookedSurvivorNeeded_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD910
	 * 		Name   -> Function DBDCompetence.HexDevourHope.GetMoveSpeedIncrement
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHexDevourHope::GetMoveSpeedIncrement(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexDevourHope.GetMoveSpeedIncrement"));
		
		UHexDevourHope_GetMoveSpeedIncrement_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexDevourHope.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexDevourHope::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexDevourHope"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexHauntedGround.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexHauntedGround::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexHauntedGround"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE3A0
	 * 		Name   -> Function DBDCompetence.HexNoOneEscapesDeath.OnRep_SetShouldActivateTotemOutline
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHexNoOneEscapesDeath::OnRep_SetShouldActivateTotemOutline()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexNoOneEscapesDeath.OnRep_SetShouldActivateTotemOutline"));
		
		UHexNoOneEscapesDeath_OnRep_SetShouldActivateTotemOutline_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD8E0
	 * 		Name   -> Function DBDCompetence.HexNoOneEscapesDeath.GetHasteAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float UHexNoOneEscapesDeath::GetHasteAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexNoOneEscapesDeath.GetHasteAtLevel"));
		
		UHexNoOneEscapesDeath_GetHasteAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexNoOneEscapesDeath.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexNoOneEscapesDeath::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexNoOneEscapesDeath"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDA40
	 * 		Name   -> Function DBDCompetence.HexRuin.GetRegressionModifierByLevel
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UHexRuin::GetRegressionModifierByLevel(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexRuin.GetRegressionModifierByLevel"));
		
		UHexRuin_GetRegressionModifierByLevel_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD810
	 * 		Name   -> Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHexRuin::Authority_SetupCurseOnAllGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexRuin.Authority_SetupCurseOnAllGenerators"));
		
		UHexRuin_Authority_SetupCurseOnAllGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexRuin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexRuin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexRuin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE300
	 * 		Name   -> Function DBDCompetence.HexThirdSeal.OnRep_NumOfHitPlayers
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UHexThirdSeal::OnRep_NumOfHitPlayers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HexThirdSeal.OnRep_NumOfHitPlayers"));
		
		UHexThirdSeal_OnRep_NumOfHitPlayers_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexThirdSeal.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexThirdSeal::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexThirdSeal"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexThrillOfTheHunt.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexThrillOfTheHunt::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexThrillOfTheHunt"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexThrillOfTheHuntStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexThrillOfTheHuntStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HexThrillOfTheHuntStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDAE0
	 * 		Name   -> Function DBDCompetence.HideSurvivorVFXForKillerEffect.HideVFX
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               Hide                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHideSurvivorVFXForKillerEffect::HideVFX(bool Hide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HideSurvivorVFXForKillerEffect.HideVFX"));
		
		UHideSurvivorVFXForKillerEffect_HideVFX_Params params {};
		params.Hide = Hide;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHideSurvivorVFXForKillerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHideSurvivorVFXForKillerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HideSurvivorVFXForKillerEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE600
	 * 		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighestLevelAndClosestEffectCondition::SetCurrentEffectLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HighestLevelAndClosestEffectCondition.SetCurrentEffectLevel"));
		
		UHighestLevelAndClosestEffectCondition_SetCurrentEffectLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BDB70
	 * 		Name   -> Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FName                                        effectIDLevel1                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        effectIDLevel2                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        effectIDLevel3                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHighestLevelAndClosestEffectCondition::InitEffectArrays(const class FName& effectIDLevel1, const class FName& effectIDLevel2, const class FName& effectIDLevel3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.HighestLevelAndClosestEffectCondition.InitEffectArrays"));
		
		UHighestLevelAndClosestEffectCondition_InitEffectArrays_Params params {};
		params.effectIDLevel1 = effectIDLevel1;
		params.effectIDLevel2 = effectIDLevel2;
		params.effectIDLevel3 = effectIDLevel3;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHighestLevelAndClosestEffectCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHighestLevelAndClosestEffectCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HighestLevelAndClosestEffectCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHopePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHopePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.HopePerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BE4B0
	 * 		Name   -> Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UImAllEars::Server_OnCamperLoudNoise(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ImAllEars.Server_OnCamperLoudNoise"));
		
		UImAllEars_Server_OnCamperLoudNoise_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function DBDCompetence.ImAllEars.GetDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UImAllEars::GetDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ImAllEars.GetDurationAtLevel"));
		
		UImAllEars_GetDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD8B0
	 * 		Name   -> Function DBDCompetence.ImAllEars.GetCooldownAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UImAllEars::GetCooldownAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ImAllEars.GetCooldownAtLevel"));
		
		UImAllEars_GetCooldownAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImAllEars.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImAllEars::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ImAllEars"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.OnEventBaseAddon.OnEventFired
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UOnEventBaseAddon::OnEventFired(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.OnEventBaseAddon.OnEventFired"));
		
		UOnEventBaseAddon_OnEventFired_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnEventBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnEventBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OnEventBaseAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UImposeStatusEffectOnEventAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UImposeStatusEffectOnEventAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ImposeStatusEffectOnEventAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.InfectiousFright.RevealSurvivorLocation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInfectiousFright::RevealSurvivorLocation(class ACamperPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.InfectiousFright.RevealSurvivorLocation"));
		
		UInfectiousFright_RevealSurvivorLocation_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C49D0
	 * 		Name   -> Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UInfectiousFright::OnRep_PerkActivationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.InfectiousFright.OnRep_PerkActivationCount"));
		
		UInfectiousFright_OnRep_PerkActivationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInfectiousFright.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfectiousFright::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.InfectiousFright"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C44B0
	 * 		Name   -> Function DBDCompetence.InnerStrength.GetHideDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UInnerStrength::GetHideDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.InnerStrength.GetHideDuration"));
		
		UInnerStrength_GetHideDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C41C0
	 * 		Name   -> Function DBDCompetence.InnerStrength.Authority_OnPlayerImmobilizeStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInnerStrength::Authority_OnPlayerImmobilizeStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.InnerStrength.Authority_OnPlayerImmobilizeStateChanged"));
		
		UInnerStrength_Authority_OnPlayerImmobilizeStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInnerStrength.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInnerStrength::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.InnerStrength"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInsidious.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsidious::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Insidious"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInsidiousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsidiousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.InsidiousEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsActivationTimerActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsActivationTimerActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsActivationTimerActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsActivationTimerActiveAndNotPaused.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsActivationTimerActiveAndNotPaused::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsActivationTimerActiveAndNotPaused"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4780
	 * 		Name   -> Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProveThyselfEffect*                         ProveThyselfEffect                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsBestProveThyselfEffectInRange::OnInRangeChanged(bool inRange, class UProveThyselfEffect* ProveThyselfEffect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsBestProveThyselfEffectInRange.OnInRangeChanged"));
		
		UIsBestProveThyselfEffectInRange_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		params.ProveThyselfEffect = ProveThyselfEffect;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsBestProveThyselfEffectInRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsBestProveThyselfEffectInRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsBestProveThyselfEffectInRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsBoonBlessed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsBoonBlessed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsBoonBlessed"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsClosestEffectCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsClosestEffectCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsClosestEffectCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsCooldownTimerActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsCooldownTimerActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsCooldownTimerActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsHexCursed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHexCursed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsHexCursed"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4A10
	 * 		Name   -> Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestLevelAndClosestOriginatingEffect::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsHighestLevelAndClosestOriginatingEffect.OnStatusEffectAddedOrRemoved"));
		
		UIsHighestLevelAndClosestOriginatingEffect_OnStatusEffectAddedOrRemoved_Params params {};
		params.effect = effect;
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsHighestLevelAndClosestOriginatingEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHighestLevelAndClosestOriginatingEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsHighestLevelAndClosestOriginatingEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4BB0
	 * 		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGameplayModifierContainer*                  GameplayModifierContainer                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsApplicable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestTierOriginatingPerk::OnStatusEffectApplicableChanged(class UGameplayModifierContainer* GameplayModifierContainer, bool IsApplicable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectApplicableChanged"));
		
		UIsHighestTierOriginatingPerk_OnStatusEffectApplicableChanged_Params params {};
		params.GameplayModifierContainer = GameplayModifierContainer;
		params.IsApplicable = IsApplicable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4AE0
	 * 		Name   -> Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UStatusEffect*                               effect                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Valid                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsHighestTierOriginatingPerk::OnStatusEffectAddedOrRemoved(class UStatusEffect* effect, bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsHighestTierOriginatingPerk.OnStatusEffectAddedOrRemoved"));
		
		UIsHighestTierOriginatingPerk_OnStatusEffectAddedOrRemoved_Params params {};
		params.effect = effect;
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsHighestTierOriginatingPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsHighestTierOriginatingPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsHighestTierOriginatingPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInAnyHookedSurvivorOriginatorAuraReadingRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInAnyHookedSurvivorOriginatorAuraReadingRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsInAnyHookedSurvivorOriginatorAuraReadingRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInRangeOfHookedSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInRangeOfHookedSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsInRangeOfHookedSurvivor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4850
	 * 		Name   -> Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsInRangeOfOriginatingPlayer::OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsInRangeOfOriginatingPlayer.OnInRangeChanged"));
		
		UIsInRangeOfOriginatingPlayer_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsInRangeOfOriginatingPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsInRangeOfOriginatingPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsInRangeOfOriginatingPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsLifetimeActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsLifetimeActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsLifetimeActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOnHitSprintEffectActive.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOnHitSprintEffectActive::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOnHitSprintEffectActive"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C49F0
	 * 		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsOriginatingPerkBoundToTotems::OnRep_TotemCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsOriginatingPerkBoundToTotems.OnRep_TotemCount"));
		
		UIsOriginatingPerkBoundToTotems_OnRep_TotemCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C44E0
	 * 		Name   -> Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		EComparisonOperation                               comparisonOperator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            totemCount                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsOriginatingPerkBoundToTotems::Init(EComparisonOperation comparisonOperator, int32_t totemCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsOriginatingPerkBoundToTotems.Init"));
		
		UIsOriginatingPerkBoundToTotems_Init_Params params {};
		params.comparisonOperator = comparisonOperator;
		params.totemCount = totemCount;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOriginatingPerkBoundToTotems.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOriginatingPerkBoundToTotems::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOriginatingPerkBoundToTotems"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOriginatingPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOriginatingPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOriginatingPerkUsableCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C48E0
	 * 		Name   -> Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UIsOwningPlayerInRangeFromHook::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsOwningPlayerInRangeFromHook.OnLevelReadyToPlay"));
		
		UIsOwningPlayerInRangeFromHook_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOwningPlayerInRangeFromHook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerInRangeFromHook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOwningPlayerInRangeFromHook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOwningPlayerInHookRangeWhenKillerCarry.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerInHookRangeWhenKillerCarry::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOwningPlayerInHookRangeWhenKillerCarry"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOwningPlayerLastSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningPlayerLastSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOwningPlayerLastSurvivor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsOwningSurvivorAuraRevealedToKiller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsOwningSurvivorAuraRevealedToKiller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsOwningSurvivorAuraRevealedToKiller"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPerkUsableCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPerkUsableCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsPerkUsableCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4850
	 * 		Name   -> Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnRep_IsLookingTowards
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsLookingTowards                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerLookingAtKillerCondition::OnRep_IsLookingTowards(bool IsLookingTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnRep_IsLookingTowards"));
		
		UIsPlayerLookingAtKillerCondition_OnRep_IsLookingTowards_Params params {};
		params.IsLookingTowards = IsLookingTowards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4900
	 * 		Name   -> Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnPawnControllerChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class APawn*                                       Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AController*                                 Controller                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerLookingAtKillerCondition::OnPawnControllerChanged(class APawn* Pawn, class AController* Controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerLookingAtKillerCondition.OnPawnControllerChanged"));
		
		UIsPlayerLookingAtKillerCondition_OnPawnControllerChanged_Params params {};
		params.Pawn = Pawn;
		params.Controller = Controller;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPlayerLookingAtKillerCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerLookingAtKillerCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsPlayerLookingAtKillerCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C45B0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerfInteractionWithNoItem::OnCollectableChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerfInteractionWithNoItem.OnCollectableChargeStateChange"));
		
		UIsPlayerPerfInteractionWithNoItem_OnCollectableChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPlayerPerfInteractionWithNoItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerfInteractionWithNoItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsPlayerPerfInteractionWithNoItem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C46F0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectablePickedUp(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectablePickedUp"));
		
		UIsPlayerPerformingItemInteraction_OnCollectablePickedUp_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C46D0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectableDropped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableDropped"));
		
		UIsPlayerPerformingItemInteraction_OnCollectableDropped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4640
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               Empty                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingItemInteraction::OnCollectableChargeStateChange(bool Empty)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerformingItemInteraction.OnCollectableChargeStateChange"));
		
		UIsPlayerPerformingItemInteraction_OnCollectableChargeStateChange_Params params {};
		params.Empty = Empty;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPlayerPerformingItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerformingItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsPlayerPerformingItemInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4D90
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UInteractionDefinition*                      InteractionDefinition                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingInteraction::UpdateIsTrue(class UInteractionDefinition* InteractionDefinition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerformingInteraction.UpdateIsTrue"));
		
		UIsPlayerPerformingInteraction_UpdateIsTrue_Params params {};
		params.InteractionDefinition = InteractionDefinition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B91A0
	 * 		Name   -> Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FGameplayTagContainer                       interactionSemantics                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UIsPlayerPerformingInteraction::SetInteractionSemantics(const struct FGameplayTagContainer& interactionSemantics)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.IsPlayerPerformingInteraction.SetInteractionSemantics"));
		
		UIsPlayerPerformingInteraction_SetInteractionSemantics_Params params {};
		params.interactionSemantics = interactionSemantics;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsPlayerPerformingInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsPlayerPerformingInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsPlayerPerformingInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIsSubjectInteractingWithOriginatingPlayer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIsSubjectInteractingWithOriginatingPlayer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.IsSubjectInteractingWithOriginatingPlayer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerConditionalSpeedCurveEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerConditionalSpeedCurveEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.KillerConditionalSpeedCurveEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerIsLowOnAmmo.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerIsLowOnAmmo::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.KillerIsLowOnAmmo"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4C80
	 * 		Name   -> Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UKillerSubjectProvider::RegisterWhenKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.KillerSubjectProvider.RegisterWhenKillerSet"));
		
		UKillerSubjectProvider_RegisterWhenKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.KillerSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKindredPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKindredPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.KindredPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4D10
	 * 		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              lingerDuration                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULingeringBlessedStatusEffect::SetLingerDuration(float lingerDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.LingeringBlessedStatusEffect.SetLingerDuration"));
		
		ULingeringBlessedStatusEffect_SetLingerDuration_Params params {};
		params.lingerDuration = lingerDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4130
	 * 		Name   -> Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULingeringBlessedStatusEffect::Authority_OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.LingeringBlessedStatusEffect.Authority_OnInRangeChanged"));
		
		ULingeringBlessedStatusEffect_Authority_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringBlessedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringBlessedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LingeringBlessedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringBlindnessEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringBlindnessEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LingeringBlindnessEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringExhaustedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringExhaustedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LingeringExhaustedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringMultiStateTagStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringMultiStateTagStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LingeringMultiStateTagStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULingeringStateTagStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULingeringStateTagStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LingeringStateTagStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C43F0
	 * 		Name   -> Function DBDCompetence.LuckyBreak.Authority_TryActivatePerk
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULuckyBreak::Authority_TryActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.LuckyBreak.Authority_TryActivatePerk"));
		
		ULuckyBreak_Authority_TryActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C3F90
	 * 		Name   -> Function DBDCompetence.LuckyBreak.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ULuckyBreak::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.LuckyBreak.Authority_OnDamageStateChanged"));
		
		ULuckyBreak_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C3F70
	 * 		Name   -> Function DBDCompetence.LuckyBreak.ActivationTimerEnded
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULuckyBreak::ActivationTimerEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.LuckyBreak.ActivationTimerEnded"));
		
		ULuckyBreak_ActivationTimerEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULuckyBreak.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULuckyBreak::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.LuckyBreak"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4410
	 * 		Name   -> Function DBDCompetence.MakeYourChoice.CanApplyExposedEffect
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class AActor*                                      unhooker                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMakeYourChoice::CanApplyExposedEffect(class AActor* unhooker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.MakeYourChoice.CanApplyExposedEffect"));
		
		UMakeYourChoice_CanApplyExposedEffect_Params params {};
		params.unhooker = unhooker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMakeYourChoice.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMakeYourChoice::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.MakeYourChoice"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMindBreaker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMindBreaker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.MindBreaker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4340
	 * 		Name   -> Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorUnhookedOnScourgeHook
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMonstrousShrine::Authority_OnSurvivorUnhookedOnScourgeHook(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorUnhookedOnScourgeHook"));
		
		UMonstrousShrine_Authority_OnSurvivorUnhookedOnScourgeHook_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4290
	 * 		Name   -> Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorHookedOnScourgeHook
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UMonstrousShrine::Authority_OnSurvivorHookedOnScourgeHook(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.MonstrousShrine.Authority_OnSurvivorHookedOnScourgeHook"));
		
		UMonstrousShrine_Authority_OnSurvivorHookedOnScourgeHook_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMonstrousShrine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMonstrousShrine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.MonstrousShrine"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNemesis.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNemesis::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Nemesis"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C4060
	 * 		Name   -> Function DBDCompetence.NoOneLeftBehind.Authority_OnExitGatePoweredApplicableChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UGameplayModifierContainer*                  Container                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UNoOneLeftBehind::Authority_OnExitGatePoweredApplicableChanged(class UGameplayModifierContainer* Container, bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.NoOneLeftBehind.Authority_OnExitGatePoweredApplicableChanged"));
		
		UNoOneLeftBehind_Authority_OnExitGatePoweredApplicableChanged_Params params {};
		params.Container = Container;
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNoOneLeftBehind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNoOneLeftBehind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.NoOneLeftBehind"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObliviousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObliviousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ObliviousEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UObsessionTargetSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UObsessionTargetSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ObsessionTargetSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnEventSetTimerAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnEventSetTimerAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OnEventSetTimerAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOriginatingEffectIsApplicable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOriginatingEffectIsApplicable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OriginatingEffectIsApplicable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwningPlayerInBoonBlessingRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInBoonBlessingRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OwningPlayerInBoonBlessingRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA300
	 * 		Name   -> Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UOwningPlayerInTotemRange::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.OwningPlayerInTotemRange.OnLevelReadyToPlay"));
		
		UOwningPlayerInTotemRange_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwningPlayerInTotemRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInTotemRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OwningPlayerInTotemRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwningPlayerInDullTotemRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInDullTotemRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.OwningPlayerInDullTotemRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPharmacyPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPharmacyPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.PharmacyPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA3F0
	 * 		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerIsInExitArea::PlayerExitExitArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.PlayerIsInExitArea.PlayerExitExitArea"));
		
		UPlayerIsInExitArea_PlayerExitExitArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA3D0
	 * 		Name   -> Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPlayerIsInExitArea::PlayerEnterExitArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.PlayerIsInExitArea.PlayerEnterExitArea"));
		
		UPlayerIsInExitArea_PlayerEnterExitArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerIsInExitArea.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerIsInExitArea::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.PlayerIsInExitArea"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C94B0
	 * 		Name   -> Function DBDCompetence.PlayWithYourFood.Authority_OnChaseEnded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              chaseTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPlayWithYourFood::Authority_OnChaseEnded(class ADBDPlayer* Player, float chaseTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.PlayWithYourFood.Authority_OnChaseEnded"));
		
		UPlayWithYourFood_Authority_OnChaseEnded_Params params {};
		params.Player = Player;
		params.chaseTime = chaseTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayWithYourFood.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayWithYourFood::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.PlayWithYourFood"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function DBDCompetence.Poised.GetActivationTime
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPoised::GetActivationTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Poised.GetActivationTime"));
		
		UPoised_GetActivationTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPoised.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPoised::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Poised"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA340
	 * 		Name   -> Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProveThyself::OnSurvivorInOwnerRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ProveThyself.OnSurvivorInOwnerRangeChanged"));
		
		UProveThyself_OnSurvivorInOwnerRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProveThyself.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProveThyself::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ProveThyself"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9EE0
	 * 		Name   -> Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved
	 * 		Flags  -> (Final, Native, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URemoveOnOriginatingSurvivorGoneStatusEffect::Authority_OnSurvivorRemoved(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect.Authority_OnSurvivorRemoved"));
		
		URemoveOnOriginatingSurvivorGoneStatusEffect_Authority_OnSurvivorRemoved_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URemoveOnOriginatingSurvivorGoneStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URemoveOnOriginatingSurvivorGoneStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.RemoveOnOriginatingSurvivorGoneStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA230
	 * 		Name   -> Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged
	 * 		Flags  -> (Native, Protected)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProveThyselfEffect::OnInRangeOfOriginatorChanged(bool inRange, class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ProveThyselfEffect.OnInRangeOfOriginatorChanged"));
		
		UProveThyselfEffect_OnInRangeOfOriginatorChanged_Params params {};
		params.inRange = inRange;
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProveThyselfEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProveThyselfEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ProveThyselfEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UQuickAndQuiet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UQuickAndQuiet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.QuickAndQuiet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResiliencePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResiliencePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ResiliencePerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function DBDCompetence.Saboteur.GetCooldownDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USaboteur::GetCooldownDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Saboteur.GetCooldownDurationAtLevel"));
		
		USaboteur_GetCooldownDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USaboteur.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USaboteur::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Saboteur"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondsToRateModifierBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondsToRateModifierBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SecondsToRateModifierBaseAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9580
	 * 		Name   -> Function DBDCompetence.SecondWind.Authority_OnHealProgress
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USecondWind::Authority_OnHealProgress(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SecondWind.Authority_OnHealProgress"));
		
		USecondWind_Authority_OnHealProgress_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USecondWind.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USecondWind::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SecondWind"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfCare.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfCare::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SelfCare"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnEffectsOnAllSurvivorsBaseAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SpawnEffectsOnAllSurvivorsBaseAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USimpleSpawnEffectsOnAllSurvivorsAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USimpleSpawnEffectsOnAllSurvivorsAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SimpleSpawnEffectsOnAllSurvivorsAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USingleGateBlockerEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USingleGateBlockerEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SingleGateBlockerEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.SmallGame.VFXTotemFound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void USmallGame::VFXTotemFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SmallGame.VFXTotemFound"));
		
		USmallGame_VFXTotemFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.SmallGame.SearchForTotems
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void USmallGame::SearchForTotems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SmallGame.SearchForTotems"));
		
		USmallGame_SearchForTotems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA210
	 * 		Name   -> Function DBDCompetence.SmallGame.Multicast_TotemFound
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 */
	void USmallGame::Multicast_TotemFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SmallGame.Multicast_TotemFound"));
		
		USmallGame_Multicast_TotemFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA0A0
	 * 		Name   -> Function DBDCompetence.SmallGame.GetDetectionConeAngle
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USmallGame::GetDetectionConeAngle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SmallGame.GetDetectionConeAngle"));
		
		USmallGame_GetDetectionConeAngle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9F70
	 * 		Name   -> Function DBDCompetence.SmallGame.Authority_SetTotemDetected
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USmallGame::Authority_SetTotemDetected(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SmallGame.Authority_SetTotemDetected"));
		
		USmallGame_Authority_SetTotemDetected_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USmallGame.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USmallGame::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SmallGame"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9E50
	 * 		Name   -> Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USoleSurvivor::Authority_OnSurvivorAdded(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SoleSurvivor.Authority_OnSurvivorAdded"));
		
		USoleSurvivor_Authority_OnSurvivorAdded_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USoleSurvivor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USoleSurvivor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SoleSurvivor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9C10
	 * 		Name   -> Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Bonus                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               TriggerLoudNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hadInput                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESkillCheckCustomType                              Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              ChargeChange                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolidarity::Authority_OnSkillCheckResponse(bool success, bool Bonus, class ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType Type, float ChargeChange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Solidarity.Authority_OnSkillCheckResponse"));
		
		USolidarity_Authority_OnSkillCheckResponse_Params params {};
		params.success = success;
		params.Bonus = Bonus;
		params.Player = Player;
		params.TriggerLoudNoise = TriggerLoudNoise;
		params.hadInput = hadInput;
		params.Type = Type;
		params.ChargeChange = ChargeChange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9730
	 * 		Name   -> Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USolidarity::Authority_OnHealthChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Solidarity.Authority_OnHealthChargeApplied"));
		
		USolidarity_Authority_OnHealthChargeApplied_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USolidarity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USolidarity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Solidarity"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawningEffectPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawningEffectPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SpawningEffectPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpiesFromTheShadows.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiesFromTheShadows::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SpiesFromTheShadows"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA320
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.OnRep_IsInRange
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USpineChillPerk::OnRep_IsInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.OnRep_IsInRange"));
		
		USpineChillPerk_OnRep_IsInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA1C0
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.IsLookingTowards
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USpineChillPerk::IsLookingTowards()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.IsLookingTowards"));
		
		USpineChillPerk_IsLookingTowards_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA190
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.IsInRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USpineChillPerk::IsInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.IsInRange"));
		
		USpineChillPerk_IsInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA160
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.HasLineOfSight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USpineChillPerk::HasLineOfSight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.HasLineOfSight"));
		
		USpineChillPerk_HasLineOfSight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA100
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.GetRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float USpineChillPerk::GetRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.GetRange"));
		
		USpineChillPerk_GetRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA0D0
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.GetLingerDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	float USpineChillPerk::GetLingerDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.GetLingerDuration"));
		
		USpineChillPerk_GetLingerDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA000
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.GetActionSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            PerkLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float USpineChillPerk::GetActionSpeed(int32_t PerkLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.GetActionSpeed"));
		
		USpineChillPerk_GetActionSpeed_Params params {};
		params.PerkLevel = PerkLevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9A00
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.Authority_OnIsLookingTowardsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsLookingTowards                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpineChillPerk::Authority_OnIsLookingTowardsChanged(bool IsLookingTowards)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.Authority_OnIsLookingTowardsChanged"));
		
		USpineChillPerk_Authority_OnIsLookingTowardsChanged_Params params {};
		params.IsLookingTowards = IsLookingTowards;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9970
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.Authority_OnIsInLineOfSightChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isInLineOfSight                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpineChillPerk::Authority_OnIsInLineOfSightChanged(bool isInLineOfSight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.Authority_OnIsInLineOfSightChanged"));
		
		USpineChillPerk_Authority_OnIsInLineOfSightChanged_Params params {};
		params.isInLineOfSight = isInLineOfSight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C98E0
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpineChillPerk::Authority_OnInRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.Authority_OnInRangeChanged"));
		
		USpineChillPerk_Authority_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9480
	 * 		Name   -> Function DBDCompetence.SpineChillPerk.AreTriggersMet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool USpineChillPerk::AreTriggersMet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SpineChillPerk.AreTriggersMet"));
		
		USpineChillPerk_AreTriggersMet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpineChillPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpineChillPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SpineChillPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA130
	 * 		Name   -> Function DBDCompetence.SprintBurst.GetSprintDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USprintBurst::GetSprintDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SprintBurst.GetSprintDuration"));
		
		USprintBurst_GetSprintDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function DBDCompetence.SprintBurst.GetExhaustedDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USprintBurst::GetExhaustedDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SprintBurst.GetExhaustedDuration"));
		
		USprintBurst_GetExhaustedDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9B20
	 * 		Name   -> Function DBDCompetence.SprintBurst.Authority_OnPerkFlagsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isAdded                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USprintBurst::Authority_OnPerkFlagsChanged(const struct FGameplayTag& GameplayTag, bool isAdded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SprintBurst.Authority_OnPerkFlagsChanged"));
		
		USprintBurst_Authority_OnPerkFlagsChanged_Params params {};
		params.GameplayTag = GameplayTag;
		params.isAdded = isAdded;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C9A90
	 * 		Name   -> Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USprintBurst::Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.SprintBurst.Authority_OnIsRunningAndMovingChanged"));
		
		USprintBurst_Authority_OnIsRunningAndMovingChanged_Params params {};
		params.isRunningAndMoving = isRunningAndMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USprintBurst.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USprintBurst::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SprintBurst"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA410
	 * 		Name   -> Function DBDCompetence.StakeOutPerk.Server_ConsumeToken
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer, NetValidate)
	 */
	void UStakeOutPerk::Server_ConsumeToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.StakeOutPerk.Server_ConsumeToken"));
		
		UStakeOutPerk_Server_ConsumeToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA1F0
	 * 		Name   -> Function DBDCompetence.StakeOutPerk.Local_BroadcastConsumeToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UStakeOutPerk::Local_BroadcastConsumeToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.StakeOutPerk.Local_BroadcastConsumeToken"));
		
		UStakeOutPerk_Local_BroadcastConsumeToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStakeOutPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStakeOutPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.StakeOutPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD640
	 * 		Name   -> Function DBDCompetence.StatsSystemUtilities.InitStatBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FTunableStat                                theStat                                                    (Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UStatsSystemUtilities::STATIC_InitStatBP(struct FTunableStat* theStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.StatsSystemUtilities.InitStatBP"));
		
		UStatsSystemUtilities_InitStatBP_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (theStat != nullptr)
			*theStat = params.theStat;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD4D0
	 * 		Name   -> Function DBDCompetence.StatsSystemUtilities.GetStatValueBP
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FTunableStat                                theStat                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UStatsSystemUtilities::STATIC_GetStatValueBP(const struct FTunableStat& theStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.StatsSystemUtilities.GetStatValueBP"));
		
		UStatsSystemUtilities_GetStatValueBP_Params params {};
		params.theStat = theStat;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatsSystemUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatsSystemUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.StatsSystemUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStatusEffectOriginatorSubjectProvider.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStatusEffectOriginatorSubjectProvider::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.StatusEffectOriginatorSubjectProvider"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD610
	 * 		Name   -> Function DBDCompetence.Surge.GetZoneRadius
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float USurge::GetZoneRadius()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Surge.GetZoneRadius"));
		
		USurge_GetZoneRadius_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function DBDCompetence.Surge.GetInstantRegressionAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USurge::GetInstantRegressionAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Surge.GetInstantRegressionAtLevel"));
		
		USurge_GetInstantRegressionAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD4A0
	 * 		Name   -> Function DBDCompetence.Surge.GetHasCooldown
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurge::GetHasCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Surge.GetHasCooldown"));
		
		USurge_GetHasCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD470
	 * 		Name   -> Function DBDCompetence.Surge.GetCooldownDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float USurge::GetCooldownDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Surge.GetCooldownDurationAtLevel"));
		
		USurge_GetCooldownDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD3D0
	 * 		Name   -> Function DBDCompetence.Surge.Client_TriggerEffects
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		TArray<class AGenerator*>                          generators                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void USurge::Client_TriggerEffects(TArray<class AGenerator*> generators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Surge.Client_TriggerEffects"));
		
		USurge_Client_TriggerEffects_Params params {};
		params.generators = generators;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurge.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurge::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Surge"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorWasRecentlyUnhookedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorWasRecentlyUnhookedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.SurvivorWasRecentlyUnhookedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestAnyActorPairQueryRangeIsTrue.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestAnyActorPairQueryRangeIsTrue::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TestAnyActorPairQueryRangeIsTrue"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TestCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATestDBDGameState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATestDBDGameState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TestDBDGameState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD880
	 * 		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTheMettleOfMan::OnRep_NumTokenSoFar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.TheMettleOfMan.OnRep_NumTokenSoFar"));
		
		UTheMettleOfMan_OnRep_NumTokenSoFar_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD880
	 * 		Name   -> Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTheMettleOfMan::OnRep_CurrentPhase()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.TheMettleOfMan.OnRep_CurrentPhase"));
		
		UTheMettleOfMan_OnRep_CurrentPhase_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTheMettleOfMan.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheMettleOfMan::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TheMettleOfMan"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD860
	 * 		Name   -> Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UThrillingTremors::OnRep_BlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ThrillingTremors.OnRep_BlockedGenerators"));
		
		UThrillingTremors_OnRep_BlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function DBDCompetence.ThrillingTremors.GetDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UThrillingTremors::GetDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ThrillingTremors.GetDurationAtLevel"));
		
		UThrillingTremors_GetDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD8B0
	 * 		Name   -> Function DBDCompetence.ThrillingTremors.GetCooldownAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UThrillingTremors::GetCooldownAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.ThrillingTremors.GetCooldownAtLevel"));
		
		UThrillingTremors_GetCooldownAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThrillingTremors.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrillingTremors::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ThrillingTremors"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedObliviousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedObliviousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TimedObliviousEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTimedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTimedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.TimedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD5E0
	 * 		Name   -> Function DBDCompetence.Tinkerer.GetTriggerThreshold
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTinkerer::GetTriggerThreshold()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.GetTriggerThreshold"));
		
		UTinkerer_GetTriggerThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045BD880
	 * 		Name   -> Function DBDCompetence.Tinkerer.GetActivationTimeAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UTinkerer::GetActivationTimeAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.GetActivationTimeAtLevel"));
		
		UTinkerer_GetActivationTimeAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.Tinkerer.Authority_OnUndetectableGeneratorInterrupt
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTinkerer::Authority_OnUndetectableGeneratorInterrupt(class ADBDPlayer* Instigator, class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.Authority_OnUndetectableGeneratorInterrupt"));
		
		UTinkerer_Authority_OnUndetectableGeneratorInterrupt_Params params {};
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.Tinkerer.Authority_OnUndetectableAttackSuccessNearActiveGenerator
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Instigator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTinkerer::Authority_OnUndetectableAttackSuccessNearActiveGenerator(class ADBDPlayer* Instigator, class ADBDPlayer* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.Authority_OnUndetectableAttackSuccessNearActiveGenerator"));
		
		UTinkerer_Authority_OnUndetectableAttackSuccessNearActiveGenerator_Params params {};
		params.Instigator = Instigator;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD3B0
	 * 		Name   -> Function DBDCompetence.Tinkerer.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UTinkerer::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.Authority_OnLevelReadyToPlay"));
		
		UTinkerer_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.Tinkerer.Authority_OnGeneratorReachedThreshold
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTinkerer::Authority_OnGeneratorReachedThreshold(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.Authority_OnGeneratorReachedThreshold"));
		
		UTinkerer_Authority_OnGeneratorReachedThreshold_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD2A0
	 * 		Name   -> Function DBDCompetence.Tinkerer.Authority_OnGeneratorChargePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UTinkerer::Authority_OnGeneratorChargePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Tinkerer.Authority_OnGeneratorChargePercentChanged"));
		
		UTinkerer_Authority_OnGeneratorChargePercentChanged_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		params.PercentCompletionChange = PercentCompletionChange;
		params.TotalPercentComplete = TotalPercentComplete;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTinkerer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTinkerer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Tinkerer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUndetectableEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUndetectableEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.UndetectableEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUndetectableTimedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUndetectableTimedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.UndetectableTimedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnhookedMovementSpeedBonusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhookedMovementSpeedBonusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.UnhookedMovementSpeedBonusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeddingRing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeddingRing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.WeddingRing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD8A0
	 * 		Name   -> Function DBDCompetence.WereGonnaLiveForever.OnRep_PerkEnabled
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWereGonnaLiveForever::OnRep_PerkEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.WereGonnaLiveForever.OnRep_PerkEnabled"));
		
		UWereGonnaLiveForever_OnRep_PerkEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWereGonnaLiveForever.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWereGonnaLiveForever::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.WereGonnaLiveForever"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.Whispers.OnWhispersAudio
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UWhispers::OnWhispersAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Whispers.OnWhispersAudio"));
		
		UWhispers_OnWhispersAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD8C0
	 * 		Name   -> Function DBDCompetence.Whispers.OnRep_SurvivorsInRange
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UWhispers::OnRep_SurvivorsInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Whispers.OnRep_SurvivorsInRange"));
		
		UWhispers_OnRep_SurvivorsInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD7B0
	 * 		Name   -> Function DBDCompetence.Whispers.Multicast_FireAudioEvent
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		int32_t                                            survivorsInRange                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UWhispers::Multicast_FireAudioEvent(int32_t survivorsInRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.Whispers.Multicast_FireAudioEvent"));
		
		UWhispers_Multicast_FireAudioEvent_Params params {};
		params.survivorsInRange = survivorsInRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWhispers.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWhispers::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.Whispers"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorToReveal                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UYamaokaFamilyCrest::RevealSurvivor(class ACamperPlayer* survivorToReveal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.YamaokaFamilyCrest.RevealSurvivor"));
		
		UYamaokaFamilyCrest_RevealSurvivor_Params params {};
		params.survivorToReveal = survivorToReveal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD840
	 * 		Name   -> Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UYamaokaFamilyCrest::OnRep_AddonActivationCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDCompetence.YamaokaFamilyCrest.OnRep_AddonActivationCount"));
		
		UYamaokaFamilyCrest_OnRep_AddonActivationCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UYamaokaFamilyCrest.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UYamaokaFamilyCrest::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.YamaokaFamilyCrest"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZanshinTactics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZanshinTactics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDCompetence.ZanshinTactics"));
		return ptr;
	}

}


