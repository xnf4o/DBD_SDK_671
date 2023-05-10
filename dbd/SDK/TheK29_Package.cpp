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
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_K29SupplyCrate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_K29SupplyCrate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.AISkill_FindCollectable_K29SupplyCrate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_K29StabilizingSpray.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_K29StabilizingSpray::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.AISkill_InteractionUseItem_K29StabilizingSpray"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_K29StabilizingSprayOther.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_K29StabilizingSprayOther::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.AISkill_InteractionUseItem_K29StabilizingSprayOther"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD90
	 * 		Name   -> Function TheK29.K29AnimInstance.ResetStartThrowingSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UK29AnimInstance::ResetStartThrowingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.ResetStartThrowingSurvivor"));
		
		UK29AnimInstance_ResetStartThrowingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD70
	 * 		Name   -> Function TheK29.K29AnimInstance.ResetHasRushEndedInSurvivorImpact
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UK29AnimInstance::ResetHasRushEndedInSurvivorImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.ResetHasRushEndedInSurvivorImpact"));
		
		UK29AnimInstance_ResetHasRushEndedInSurvivorImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD50
	 * 		Name   -> Function TheK29.K29AnimInstance.ResetHasRushEndedInLedgeDrop
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UK29AnimInstance::ResetHasRushEndedInLedgeDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.ResetHasRushEndedInLedgeDrop"));
		
		UK29AnimInstance_ResetHasRushEndedInLedgeDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD30
	 * 		Name   -> Function TheK29.K29AnimInstance.ResetHasInstantlyPickedUpSurvivor
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UK29AnimInstance::ResetHasInstantlyPickedUpSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.ResetHasInstantlyPickedUpSurvivor"));
		
		UK29AnimInstance_ResetHasInstantlyPickedUpSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD10
	 * 		Name   -> Function TheK29.K29AnimInstance.OnStartThrowingSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29AnimInstance::OnStartThrowingSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.OnStartThrowingSurvivor"));
		
		UK29AnimInstance_OnStartThrowingSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDAE0
	 * 		Name   -> Function TheK29.K29AnimInstance.OnHasRushEndedInSurvivorImpact
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29AnimInstance::OnHasRushEndedInSurvivorImpact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.OnHasRushEndedInSurvivorImpact"));
		
		UK29AnimInstance_OnHasRushEndedInSurvivorImpact_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDAC0
	 * 		Name   -> Function TheK29.K29AnimInstance.OnHasRushEndedInLedgeDrop
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29AnimInstance::OnHasRushEndedInLedgeDrop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.OnHasRushEndedInLedgeDrop"));
		
		UK29AnimInstance_OnHasRushEndedInLedgeDrop_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDAA0
	 * 		Name   -> Function TheK29.K29AnimInstance.OnHasInstantlyPickedUpSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29AnimInstance::OnHasInstantlyPickedUpSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.OnHasInstantlyPickedUpSurvivor"));
		
		UK29AnimInstance_OnHasInstantlyPickedUpSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED990
	 * 		Name   -> Function TheK29.K29AnimInstance.OnGameEventReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK29AnimInstance::OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29AnimInstance.OnGameEventReceived"));
		
		UK29AnimInstance_OnGameEventReceived_Params params {};
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
	 * 		Name   -> PredefinedFunction UK29AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29AnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29GateBlockerStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29GateBlockerStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29GateBlockerStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29HinderedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29HinderedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29HinderedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK29InfectionRemovalCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK29InfectionRemovalCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29InfectionRemovalCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDE80
	 * 		Name   -> Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.SetOutlineVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29InfectionRemovalItemOutlineUpdateStrategy::SetOutlineVisibility(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.SetOutlineVisibility"));
		
		UK29InfectionRemovalItemOutlineUpdateStrategy_SetOutlineVisibility_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED7C0
	 * 		Name   -> Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.IsOutlineVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK29InfectionRemovalItemOutlineUpdateStrategy::IsOutlineVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29InfectionRemovalItemOutlineUpdateStrategy.IsOutlineVisible"));
		
		UK29InfectionRemovalItemOutlineUpdateStrategy_IsOutlineVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29InfectionRemovalItemOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29InfectionRemovalItemOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29InfectionRemovalItemOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050BF270
	 * 		Name   -> Function TheK29.K29P01.GetSurvivorVaultRushedEventRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK29P01::GetSurvivorVaultRushedEventRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29P01.GetSurvivorVaultRushedEventRange"));
		
		UK29P01_GetSurvivorVaultRushedEventRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK29.K29P02.GetRevealRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UK29P02::GetRevealRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29P02.GetRevealRange"));
		
		UK29P02_GetRevealRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED250
	 * 		Name   -> Function TheK29.K29P02.Authority_OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29P02::Authority_OnInRangeChanged(bool inRange, class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29P02.Authority_OnInRangeChanged"));
		
		UK29P02_Authority_OnInRangeChanged_Params params {};
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
	 * 		Name   -> PredefinedFunction UK29P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29P03StatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29P03StatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29P03StatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29PathingCalculatorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29PathingCalculatorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29PathingCalculatorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetSlashSurvivorInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UInteractionDefinition* AK29Power::GetSlashSurvivorInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetSlashSurvivorInteraction"));
		
		AK29Power_GetSlashSurvivorInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetSlashBreakableInteraction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UInteractionDefinition* AK29Power::GetSlashBreakableInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetSlashBreakableInteraction"));
		
		AK29Power_GetSlashBreakableInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED790
	 * 		Name   -> Function TheK29.K29Power.GetScorePercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AK29Power::GetScorePercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetScorePercent"));
		
		AK29Power_GetScorePercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushVaultCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushVaultCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushVaultCooldownInteraction"));
		
		AK29Power_GetRushVaultCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushSurvivorDetectionBox
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UStaticMeshComponent* AK29Power::GetRushSurvivorDetectionBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushSurvivorDetectionBox"));
		
		AK29Power_GetRushSurvivorDetectionBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushCompleteSurvivorThrowCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushCompleteSurvivorThrowCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushCompleteSurvivorThrowCooldownInteraction"));
		
		AK29Power_GetRushCompleteSurvivorThrowCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushCompleteSurvivorHitCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushCompleteSurvivorHitCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushCompleteSurvivorHitCooldownInteraction"));
		
		AK29Power_GetRushCompleteSurvivorHitCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushCompleteNoSurvivorCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushCompleteNoSurvivorCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushCompleteNoSurvivorCooldownInteraction"));
		
		AK29Power_GetRushCompleteNoSurvivorCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED760
	 * 		Name   -> Function TheK29.K29Power.GetRushChargesHandlerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UK29RushChargesHandlerComponent* AK29Power::GetRushChargesHandlerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushChargesHandlerComponent"));
		
		AK29Power_GetRushChargesHandlerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushChargeCancelCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushChargeCancelCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushChargeCancelCooldownInteraction"));
		
		AK29Power_GetRushChargeCancelCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushChargeableInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UK29RushChargeableInteraction* AK29Power::GetRushChargeableInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushChargeableInteraction"));
		
		AK29Power_GetRushChargeableInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetRushBreakableCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetRushBreakableCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetRushBreakableCooldownInteraction"));
		
		AK29Power_GetRushBreakableCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetPushSurvivorOverLedgeInteraction
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	class UInteractionDefinition* AK29Power::GetPushSurvivorOverLedgeInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetPushSurvivorOverLedgeInteraction"));
		
		AK29Power_GetPushSurvivorOverLedgeInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED730
	 * 		Name   -> Function TheK29.K29Power.GetPowerStatusHandlerComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	class UK29PowerStatusHandlerComponent* AK29Power::GetPowerStatusHandlerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetPowerStatusHandlerComponent"));
		
		AK29Power_GetPowerStatusHandlerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29Power.GetDropSurvivorCooldownInteraction
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	class UK29RushCooldownInteraction* AK29Power::GetDropSurvivorCooldownInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.GetDropSurvivorCooldownInteraction"));
		
		AK29Power_GetDropSurvivorCooldownInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED3D0
	 * 		Name   -> Function TheK29.K29Power.Authority_OnStun
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AK29Power::Authority_OnStun(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Power.Authority_OnStun"));
		
		AK29Power_Authority_OnStun_Params params {};
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
	 * 		Name   -> PredefinedFunction AK29Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK29Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29Power"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29PowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29PowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29PowerChargePresentationItemProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CFC850
	 * 		Name   -> Function TheK29.K29PowerChargePresentationPowerFadeComponent.SetDependencies
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UK29RushChargesHandlerComponent*             ammoHandler                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerChargePresentationPowerFadeComponent::SetDependencies(class UK29RushChargesHandlerComponent* ammoHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerChargePresentationPowerFadeComponent.SetDependencies"));
		
		UK29PowerChargePresentationPowerFadeComponent_SetDependencies_Params params {};
		params.ammoHandler = ammoHandler;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDB00
	 * 		Name   -> Function TheK29.K29PowerChargePresentationPowerFadeComponent.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerChargePresentationPowerFadeComponent::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerChargePresentationPowerFadeComponent.OnKillerSet"));
		
		UK29PowerChargePresentationPowerFadeComponent_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29PowerChargePresentationPowerFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29PowerChargePresentationPowerFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29PowerChargePresentationPowerFadeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D3DF30
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Server_ReleaseSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isForced                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Server_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Server_ReleaseSurvivor"));
		
		UK29PowerStatusHandlerComponent_Server_ReleaseSurvivor_Params params {};
		params.Survivor = Survivor;
		params.isForced = isForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDDB0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Server_GrabSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isProcessingInitialInfection                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Server_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Server_GrabSurvivor"));
		
		UK29PowerStatusHandlerComponent_Server_GrabSurvivor_Params params {};
		params.Survivor = Survivor;
		params.isProcessingInitialInfection = isProcessingInitialInfection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDC20
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.OnRep_SurvivorStatusList
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		TArray<struct FK29SurvivorStatus>                  oldSurvivorStatus                                          (Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::OnRep_SurvivorStatusList(TArray<struct FK29SurvivorStatus> oldSurvivorStatus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.OnRep_SurvivorStatusList"));
		
		UK29PowerStatusHandlerComponent_OnRep_SurvivorStatusList_Params params {};
		params.oldSurvivorStatus = oldSurvivorStatus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDB90
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.OnKillerSet"));
		
		UK29PowerStatusHandlerComponent_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D10300
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Multicast_UseStabilizingSpray
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               targetSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Multicast_UseStabilizingSpray(class ACamperPlayer* targetSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Multicast_UseStabilizingSpray"));
		
		UK29PowerStatusHandlerComponent_Multicast_UseStabilizingSpray_Params params {};
		params.targetSurvivor = targetSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615570
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Multicast_RemoveSurvivorFromCloset
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Multicast_RemoveSurvivorFromCloset(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Multicast_RemoveSurvivorFromCloset"));
		
		UK29PowerStatusHandlerComponent_Multicast_RemoveSurvivorFromCloset_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED8C0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Multicast_ReleaseSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isForced                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Multicast_ReleaseSurvivor(class ACamperPlayer* Survivor, bool isForced)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Multicast_ReleaseSurvivor"));
		
		UK29PowerStatusHandlerComponent_Multicast_ReleaseSurvivor_Params params {};
		params.Survivor = Survivor;
		params.isForced = isForced;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED7F0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Multicast_GrabSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isProcessingInitialInfection                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Multicast_GrabSurvivor(class ACamperPlayer* Survivor, bool isProcessingInitialInfection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Multicast_GrabSurvivor"));
		
		UK29PowerStatusHandlerComponent_Multicast_GrabSurvivor_Params params {};
		params.Survivor = Survivor;
		params.isProcessingInitialInfection = isProcessingInitialInfection;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE7780
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Multicast_DropSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               leftSurvivor                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Multicast_DropSurvivor(class ACamperPlayer* leftSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Multicast_DropSurvivor"));
		
		UK29PowerStatusHandlerComponent_Multicast_DropSurvivor_Params params {};
		params.leftSurvivor = leftSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED700
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.GetMaxInfectionLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	int32_t UK29PowerStatusHandlerComponent::GetMaxInfectionLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.GetMaxInfectionLevel"));
		
		UK29PowerStatusHandlerComponent_GetMaxInfectionLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED660
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.GetInfectionLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UK29PowerStatusHandlerComponent::GetInfectionLevel(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.GetInfectionLevel"));
		
		UK29PowerStatusHandlerComponent_GetInfectionLevel_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingNonInfectedSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29PowerStatusHandlerComponent::Cosmetic_OnGrabbingNonInfectedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingNonInfectedSurvivor"));
		
		UK29PowerStatusHandlerComponent_Cosmetic_OnGrabbingNonInfectedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingInfectedSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29PowerStatusHandlerComponent::Cosmetic_OnGrabbingInfectedSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Cosmetic_OnGrabbingInfectedSurvivor"));
		
		UK29PowerStatusHandlerComponent_Cosmetic_OnGrabbingInfectedSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED590
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_UseStabilizingSpray
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               instigatingSurvivor                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               targetSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Authority_UseStabilizingSpray(class ACamperPlayer* instigatingSurvivor, class ACamperPlayer* targetSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_UseStabilizingSpray"));
		
		UK29PowerStatusHandlerComponent_Authority_UseStabilizingSpray_Params params {};
		params.instigatingSurvivor = instigatingSurvivor;
		params.targetSurvivor = targetSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToMaxInfection
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK29PowerStatusHandlerComponent::Authority_SetAllSurvivorsToMaxInfection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToMaxInfection"));
		
		UK29PowerStatusHandlerComponent_Authority_SetAllSurvivorsToMaxInfection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToInitialInfection
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK29PowerStatusHandlerComponent::Authority_SetAllSurvivorsToInitialInfection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_SetAllSurvivorsToInitialInfection"));
		
		UK29PowerStatusHandlerComponent_Authority_SetAllSurvivorsToInitialInfection_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED570
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorImmoblizedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29PowerStatusHandlerComponent::Authority_OnSurvivorImmoblizedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorImmoblizedChanged"));
		
		UK29PowerStatusHandlerComponent_Authority_OnSurvivorImmoblizedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED4E0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Authority_OnSurvivorAdded(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSurvivorAdded"));
		
		UK29PowerStatusHandlerComponent_Authority_OnSurvivorAdded_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED340
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSlash
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               targetSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Authority_OnSlash(class ACamperPlayer* targetSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_OnSlash"));
		
		UK29PowerStatusHandlerComponent_Authority_OnSlash_Params params {};
		params.targetSurvivor = targetSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED320
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29PowerStatusHandlerComponent::Authority_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_OnIntroCompleted"));
		
		UK29PowerStatusHandlerComponent_Authority_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED140
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_HealInfectionLevels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            infectionLevelsToHeal                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldSetInfectionActiveToFalse                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Authority_HealInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionLevelsToHeal, bool shouldSetInfectionActiveToFalse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_HealInfectionLevels"));
		
		UK29PowerStatusHandlerComponent_Authority_HealInfectionLevels_Params params {};
		params.Survivor = Survivor;
		params.infectionLevelsToHeal = infectionLevelsToHeal;
		params.shouldSetInfectionActiveToFalse = shouldSetInfectionActiveToFalse;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_HealAllSurvivorsInfectionWithStabilizingSpray
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK29PowerStatusHandlerComponent::Authority_HealAllSurvivorsInfectionWithStabilizingSpray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_HealAllSurvivorsInfectionWithStabilizingSpray"));
		
		UK29PowerStatusHandlerComponent_Authority_HealAllSurvivorsInfectionWithStabilizingSpray_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ED070
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.Authority_AddInfectionLevels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            infectionToAdd                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::Authority_AddInfectionLevels(class ACamperPlayer* Survivor, int32_t infectionToAdd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.Authority_AddInfectionLevels"));
		
		UK29PowerStatusHandlerComponent_Authority_AddInfectionLevels_Params params {};
		params.Survivor = Survivor;
		params.infectionToAdd = infectionToAdd;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050ECFE0
	 * 		Name   -> Function TheK29.K29PowerStatusHandlerComponent.AddToTimesCuredByHeal
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29PowerStatusHandlerComponent::AddToTimesCuredByHeal(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29PowerStatusHandlerComponent.AddToTimesCuredByHeal"));
		
		UK29PowerStatusHandlerComponent_AddToTimesCuredByHeal_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29PowerStatusHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29PowerStatusHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29PowerStatusHandlerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F2210
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_SlashAtSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     currentKillerPosition                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_SlashAtSurvivor(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_SlashAtSurvivor"));
		
		UK29RushChargeableInteraction_Server_SlashAtSurvivor_Params params {};
		params.Survivor = Survivor;
		params.currentKillerPosition = currentKillerPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F2180
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingInCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               hitOtherSurvivor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_SetCurrentRushAsEndingInCollision(bool hitOtherSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingInCollision"));
		
		UK29RushChargeableInteraction_Server_SetCurrentRushAsEndingInCollision_Params params {};
		params.hitOtherSurvivor = hitOtherSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F2160
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingAtLedge
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UK29RushChargeableInteraction::Server_SetCurrentRushAsEndingAtLedge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRushAsEndingAtLedge"));
		
		UK29RushChargeableInteraction_Server_SetCurrentRushAsEndingAtLedge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F2030
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRush
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		struct FK29GuidedMovementInstance                  newRushInstance                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		EK29RushPhase                                      targetPhase                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_SetCurrentRush(const struct FK29GuidedMovementInstance& newRushInstance, EK29RushPhase targetPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_SetCurrentRush"));
		
		UK29RushChargeableInteraction_Server_SetCurrentRush_Params params {};
		params.newRushInstance = newRushInstance;
		params.targetPhase = targetPhase;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1FA0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_DestroyPalletOrBreakable
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AActor*                                      destroyable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_DestroyPalletOrBreakable(class AActor* destroyable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_DestroyPalletOrBreakable"));
		
		UK29RushChargeableInteraction_Server_DestroyPalletOrBreakable_Params params {};
		params.destroyable = destroyable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1ED0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_DamageSurvivorAsCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     currentKillerPosition                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_DamageSurvivorAsCollision"));
		
		UK29RushChargeableInteraction_Server_DamageSurvivorAsCollision_Params params {};
		params.Survivor = Survivor;
		params.currentKillerPosition = currentKillerPosition;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1DF0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_ChangeRushPhase
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		EK29RushPhase                                      newRushPhase                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               forceLocallyControlled                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Server_ChangeRushPhase(EK29RushPhase newRushPhase, bool forceLocallyControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_ChangeRushPhase"));
		
		UK29RushChargeableInteraction_Server_ChangeRushPhase_Params params {};
		params.newRushPhase = newRushPhase;
		params.forceLocallyControlled = forceLocallyControlled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78F00
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Server_CancelInteraction
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UK29RushChargeableInteraction::Server_CancelInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Server_CancelInteraction"));
		
		UK29RushChargeableInteraction_Server_CancelInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1D60
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.RushComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               rushEndedNaturally                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::RushComplete(bool rushEndedNaturally)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.RushComplete"));
		
		UK29RushChargeableInteraction_RushComplete_Params params {};
		params.rushEndedNaturally = rushEndedNaturally;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1D00
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnWindowOfOpportunityTimeoutCooldownEnd
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UK29RushChargeableInteraction::OnWindowOfOpportunityTimeoutCooldownEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnWindowOfOpportunityTimeoutCooldownEnd"));
		
		UK29RushChargeableInteraction_OnWindowOfOpportunityTimeoutCooldownEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1C50
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnSubsequentRushOpportunityTimeout
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargeableInteraction::OnSubsequentRushOpportunityTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnSubsequentRushOpportunityTimeout"));
		
		UK29RushChargeableInteraction_OnSubsequentRushOpportunityTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1C30
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnSmashOutTimerCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargeableInteraction::OnSmashOutTimerCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnSmashOutTimerCompleted"));
		
		UK29RushChargeableInteraction_OnSmashOutTimerCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1930
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnInstantCarryTimerComplete
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorToCarry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::OnInstantCarryTimerComplete(class ACamperPlayer* survivorToCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnInstantCarryTimerComplete"));
		
		UK29RushChargeableInteraction_OnInstantCarryTimerComplete_Params params {};
		params.survivorToCarry = survivorToCarry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1790
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnGrabbingTransitionComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargeableInteraction::OnGrabbingTransitionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnGrabbingTransitionComplete"));
		
		UK29RushChargeableInteraction_OnGrabbingTransitionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1660
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.OnCollisionEnableTimerComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargeableInteraction::OnCollisionEnableTimerComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.OnCollisionEnableTimerComplete"));
		
		UK29RushChargeableInteraction_OnCollisionEnableTimerComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F15D0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_SmashSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorToCarry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_SmashSurvivor(class ACamperPlayer* survivorToCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_SmashSurvivor"));
		
		UK29RushChargeableInteraction_Multicast_SmashSurvivor_Params params {};
		params.survivorToCarry = survivorToCarry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F14C0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_SlashAtSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     currentKillerPosition                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 survivorTargetDamageState                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_SlashAtSurvivor(class ACamperPlayer* Survivor, const struct FVector& currentKillerPosition, ECamperDamageState survivorTargetDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_SlashAtSurvivor"));
		
		UK29RushChargeableInteraction_Multicast_SlashAtSurvivor_Params params {};
		params.Survivor = Survivor;
		params.currentKillerPosition = currentKillerPosition;
		params.survivorTargetDamageState = survivorTargetDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F14A0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingInCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29RushChargeableInteraction::Multicast_SetCurrentRushAsEndingInCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingInCollision"));
		
		UK29RushChargeableInteraction_Multicast_SetCurrentRushAsEndingInCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1480
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingAtLedge
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29RushChargeableInteraction::Multicast_SetCurrentRushAsEndingAtLedge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRushAsEndingAtLedge"));
		
		UK29RushChargeableInteraction_Multicast_SetCurrentRushAsEndingAtLedge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1380
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRush
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FK29GuidedMovementInstance                  newRushInstance                                            (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_SetCurrentRush(const struct FK29GuidedMovementInstance& newRushInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_SetCurrentRush"));
		
		UK29RushChargeableInteraction_Multicast_SetCurrentRush_Params params {};
		params.newRushInstance = newRushInstance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1360
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_RushValid
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29RushChargeableInteraction::Multicast_RushValid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_RushValid"));
		
		UK29RushChargeableInteraction_Multicast_RushValid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D79310
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_RushInvalid
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29RushChargeableInteraction::Multicast_RushInvalid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_RushInvalid"));
		
		UK29RushChargeableInteraction_Multicast_RushInvalid_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F12D0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_DestroyPalletOrBreakable
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AActor*                                      destroyable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_DestroyPalletOrBreakable(class AActor* destroyable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_DestroyPalletOrBreakable"));
		
		UK29RushChargeableInteraction_Multicast_DestroyPalletOrBreakable_Params params {};
		params.destroyable = destroyable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F11C0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_DamageSurvivorAsCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     currentKillerPosition                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               collidedSurvivor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 survivorTargetDamageState                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_DamageSurvivorAsCollision(const struct FVector& currentKillerPosition, class ACamperPlayer* collidedSurvivor, ECamperDamageState survivorTargetDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_DamageSurvivorAsCollision"));
		
		UK29RushChargeableInteraction_Multicast_DamageSurvivorAsCollision_Params params {};
		params.currentKillerPosition = currentKillerPosition;
		params.collidedSurvivor = collidedSurvivor;
		params.survivorTargetDamageState = survivorTargetDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F10E0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_ChangeRushPhase
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EK29RushPhase                                      newRushPhase                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               forceLocallyControlled                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_ChangeRushPhase(EK29RushPhase newRushPhase, bool forceLocallyControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_ChangeRushPhase"));
		
		UK29RushChargeableInteraction_Multicast_ChangeRushPhase_Params params {};
		params.newRushPhase = newRushPhase;
		params.forceLocallyControlled = forceLocallyControlled;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1050
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_CarrySurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorToCarry                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Multicast_CarrySurvivor(class ACamperPlayer* survivorToCarry)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_CarrySurvivor"));
		
		UK29RushChargeableInteraction_Multicast_CarrySurvivor_Params params {};
		params.survivorToCarry = survivorToCarry;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78EE0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Multicast_CancelInteraction
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29RushChargeableInteraction::Multicast_CancelInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Multicast_CancelInteraction"));
		
		UK29RushChargeableInteraction_Multicast_CancelInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0F30
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.GetRushTimeLeft
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK29RushChargeableInteraction::GetRushTimeLeft()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.GetRushTimeLeft"));
		
		UK29RushChargeableInteraction_GetRushTimeLeft_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_ShowEndIndicator
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasOutParms, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     endIndicatorLocation                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    forwardRotation                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Cosmetic_ShowEndIndicator(const struct FVector& endIndicatorLocation, const struct FRotator& forwardRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_ShowEndIndicator"));
		
		UK29RushChargeableInteraction_Cosmetic_ShowEndIndicator_Params params {};
		params.endIndicatorLocation = endIndicatorLocation;
		params.forwardRotation = forwardRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnSlashAtSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 survivorTargetDamageState                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnSlashAtSurvivor(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnSlashAtSurvivor"));
		
		UK29RushChargeableInteraction_Cosmetic_OnSlashAtSurvivor_Params params {};
		params.Survivor = Survivor;
		params.survivorTargetDamageState = survivorTargetDamageState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnRushStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushStart"));
		
		UK29RushChargeableInteraction_Cosmetic_OnRushStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushPhaseChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EK29RushPhase                                      previousPhase                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EK29RushPhase                                      newPhase                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnRushPhaseChanged(EK29RushPhase previousPhase, EK29RushPhase newPhase)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushPhaseChanged"));
		
		UK29RushChargeableInteraction_Cosmetic_OnRushPhaseChanged_Params params {};
		params.previousPhase = previousPhase;
		params.newPhase = newPhase;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnRushEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnRushEnd"));
		
		UK29RushChargeableInteraction_Cosmetic_OnRushEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnChargeStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeStart"));
		
		UK29RushChargeableInteraction_Cosmetic_OnChargeStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargeableInteraction::Cosmetic_OnChargeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_OnChargeEnd"));
		
		UK29RushChargeableInteraction_Cosmetic_OnChargeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_HideEndIndicator
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargeableInteraction::Cosmetic_HideEndIndicator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_HideEndIndicator"));
		
		UK29RushChargeableInteraction_Cosmetic_HideEndIndicator_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.Cosmetic_DamageSurvivorAsCollision
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 survivorTargetDamageState                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargeableInteraction::Cosmetic_DamageSurvivorAsCollision(class ACamperPlayer* Survivor, ECamperDamageState survivorTargetDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.Cosmetic_DamageSurvivorAsCollision"));
		
		UK29RushChargeableInteraction_Cosmetic_DamageSurvivorAsCollision_Params params {};
		params.Survivor = Survivor;
		params.survivorTargetDamageState = survivorTargetDamageState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0DD0
	 * 		Name   -> Function TheK29.K29RushChargeableInteraction.BounceComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargeableInteraction::BounceComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargeableInteraction.BounceComplete"));
		
		UK29RushChargeableInteraction_BounceComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29RushChargeableInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29RushChargeableInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29RushChargeableInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F22E0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.SetToFullCharge
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargesHandlerComponent::SetToFullCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.SetToFullCharge"));
		
		UK29RushChargesHandlerComponent_SetToFullCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1B00
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.OnMaximumChargesChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              NewValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargesHandlerComponent::OnMaximumChargesChanged(float NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.OnMaximumChargesChanged"));
		
		UK29RushChargesHandlerComponent_OnMaximumChargesChanged_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F19C0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29RushChargesHandlerComponent::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.OnKillerSet"));
		
		UK29RushChargesHandlerComponent_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0F00
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.GetPercentageRemainingUntilNextCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK29RushChargesHandlerComponent::GetPercentageRemainingUntilNextCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.GetPercentageRemainingUntilNextCharge"));
		
		UK29RushChargesHandlerComponent_GetPercentageRemainingUntilNextCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0EA0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.GetMaximumCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK29RushChargesHandlerComponent::GetMaximumCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.GetMaximumCharges"));
		
		UK29RushChargesHandlerComponent_GetMaximumCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0E10
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.GetAvailableCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK29RushChargesHandlerComponent::GetAvailableCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.GetAvailableCharges"));
		
		UK29RushChargesHandlerComponent_GetAvailableCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnRushChargeAdded
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargesHandlerComponent::Cosmetic_OnRushChargeAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnRushChargeAdded"));
		
		UK29RushChargesHandlerComponent_Cosmetic_OnRushChargeAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnOutOfRushCharges
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29RushChargesHandlerComponent::Cosmetic_OnOutOfRushCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.Cosmetic_OnOutOfRushCharges"));
		
		UK29RushChargesHandlerComponent_Cosmetic_OnOutOfRushCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0DB0
	 * 		Name   -> Function TheK29.K29RushChargesHandlerComponent.AddSingleCharge
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29RushChargesHandlerComponent::AddSingleCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushChargesHandlerComponent.AddSingleCharge"));
		
		UK29RushChargesHandlerComponent_AddSingleCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29RushChargesHandlerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29RushChargesHandlerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29RushChargesHandlerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1D20
	 * 		Name   -> Function TheK29.K29RushCooldownInteraction.ResetCameraInputLimit
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UK29RushCooldownInteraction::ResetCameraInputLimit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29RushCooldownInteraction.ResetCameraInputLimit"));
		
		UK29RushCooldownInteraction_ResetCameraInputLimit_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29RushCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29RushCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29RushCooldownInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1D40
	 * 		Name   -> Function TheK29.K29SurvivorAnimInstance.ResetHasBeenThrown
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK29SurvivorAnimInstance::ResetHasBeenThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorAnimInstance.ResetHasBeenThrown"));
		
		UK29SurvivorAnimInstance_ResetHasBeenThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F17B0
	 * 		Name   -> Function TheK29.K29SurvivorAnimInstance.OnHasBeenThrown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29SurvivorAnimInstance::OnHasBeenThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorAnimInstance.OnHasBeenThrown"));
		
		UK29SurvivorAnimInstance_OnHasBeenThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1680
	 * 		Name   -> Function TheK29.K29SurvivorAnimInstance.OnGameEventReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorAnimInstance::OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorAnimInstance.OnGameEventReceived"));
		
		UK29SurvivorAnimInstance_OnGameEventReceived_Params params {};
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
	 * 		Name   -> PredefinedFunction UK29SurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29SurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29SurvivorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1C10
	 * 		Name   -> Function TheK29.K29SurvivorCarriableComponent.OnRep_OwningSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29SurvivorCarriableComponent::OnRep_OwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCarriableComponent.OnRep_OwningSurvivor"));
		
		UK29SurvivorCarriableComponent_OnRep_OwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1A50
	 * 		Name   -> Function TheK29.K29SurvivorCarriableComponent.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorCarriableComponent::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCarriableComponent.OnKillerSet"));
		
		UK29SurvivorCarriableComponent_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0F60
	 * 		Name   -> Function TheK29.K29SurvivorCarriableComponent.IsBeingCarriedByK29RushOrMarkedForThrow
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	bool UK29SurvivorCarriableComponent::IsBeingCarriedByK29RushOrMarkedForThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCarriableComponent.IsBeingCarriedByK29RushOrMarkedForThrow"));
		
		UK29SurvivorCarriableComponent_IsBeingCarriedByK29RushOrMarkedForThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0DF0
	 * 		Name   -> Function TheK29.K29SurvivorCarriableComponent.EnableCollision
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UK29SurvivorCarriableComponent::EnableCollision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCarriableComponent.EnableCollision"));
		
		UK29SurvivorCarriableComponent_EnableCollision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29SurvivorCarriableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29SurvivorCarriableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29SurvivorCarriableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1C70
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorGrabbed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::OnSurvivorGrabbed(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.OnSurvivorGrabbed"));
		
		AK29SurvivorCosmeticHelperActor_OnSurvivorGrabbed_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1B80
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.OnOwnerLocallyObserved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               locallyObserved                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::OnOwnerLocallyObserved(bool locallyObserved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.OnOwnerLocallyObserved"));
		
		AK29SurvivorCosmeticHelperActor_OnOwnerLocallyObserved_Params params {};
		params.locallyObserved = locallyObserved;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1AE0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK29SurvivorCosmeticHelperActor::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.OnLevelReadyToPlay"));
		
		AK29SurvivorCosmeticHelperActor_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F18A0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionRemovalCollectableUsed
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::OnInfectionRemovalCollectableUsed(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionRemovalCollectableUsed"));
		
		AK29SurvivorCosmeticHelperActor_OnInfectionRemovalCollectableUsed_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F17D0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionLevelsChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               targetSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::OnInfectionLevelsChanged(class ACamperPlayer* targetSurvivor, bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.OnInfectionLevelsChanged"));
		
		AK29SurvivorCosmeticHelperActor_OnInfectionLevelsChanged_Params params {};
		params.targetSurvivor = targetSurvivor;
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F1020
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionIncubated
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK29SurvivorCosmeticHelperActor::IsInfectionIncubated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionIncubated"));
		
		AK29SurvivorCosmeticHelperActor_IsInfectionIncubated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0FF0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionCritical
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK29SurvivorCosmeticHelperActor::IsInfectionCritical()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionCritical"));
		
		AK29SurvivorCosmeticHelperActor_IsInfectionCritical_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0FC0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionActive
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK29SurvivorCosmeticHelperActor::IsInfectionActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.IsInfectionActive"));
		
		AK29SurvivorCosmeticHelperActor_IsInfectionActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0F90
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.IsInfected
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK29SurvivorCosmeticHelperActor::IsInfected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.IsInfected"));
		
		AK29SurvivorCosmeticHelperActor_IsInfected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0ED0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.GetMaximumInfectionLevels
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AK29SurvivorCosmeticHelperActor::GetMaximumInfectionLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.GetMaximumInfectionLevels"));
		
		AK29SurvivorCosmeticHelperActor_GetMaximumInfectionLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0E70
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionPercentage
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float AK29SurvivorCosmeticHelperActor::GetCurrentInfectionPercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionPercentage"));
		
		AK29SurvivorCosmeticHelperActor_GetCurrentInfectionPercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F0E40
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionLevels
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AK29SurvivorCosmeticHelperActor::GetCurrentInfectionLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.GetCurrentInfectionLevels"));
		
		AK29SurvivorCosmeticHelperActor_GetCurrentInfectionLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorHitCollisionWithRush
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_OnOwningSurvivorHitCollisionWithRush()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorHitCollisionWithRush"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorHitCollisionWithRush_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorDied
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_OnOwningSurvivorDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnOwningSurvivorDied"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_OnOwningSurvivorDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnLocallyObservedChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionRemovalCollectableUsed
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_OnInfectionRemovalCollectableUsed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionRemovalCollectableUsed"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_OnInfectionRemovalCollectableUsed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionLevelsChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_OnInfectionLevelsChanged(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_OnInfectionLevelsChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_OnInfectionLevelsChanged_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionIncubatedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInfectionIncubated                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_IsInfectionIncubatedChanged(bool IsInfectionIncubated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionIncubatedChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectionIncubatedChanged_Params params {};
		params.IsInfectionIncubated = IsInfectionIncubated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionCriticalChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInfectionCritical                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_IsInfectionCriticalChanged(bool IsInfectionCritical)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectionCriticalChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectionCriticalChanged_Params params {};
		params.IsInfectionCritical = IsInfectionCritical;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInfected                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_IsInfectedChanged(bool IsInfected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectedChanged_Params params {};
		params.IsInfected = IsInfected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedActiveChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsInfectionActive                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_IsInfectedActiveChanged(bool IsInfectionActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_IsInfectedActiveChanged"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_IsInfectedActiveChanged_Params params {};
		params.IsInfectionActive = IsInfectionActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_GrabbedByKiller
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK29SurvivorCosmeticHelperActor::Cosmetic_GrabbedByKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorCosmeticHelperActor.Cosmetic_GrabbedByKiller"));
		
		AK29SurvivorCosmeticHelperActor_Cosmetic_GrabbedByKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK29SurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK29SurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29SurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29SurvivorStatusComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29SurvivorStatusComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29SurvivorStatusComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D00CF0
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Server_EndThrow
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UK29SurvivorThrowableComponent::Server_EndThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Server_EndThrow"));
		
		UK29SurvivorThrowableComponent_Server_EndThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4AF0
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Server_CancelThrowOnOtherSurvivorCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     collisionPosition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivorUsedAsCollision                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorThrowableComponent::Server_CancelThrowOnOtherSurvivorCollision(const struct FVector& collisionPosition, class ACamperPlayer* survivorUsedAsCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Server_CancelThrowOnOtherSurvivorCollision"));
		
		UK29SurvivorThrowableComponent_Server_CancelThrowOnOtherSurvivorCollision_Params params {};
		params.collisionPosition = collisionPosition;
		params.survivorUsedAsCollision = survivorUsedAsCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4AD0
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.OnWalkingAllowedAfterFall
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29SurvivorThrowableComponent::OnWalkingAllowedAfterFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.OnWalkingAllowedAfterFall"));
		
		UK29SurvivorThrowableComponent_OnWalkingAllowedAfterFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4AB0
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.OnThrowTimeout
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29SurvivorThrowableComponent::OnThrowTimeout()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.OnThrowTimeout"));
		
		UK29SurvivorThrowableComponent_OnThrowTimeout_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4890
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Multicast_SetCurrentThrow
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		struct FK29GuidedMovementInstance                  throwInstance                                              (Parm, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               thrownSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorThrowableComponent::Multicast_SetCurrentThrow(const struct FK29GuidedMovementInstance& throwInstance, class ACamperPlayer* thrownSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Multicast_SetCurrentThrow"));
		
		UK29SurvivorThrowableComponent_Multicast_SetCurrentThrow_Params params {};
		params.throwInstance = throwInstance;
		params.thrownSurvivor = thrownSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4800
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Multicast_InstantlyLetGoSurvivor
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               hasDealtDamage                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorThrowableComponent::Multicast_InstantlyLetGoSurvivor(bool hasDealtDamage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Multicast_InstantlyLetGoSurvivor"));
		
		UK29SurvivorThrowableComponent_Multicast_InstantlyLetGoSurvivor_Params params {};
		params.hasDealtDamage = hasDealtDamage;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Multicast_EndThrow
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UK29SurvivorThrowableComponent::Multicast_EndThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Multicast_EndThrow"));
		
		UK29SurvivorThrowableComponent_Multicast_EndThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4720
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Multicast_CancelThrowOnOtherSurvivorCollision
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     collisionPosition                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               survivorUsedAsCollision                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorThrowableComponent::Multicast_CancelThrowOnOtherSurvivorCollision(const struct FVector& collisionPosition, class ACamperPlayer* survivorUsedAsCollision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Multicast_CancelThrowOnOtherSurvivorCollision"));
		
		UK29SurvivorThrowableComponent_Multicast_CancelThrowOnOtherSurvivorCollision_Params params {};
		params.collisionPosition = collisionPosition;
		params.survivorUsedAsCollision = survivorUsedAsCollision;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4570
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.EndThrow
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK29SurvivorThrowableComponent::EndThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.EndThrow"));
		
		UK29SurvivorThrowableComponent_EndThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29SurvivorThrowableComponent.Cosmetic_OnSurvivorUsedAsCollision
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK29SurvivorThrowableComponent::Cosmetic_OnSurvivorUsedAsCollision(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29SurvivorThrowableComponent.Cosmetic_OnSurvivorUsedAsCollision"));
		
		UK29SurvivorThrowableComponent_Cosmetic_OnSurvivorUsedAsCollision_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29SurvivorThrowableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29SurvivorThrowableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29SurvivorThrowableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.K29UseInfectionRemoverInteraction.OnSurvivorCured_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UK29UseInfectionRemoverInteraction::OnSurvivorCured_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29UseInfectionRemoverInteraction.OnSurvivorCured_Cosmetic"));
		
		UK29UseInfectionRemoverInteraction_OnSurvivorCured_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B90
	 * 		Name   -> Function TheK29.K29UseInfectionRemoverInteraction.GetInteractionTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UK29UseInfectionRemoverInteraction::GetInteractionTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29UseInfectionRemoverInteraction.GetInteractionTarget"));
		
		UK29UseInfectionRemoverInteraction_GetInteractionTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29UseInfectionRemoverInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29UseInfectionRemoverInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29UseInfectionRemoverInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29UseInfectionRemoverInteractionOther.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29UseInfectionRemoverInteractionOther::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29UseInfectionRemoverInteractionOther"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29UseInfectionRemoverInteractionSelf.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29UseInfectionRemoverInteractionSelf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29UseInfectionRemoverInteractionSelf"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4650
	 * 		Name   -> Function TheK29.K29Utilities.IsSurvivorAbleToBeAffectedByPower
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class AActor*                                      survivorAsActor                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASlasherPlayer*                              killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UK29Utilities::STATIC_IsSurvivorAbleToBeAffectedByPower(class AActor* survivorAsActor, class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Utilities.IsSurvivorAbleToBeAffectedByPower"));
		
		UK29Utilities_IsSurvivorAbleToBeAffectedByPower_Params params {};
		params.survivorAsActor = survivorAsActor;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F45C0
	 * 		Name   -> Function TheK29.K29Utilities.GetK29Power
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AK29Power* UK29Utilities::STATIC_GetK29Power(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.K29Utilities.GetK29Power"));
		
		UK29Utilities_GetK29Power_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK29Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK29Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.K29Utilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReassuranceCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReassuranceCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.ReassuranceCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4A70
	 * 		Name   -> Function TheK29.S32P01.OnRep_IsKillerInRange
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US32P01::OnRep_IsKillerInRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S32P01.OnRep_IsKillerInRange"));
		
		US32P01_OnRep_IsKillerInRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4590
	 * 		Name   -> Function TheK29.S32P01.GetGeneratorRevealRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US32P01::GetGeneratorRevealRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S32P01.GetGeneratorRevealRange"));
		
		US32P01_GetGeneratorRevealRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US32P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US32P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S32P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US32P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US32P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S32P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK29.S32P03.GetActivationTimeForLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US32P03::GetActivationTimeForLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S32P03.GetActivationTimeForLevel"));
		
		US32P03_GetActivationTimeForLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US32P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US32P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S32P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33P01StatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33P01StatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33P01StatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050F4A90
	 * 		Name   -> Function TheK29.S33P02.OnRep_ReassuredSurvivors
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US33P02::OnRep_ReassuredSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S33P02.OnRep_ReassuredSurvivors"));
		
		US33P02_OnRep_ReassuredSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK29.S33P02.Local_EffectTriggered
	 * 		Flags  -> (Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Location                                                   (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void US33P02::Local_EffectTriggered(const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S33P02.Local_EffectTriggered"));
		
		US33P02_Local_EffectTriggered_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33P02Interaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33P02Interaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33P02Interaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33p02StatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33p02StatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33p02StatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050BF270
	 * 		Name   -> Function TheK29.S33P03.GetSkillCheckTriggerPercentPerToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float US33P03::GetSkillCheckTriggerPercentPerToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S33P03.GetSkillCheckTriggerPercentPerToken"));
		
		US33P03_GetSkillCheckTriggerPercentPerToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B88A0
	 * 		Name   -> Function TheK29.S33P03.GetSkillCheckCursorSpeedPerToken
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float US33P03::GetSkillCheckCursorSpeedPerToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S33P03.GetSkillCheckCursorSpeedPerToken"));
		
		US33P03_GetSkillCheckCursorSpeedPerToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C44B0
	 * 		Name   -> Function TheK29.S33P03.GetSkillCheckBonusPercentPerTokenAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float US33P03::GetSkillCheckBonusPercentPerTokenAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK29.S33P03.GetSkillCheckBonusPercentPerTokenAtLevel"));
		
		US33P03_GetSkillCheckBonusPercentPerTokenAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US33P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US33P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK29.S33P03"));
		return ptr;
	}

}


