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
	 * 		Name   -> PredefinedFunction UBaseLockerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseLockerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.BaseLockerInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A9A0
	 * 		Name   -> Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UStalkerComponent* UBaseStalkModeInteraction::GetStalkerComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.BaseStalkModeInteraction.GetStalkerComponent"));
		
		UBaseStalkModeInteraction_GetStalkerComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A630
	 * 		Name   -> Function DBDInteraction.BaseStalkModeInteraction.CanStalk
	 * 		Flags  -> (Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBaseStalkModeInteraction::CanStalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.BaseStalkModeInteraction.CanStalk"));
		
		UBaseStalkModeInteraction_CanStalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseStalkModeInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseStalkModeInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.BaseStalkModeInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ADB0
	 * 		Name   -> Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBasicChargeableInteraction::OnRep_SpawnedChargeable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.BasicChargeableInteraction.OnRep_SpawnedChargeable"));
		
		UBasicChargeableInteraction_OnRep_SpawnedChargeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicChargeableInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicChargeableInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.BasicChargeableInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AA00
	 * 		Name   -> Function DBDInteraction.BlessTotem.GetTotem
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATotem* UBlessTotem::GetTotem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.BlessTotem.GetTotem"));
		
		UBlessTotem_GetTotem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlessTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlessTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.BlessTotem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCleanseTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCleanseTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.CleanseTotem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A8E0
	 * 		Name   -> Function DBDInteraction.CollectItemInteraction.GetItem
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACollectable* UCollectItemInteraction::GetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.CollectItemInteraction.GetItem"));
		
		UCollectItemInteraction_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.CollectItemInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectItemFromSearchableInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemFromSearchableInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.CollectItemFromSearchableInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCollectItemInCrateInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCollectItemInCrateInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.CollectItemInCrateInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A910
	 * 		Name   -> Function DBDInteraction.DropItemInteraction.GetItem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACollectable* UDropItemInteraction::GetItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.DropItemInteraction.GetItem"));
		
		UDropItemInteraction_GetItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDropItemInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDropItemInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.DropItemInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEscapeMapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEscapeMapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.EscapeMapInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A560
	 * 		Name   -> Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  damageBy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorDamageInteraction::Authority_DamageGenerator(class ADBDPlayer* damageBy, class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorDamageInteraction.Authority_DamageGenerator"));
		
		UGeneratorDamageInteraction_Authority_DamageGenerator_Params params {};
		params.damageBy = damageBy;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorDamageInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorDamageInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.GeneratorDamageInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ADD0
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               obstructed                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGeneratorRepairInteraction::SetIsObstructed(bool obstructed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.SetIsObstructed"));
		
		UGeneratorRepairInteraction_SetIsObstructed_Params params {};
		params.obstructed = obstructed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AC80
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.IsObstructed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGeneratorRepairInteraction::IsObstructed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.IsObstructed"));
		
		UGeneratorRepairInteraction_IsObstructed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ABE0
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.IsInteractionPossibleInternal
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeneratorRepairInteraction::IsInteractionPossibleInternal(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.IsInteractionPossibleInternal"));
		
		UGeneratorRepairInteraction_IsInteractionPossibleInternal_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ABB0
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.IsBeingRepaired
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool UGeneratorRepairInteraction::IsBeingRepaired()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.IsBeingRepaired"));
		
		UGeneratorRepairInteraction_IsBeingRepaired_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A970
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AGenerator* UGeneratorRepairInteraction::GetOwningGenerator()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.GetOwningGenerator"));
		
		UGeneratorRepairInteraction_GetOwningGenerator_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A7C0
	 * 		Name   -> Function DBDInteraction.GeneratorRepairInteraction.GetInteractionChargeSpeedMultiplier_Implementation
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Character                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGeneratorRepairInteraction::GetInteractionChargeSpeedMultiplier_Implementation(class ADBDPlayer* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorRepairInteraction.GetInteractionChargeSpeedMultiplier_Implementation"));
		
		UGeneratorRepairInteraction_GetInteractionChargeSpeedMultiplier_Implementation_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorRepairInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorRepairInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.GeneratorRepairInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AA90
	 * 		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGeneratorToolboxRepairInteraction::HasChargedToolBox(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorToolboxRepairInteraction.HasChargedToolBox"));
		
		UGeneratorToolboxRepairInteraction_HasChargedToolBox_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A860
	 * 		Name   -> Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString UGeneratorToolboxRepairInteraction::GetInteractionTextWhenEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.GeneratorToolboxRepairInteraction.GetInteractionTextWhenEmpty"));
		
		UGeneratorToolboxRepairInteraction_GetInteractionTextWhenEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorToolboxRepairInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorToolboxRepairInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.GeneratorToolboxRepairInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A9D0
	 * 		Name   -> Function DBDInteraction.HealInteraction.GetTargetSurvivor
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UHealInteraction::GetTargetSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.HealInteraction.GetTargetSurvivor"));
		
		UHealInteraction_GetTargetSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function DBDInteraction.HealInteraction.Authority_OnChargeApplied
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHealInteraction::Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.HealInteraction.Authority_OnChargeApplied"));
		
		UHealInteraction_Authority_OnChargeApplied_Params params {};
		params.individualChargeAmount = individualChargeAmount;
		params.totalChargeAmount = totalChargeAmount;
		params.chargeInstigator = chargeInstigator;
		params.wasCoop = wasCoop;
		params.DeltaTime = DeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.HealInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A940
	 * 		Name   -> Function DBDInteraction.HookSurvivorDefinition.GetMeatHook
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class AMeatHook* UHookSurvivorDefinition::GetMeatHook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.HookSurvivorDefinition.GetMeatHook"));
		
		UHookSurvivorDefinition_GetMeatHook_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHookSurvivorDefinition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHookSurvivorDefinition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.HookSurvivorDefinition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemCraftInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemCraftInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.ItemCraftInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ACB0
	 * 		Name   -> Function DBDInteraction.LinkedVomitInteraction.IsVomiting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ULinkedVomitInteraction::IsVomiting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.LinkedVomitInteraction.IsVomiting"));
		
		ULinkedVomitInteraction_IsVomiting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AA30
	 * 		Name   -> Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UVomitStateComponent* ULinkedVomitInteraction::GetVomitStateComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.LinkedVomitInteraction.GetVomitStateComponent"));
		
		ULinkedVomitInteraction_GetVomitStateComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULinkedVomitInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULinkedVomitInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.LinkedVomitInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULockerFakeEnterInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULockerFakeEnterInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.LockerFakeEnterInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A730
	 * 		Name   -> Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USearchChestInteractionBase::FireChestScoreEvent(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.SearchChestInteractionBase.FireChestScoreEvent"));
		
		USearchChestInteractionBase_FireChestScoreEvent_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USearchChestInteractionBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchChestInteractionBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SearchChestInteractionBase"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463A660
	 * 		Name   -> Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable)
	 * Parameters:
	 * 		class ACollectable*                                Collectable                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOpenChestInteraction::CollectItemIfEmptyHanded(class ACollectable* Collectable, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.OpenChestInteraction.CollectItemIfEmptyHanded"));
		
		UOpenChestInteraction_CollectItemIfEmptyHanded_Params params {};
		params.Collectable = Collectable;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenChestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenChestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.OpenChestInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOpenHatchInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOpenHatchInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.OpenHatchInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPalletPullUpInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPalletPullUpInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.PalletPullUpInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USacrificeSurvivorInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USacrificeSurvivorInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SacrificeSurvivorInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USearchOpenedChestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USearchOpenedChestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SearchOpenedChestInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USelfUnhook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USelfUnhook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SelfUnhook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetTrapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetTrapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SetTrapInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USnuffTotem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USnuffTotem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.SnuffTotem"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AB30
	 * 		Name   -> Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UThrowInteraction::InitThrowCancellationExitTime(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.ThrowInteraction.InitThrowCancellationExitTime"));
		
		UThrowInteraction_InitThrowCancellationExitTime_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463AA60
	 * 		Name   -> Function DBDInteraction.ThrowInteraction.HasCancelledThrow
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UThrowInteraction::HasCancelledThrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.ThrowInteraction.HasCancelledThrow"));
		
		UThrowInteraction_HasCancelledThrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThrowInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.ThrowInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnhook.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhook::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.Unhook"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0463ACE0
	 * 		Name   -> Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class UUnhook*                                     unhookInteraction                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               playerBeingUnhooked                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnhookReplicationComponent::Multicast_SetPlayerBeingUnhooked(class UUnhook* unhookInteraction, class ACamperPlayer* playerBeingUnhooked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDInteraction.UnhookReplicationComponent.Multicast_SetPlayerBeingUnhooked"));
		
		UUnhookReplicationComponent_Multicast_SetPlayerBeingUnhooked_Params params {};
		params.unhookInteraction = unhookInteraction;
		params.playerBeingUnhooked = playerBeingUnhooked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnhookReplicationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnhookReplicationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDInteraction.UnhookReplicationComponent"));
		return ptr;
	}

}


