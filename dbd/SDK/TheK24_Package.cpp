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
	 * 		RVA    -> 0x05003E70
	 * 		Name   -> Function TheK24.ActivateK24PowerInteraction.SetK24Power
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivateK24PowerInteraction::SetK24Power(class AK24Power* K24Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ActivateK24PowerInteraction.SetK24Power"));
		
		UActivateK24PowerInteraction_SetK24Power_Params params {};
		params.K24Power = K24Power;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateK24PowerInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateK24PowerInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ActivateK24PowerInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K24_04.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K24_04::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Addon_K24_04"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K24_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K24_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Addon_K24_19"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_FindCollectable_SupplyCrate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_FindCollectable_SupplyCrate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.AISkill_FindCollectable_SupplyCrate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionUseItem_Serum.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionUseItem_Serum::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.AISkill_InteractionUseItem_Serum"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBiteTheBullet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBiteTheBullet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BiteTheBullet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBiteTheBulletEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBiteTheBulletEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BiteTheBulletEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  trappedGenerator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlastMine::TrapAttachedToGenerator_Cosmetic(class AGenerator* trappedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMine.TrapAttachedToGenerator_Cosmetic"));
		
		UBlastMine_TrapAttachedToGenerator_Cosmetic_Params params {};
		params.trappedGenerator = trappedGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlastMine::ThrowBubbleIndicator_Cosmetic(const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMine.ThrowBubbleIndicator_Cosmetic"));
		
		UBlastMine_ThrowBubbleIndicator_Cosmetic_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003A40
	 * 		Name   -> Function TheK24.BlastMine.Client_TrapActivatedLoudNotification
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, HasDefaults, NetClient)
	 * Parameters:
	 * 		struct FTransform                                  Location                                                   (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UBlastMine::Client_TrapActivatedLoudNotification(const struct FTransform& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMine.Client_TrapActivatedLoudNotification"));
		
		UBlastMine_Client_TrapActivatedLoudNotification_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMine.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMine::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMine"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK24.BlastMineFirecracker.OnTrapRemovedBlueprintEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EBlastMineRemovedReason                            removedReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABlastMineFirecracker::OnTrapRemovedBlueprintEvent__DelegateSignature(EBlastMineRemovedReason removedReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK24.BlastMineFirecracker.OnTrapRemovedBlueprintEvent__DelegateSignature"));
		
		ABlastMineFirecracker_OnTrapRemovedBlueprintEvent__DelegateSignature_Params params {};
		params.removedReason = removedReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003E50
	 * 		Name   -> Function TheK24.BlastMineFirecracker.OnRep_Lifetime
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABlastMineFirecracker::OnRep_Lifetime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineFirecracker.OnRep_Lifetime"));
		
		ABlastMineFirecracker_OnRep_Lifetime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003DF0
	 * 		Name   -> Function TheK24.BlastMineFirecracker.OnRep_AuthorityExplosionCount
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABlastMineFirecracker::OnRep_AuthorityExplosionCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineFirecracker.OnRep_AuthorityExplosionCount"));
		
		ABlastMineFirecracker_OnRep_AuthorityExplosionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003DD0
	 * 		Name   -> Function TheK24.BlastMineFirecracker.OnRep_AuthorityCurrentState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABlastMineFirecracker::OnRep_AuthorityCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineFirecracker.OnRep_AuthorityCurrentState"));
		
		ABlastMineFirecracker_OnRep_AuthorityCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABlastMineFirecracker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABlastMineFirecracker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineFirecracker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003780
	 * 		Name   -> Function TheK24.BlastMineKickSensor.Authority_OnKickChargeablePercentChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PercentCompletionChange                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TotalPercentComplete                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlastMineKickSensor::Authority_OnKickChargeablePercentChanged(class UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineKickSensor.Authority_OnKickChargeablePercentChanged"));
		
		UBlastMineKickSensor_Authority_OnKickChargeablePercentChanged_Params params {};
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
	 * 		Name   -> PredefinedFunction UBlastMineKickSensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineKickSensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineKickSensor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineState_Explode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineState_Explode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineState_Explode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineTransition_ExplodeToHidden.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineTransition_ExplodeToHidden::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineTransition_ExplodeToHidden"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineState_Hidden.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineState_Hidden::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineState_Hidden"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineTransition_HiddenToSpawned.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineTransition_HiddenToSpawned::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineTransition_HiddenToSpawned"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineState_Spawned.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineState_Spawned::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineState_Spawned"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineTransition_SpawnedToExplode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineTransition_SpawnedToExplode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineTransition_SpawnedToExplode"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineTransition_SpawnedToHidden.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineTransition_SpawnedToHidden::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineTransition_SpawnedToHidden"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003BF0
	 * 		Name   -> Function TheK24.BlastMineVisibilityController.IsVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBlastMineVisibilityController::IsVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineVisibilityController.IsVisible"));
		
		UBlastMineVisibilityController_IsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003660
	 * 		Name   -> Function TheK24.BlastMineVisibilityController.AddMeshComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMeshComponent*                              MeshComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlastMineVisibilityController::AddMeshComponent(class UMeshComponent* MeshComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineVisibilityController.AddMeshComponent"));
		
		UBlastMineVisibilityController_AddMeshComponent_Params params {};
		params.MeshComponent = MeshComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050035D0
	 * 		Name   -> Function TheK24.BlastMineVisibilityController.AddFXSystem
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UFXSystemComponent*                          System                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBlastMineVisibilityController::AddFXSystem(class UFXSystemComponent* System)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.BlastMineVisibilityController.AddFXSystem"));
		
		UBlastMineVisibilityController_AddFXSystem_Params params {};
		params.System = System;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlastMineVisibilityController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlastMineVisibilityController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlastMineVisibilityController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlindZombieFlashlightableLightingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlindZombieFlashlightableLightingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BlindZombieFlashlightableLightingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_MoveToAbortIfStuck.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_MoveToAbortIfStuck::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.BTTask_MoveToAbortIfStuck"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChangeZombieStateBTTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChangeZombieStateBTTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ChangeZombieStateBTTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AContaminationSerumCollectable.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AContaminationSerumCollectable::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ContaminationSerumCollectable"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UContaminationSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UContaminationSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ContaminationSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90EB0
	 * 		Name   -> Function TheK24.Counterforce.Multicast_ShowTotemAura
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ATotem*                                      Totem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCounterforce::Multicast_ShowTotemAura(class ATotem* Totem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Counterforce.Multicast_ShowTotemAura"));
		
		UCounterforce_Multicast_ShowTotemAura_Params params {};
		params.Totem = Totem;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCounterforce.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCounterforce::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Counterforce"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_ZombiePatrolAreaPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_ZombiePatrolAreaPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.EnvQueryContext_ZombiePatrolAreaPoint"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD3D0
	 * 		Name   -> Function TheK24.Eruption.Multicast_TriggerPerk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<class AGenerator*>                          explodingGenerators                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEruption::Multicast_TriggerPerk(TArray<class AGenerator*> explodingGenerators)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.Multicast_TriggerPerk"));
		
		UEruption_Multicast_TriggerPerk_Params params {};
		params.explodingGenerators = explodingGenerators;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90E20
	 * 		Name   -> Function TheK24.Eruption.Multicast_HighlightGenerator
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEruption::Multicast_HighlightGenerator(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.Multicast_HighlightGenerator"));
		
		UEruption_Multicast_HighlightGenerator_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.Eruption.MakeSurvivorScreamCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  screamingSurvivor                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEruption::MakeSurvivorScreamCosmetic(class ADBDPlayer* screamingSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.MakeSurvivorScreamCosmetic"));
		
		UEruption_MakeSurvivorScreamCosmetic_Params params {};
		params.screamingSurvivor = screamingSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003BC0
	 * 		Name   -> Function TheK24.Eruption.GetSurvivorImposedStatusEffectDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UEruption::GetSurvivorImposedStatusEffectDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.GetSurvivorImposedStatusEffectDurationAtLevel"));
		
		UEruption_GetSurvivorImposedStatusEffectDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DA9990
	 * 		Name   -> Function TheK24.Eruption.GetScreamRevealLocationDuration
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UEruption::GetScreamRevealLocationDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.GetScreamRevealLocationDuration"));
		
		UEruption_GetScreamRevealLocationDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B30
	 * 		Name   -> Function TheK24.Eruption.GetGeneratorRegressPercentageAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UEruption::GetGeneratorRegressPercentageAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.GetGeneratorRegressPercentageAtLevel"));
		
		UEruption_GetGeneratorRegressPercentageAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  highlightedGenerator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEruption::Cosmetic_OnGeneratorHighlightStart(class AGenerator* highlightedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightStart"));
		
		UEruption_Cosmetic_OnGeneratorHighlightStart_Params params {};
		params.highlightedGenerator = highlightedGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  highlightedGenerator                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEruption::Cosmetic_OnGeneratorHighlightEnd(class AGenerator* highlightedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Eruption.Cosmetic_OnGeneratorHighlightEnd"));
		
		UEruption_Cosmetic_OnGeneratorHighlightEnd_Params params {};
		params.highlightedGenerator = highlightedGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEruption.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEruption::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Eruption"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEruptionIconStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEruptionIconStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.EruptionIconStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003E30
	 * 		Name   -> Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UFlashbang::OnRep_GeneratorsRepairProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Flashbang.OnRep_GeneratorsRepairProgress"));
		
		UFlashbang_OnRep_GeneratorsRepairProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B60
	 * 		Name   -> Function TheK24.Flashbang.GetGeneratorRepairPercentToCraftFlashbangAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UFlashbang::GetGeneratorRepairPercentToCraftFlashbangAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Flashbang.GetGeneratorRepairPercentToCraftFlashbangAtLevel"));
		
		UFlashbang_GetGeneratorRepairPercentToCraftFlashbangAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UFlashbang::Cosmetic_OnGeneratorRepairProgressionTargetAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Flashbang.Cosmetic_OnGeneratorRepairProgressionTargetAchieved"));
		
		UFlashbang_Cosmetic_OnGeneratorRepairProgressionTargetAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA210
	 * 		Name   -> Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved
	 * 		Flags  -> (Final, Net, Native, Event, Private, NetClient)
	 */
	void UFlashbang::Client_OnGeneratorRepairProgressionTargetAchieved()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Flashbang.Client_OnGeneratorRepairProgressionTargetAchieved"));
		
		UFlashbang_Client_OnGeneratorRepairProgressionTargetAchieved_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003890
	 * 		Name   -> Function TheK24.Flashbang.Authority_OnRepairProgressApplied
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              individualChargeAmount                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              totalChargeAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      chargeInstigator                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               wasCoop                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFlashbang::Authority_OnRepairProgressApplied(float individualChargeAmount, float totalChargeAmount, class AActor* chargeInstigator, bool wasCoop, float DeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.Flashbang.Authority_OnRepairProgressApplied"));
		
		UFlashbang_Authority_OnRepairProgressApplied_Params params {};
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
	 * 		Name   -> PredefinedFunction UFlashbang.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFlashbang::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Flashbang"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003E10
	 * 		Name   -> Function TheK24.GeneratorBlastMinePlacerComponent.OnRep_BlastMine
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGeneratorBlastMinePlacerComponent::OnRep_BlastMine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.GeneratorBlastMinePlacerComponent.OnRep_BlastMine"));
		
		UGeneratorBlastMinePlacerComponent_OnRep_BlastMine_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGeneratorBlastMinePlacerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGeneratorBlastMinePlacerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.GeneratorBlastMinePlacerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHysteria.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHysteria::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Hysteria"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHysteriaObliviousEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHysteriaObliviousEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.HysteriaObliviousEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInClosetFlashbangItemCraftInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInClosetFlashbangItemCraftInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.InClosetFlashbangItemCraftInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIncreaseZombiesSpeedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIncreaseZombiesSpeedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.IncreaseZombiesSpeedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UInjectSerumInteraction::OnSurvivorCured_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.InjectSerumInteraction.OnSurvivorCured_Cosmetic"));
		
		UInjectSerumInteraction_OnSurvivorCured_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003D40
	 * 		Name   -> Function TheK24.InjectSerumInteraction.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInjectSerumInteraction::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.InjectSerumInteraction.OnKillerSet"));
		
		UInjectSerumInteraction_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B90
	 * 		Name   -> Function TheK24.InjectSerumInteraction.GetInjectionTarget
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ACamperPlayer* UInjectSerumInteraction::GetInjectionTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.InjectSerumInteraction.GetInjectionTarget"));
		
		UInjectSerumInteraction_GetInjectionTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050036F0
	 * 		Name   -> Function TheK24.InjectSerumInteraction.Authority_CureSurvivor
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               CamperPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInjectSerumInteraction::Authority_CureSurvivor(class ACamperPlayer* CamperPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.InjectSerumInteraction.Authority_CureSurvivor"));
		
		UInjectSerumInteraction_Authority_CureSurvivor_Params params {};
		params.CamperPlayer = CamperPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInjectSerumInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInjectSerumInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.InjectSerumInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInjectSerumOther.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInjectSerumOther::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.InjectSerumOther"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInjectSerumSelf.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInjectSerumSelf::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.InjectSerumSelf"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003CB0
	 * 		Name   -> Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24AnimInstance::OnKillerPowerLevelChanged(int32_t powerlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24AnimInstance.OnKillerPowerLevelChanged"));
		
		UK24AnimInstance_OnKillerPowerLevelChanged_Params params {};
		params.powerlevel = powerlevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24AnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003C20
	 * 		Name   -> Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24CharacterFXComponent::Local_OnKillerPowerLevelChanged(int32_t powerlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CharacterFXComponent.Local_OnKillerPowerLevelChanged"));
		
		UK24CharacterFXComponent_Local_OnKillerPowerLevelChanged_Params params {};
		params.powerlevel = powerlevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24CharacterFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24CharacterFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24CharacterFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D42300
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24CheatComponent::DBD_TeleportZombiesTo(float X, float Y, float Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_TeleportZombiesTo"));
		
		UK24CheatComponent_DBD_TeleportZombiesTo_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24ZombieFall
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Zvalue                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24CheatComponent::DBD_K24ZombieFall(float Zvalue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24ZombieFall"));
		
		UK24CheatComponent_DBD_K24ZombieFall_Params params {};
		params.Zvalue = Zvalue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24StopAllZombies
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK24CheatComponent::DBD_K24StopAllZombies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24StopAllZombies"));
		
		UK24CheatComponent_DBD_K24StopAllZombies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24StartAllZombies
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK24CheatComponent::DBD_K24StartAllZombies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24StartAllZombies"));
		
		UK24CheatComponent_DBD_K24StartAllZombies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007720
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK24CheatComponent::DBD_K24SpawnZombieOnKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24SpawnZombieOnKiller"));
		
		UK24CheatComponent_DBD_K24SpawnZombieOnKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24CheatComponent::DBD_K24SetPowerLevelPoints(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24SetPowerLevelPoints"));
		
		UK24CheatComponent_DBD_K24SetPowerLevelPoints_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2E70
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24CheatComponent::DBD_K24SetContaminationOnSurvivor(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24SetContaminationOnSurvivor"));
		
		UK24CheatComponent_DBD_K24SetContaminationOnSurvivor_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UK24CheatComponent::DBD_K24ComeToMeMyZombies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24CheatComponent.DBD_K24ComeToMeMyZombies"));
		
		UK24CheatComponent_DBD_K24ComeToMeMyZombies_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24CheatComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24CheatComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24CheatComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007C40
	 * 		Name   -> Function TheK24.K24PounceAttack.Server_HitZombie
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AZombieCharacter*                            zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TargetLocationTimestamp                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24PounceAttack::Server_HitZombie(class AZombieCharacter* zombie, float TargetLocationTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24PounceAttack.Server_HitZombie"));
		
		UK24PounceAttack_Server_HitZombie_Params params {};
		params.zombie = zombie;
		params.TargetLocationTimestamp = TargetLocationTimestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24PounceAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24PounceAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24PounceAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.WhipAttackStart_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK24Power::WhipAttackStart_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.WhipAttackStart_Cosmetic"));
		
		AK24Power_WhipAttackStart_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.WhipAttackMove_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isFirstRayCast                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::WhipAttackMove_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation, bool isFirstRayCast)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.WhipAttackMove_Cosmetic"));
		
		AK24Power_WhipAttackMove_Cosmetic_Params params {};
		params.whipStartLocation = whipStartLocation;
		params.whipEndLocation = whipEndLocation;
		params.isFirstRayCast = isFirstRayCast;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.WhipAttackHit_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     impactPointLocation                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isFirstHit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ImpactNormal                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        phyMaterial                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               hitACharacter                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::WhipAttackHit_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& impactPointLocation, const struct FVector& whipEndLocation, bool isFirstHit, const struct FVector& ImpactNormal, const class FName& phyMaterial, bool hitACharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.WhipAttackHit_Cosmetic"));
		
		AK24Power_WhipAttackHit_Cosmetic_Params params {};
		params.whipStartLocation = whipStartLocation;
		params.impactPointLocation = impactPointLocation;
		params.whipEndLocation = whipEndLocation;
		params.isFirstHit = isFirstHit;
		params.ImpactNormal = ImpactNormal;
		params.phyMaterial = phyMaterial;
		params.hitACharacter = hitACharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.WhipAttackEnd_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK24Power::WhipAttackEnd_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.WhipAttackEnd_Cosmetic"));
		
		AK24Power_WhipAttackEnd_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007E80
	 * 		Name   -> Function TheK24.K24Power.Server_PowerDestroyPallet
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Server_PowerDestroyPallet(class APallet* Pallet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Server_PowerDestroyPallet"));
		
		AK24Power_Server_PowerDestroyPallet_Params params {};
		params.Pallet = Pallet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007DF0
	 * 		Name   -> Function TheK24.K24Power.Server_PowerDestroyBreakable
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		class ABreakableBase*                              breakable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Server_PowerDestroyBreakable(class ABreakableBase* breakable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Server_PowerDestroyBreakable"));
		
		AK24Power_Server_PowerDestroyBreakable_Params params {};
		params.breakable = breakable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007D20
	 * 		Name   -> Function TheK24.K24Power.Server_KillAZombie
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		class AZombieCharacter*                            zombie                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttackType                                        attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Server_KillAZombie(class AZombieCharacter* zombie, EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Server_KillAZombie"));
		
		AK24Power_Server_KillAZombie_Params params {};
		params.zombie = zombie;
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.PowerHitStateEnd_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, HasDefaults, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     whipStartLocation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     whipEndLocation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::PowerHitStateEnd_Cosmetic(const struct FVector& whipStartLocation, const struct FVector& whipEndLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.PowerHitStateEnd_Cosmetic"));
		
		AK24Power_PowerHitStateEnd_Cosmetic_Params params {};
		params.whipStartLocation = whipStartLocation;
		params.whipEndLocation = whipEndLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.PowerCooldownEnd_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK24Power::PowerCooldownEnd_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.PowerCooldownEnd_Cosmetic"));
		
		AK24Power_PowerCooldownEnd_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007AB0
	 * 		Name   -> Function TheK24.K24Power.OnRep_PowerLevelPoints
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK24Power::OnRep_PowerLevelPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.OnRep_PowerLevelPoints"));
		
		AK24Power_OnRep_PowerLevelPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.OnPowerStop_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK24Power::OnPowerStop_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.OnPowerStop_Cosmetic"));
		
		AK24Power_OnPowerStop_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.OnPowerStartCharge_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AK24Power::OnPowerStartCharge_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.OnPowerStartCharge_Cosmetic"));
		
		AK24Power_OnPowerStartCharge_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            powerlevel                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::OnPowerLevelChanged_Cosmetic(int32_t powerlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.OnPowerLevelChanged_Cosmetic"));
		
		AK24Power_OnPowerLevelChanged_Cosmetic_Params params {};
		params.powerlevel = powerlevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050078F0
	 * 		Name   -> Function TheK24.K24Power.Multicast_PowerDestroyPallet
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class APallet*                                     Pallet                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Multicast_PowerDestroyPallet(class APallet* Pallet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Multicast_PowerDestroyPallet"));
		
		AK24Power_Multicast_PowerDestroyPallet_Params params {};
		params.Pallet = Pallet;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04619D40
	 * 		Name   -> Function TheK24.K24Power.Multicast_PowerDestroyBreakable
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ABreakableBase*                              breakable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Multicast_PowerDestroyBreakable(class ABreakableBase* breakable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Multicast_PowerDestroyBreakable"));
		
		AK24Power_Multicast_PowerDestroyBreakable_Params params {};
		params.breakable = breakable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050078A0
	 * 		Name   -> Function TheK24.K24Power.IsInPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AK24Power::IsInPower()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.IsInPower"));
		
		AK24Power_IsInPower_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007770
	 * 		Name   -> Function TheK24.K24Power.GetWhipLength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float AK24Power::GetWhipLength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.GetWhipLength"));
		
		AK24Power_GetWhipLength_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007740
	 * 		Name   -> Function TheK24.K24Power.GetPowerLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t AK24Power::GetPowerLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.GetPowerLevel"));
		
		AK24Power_GetPowerLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007430
	 * 		Name   -> Function TheK24.K24Power.Authority_OnSurvivorContaminated
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		EContaminator                                      contaminator                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK24Power::Authority_OnSurvivorContaminated(EContaminator contaminator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24Power.Authority_OnSurvivorContaminated"));
		
		AK24Power_Authority_OnSurvivorContaminated_Params params {};
		params.contaminator = contaminator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK24Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK24Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24Power"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007A30
	 * 		Name   -> Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK24PowerAnimInstance::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24PowerAnimInstance.OnLevelReadyToPlay"));
		
		UK24PowerAnimInstance_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050079A0
	 * 		Name   -> Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24PowerAnimInstance::OnKillerPowerLevelChanged(int32_t powerlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24PowerAnimInstance.OnKillerPowerLevelChanged"));
		
		UK24PowerAnimInstance_OnKillerPowerLevelChanged_Params params {};
		params.powerlevel = powerlevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007980
	 * 		Name   -> Function TheK24.K24PowerAnimInstance.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK24PowerAnimInstance::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24PowerAnimInstance.OnIntroCompleted"));
		
		UK24PowerAnimInstance_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24PowerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24PowerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24PowerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007F10
	 * 		Name   -> Function TheK24.k24PowerCooldownInteraction.SetK24Power
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void Uk24PowerCooldownInteraction::SetK24Power(class AK24Power* K24Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.k24PowerCooldownInteraction.SetK24Power"));
		
		Uk24PowerCooldownInteraction_SetK24Power_Params params {};
		params.K24Power = K24Power;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction Uk24PowerCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* Uk24PowerCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.k24PowerCooldownInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CFC850
	 * 		Name   -> Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AK24Power*                                   K24Power                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24PowerPresentationItemProgressComponent::SetK24Power(class AK24Power* K24Power)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24PowerPresentationItemProgressComponent.SetK24Power"));
		
		UK24PowerPresentationItemProgressComponent_SetK24Power_Params params {};
		params.K24Power = K24Power;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24PowerPresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24PowerPresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24PowerPresentationItemProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24SlashAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24SlashAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24SlashAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E2DAE0
	 * 		Name   -> Function TheK24.K24WhipAttack.Server_HitBreakableOrZombie
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UK24WhipAttack::Server_HitBreakableOrZombie()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24WhipAttack.Server_HitBreakableOrZombie"));
		
		UK24WhipAttack_Server_HitBreakableOrZombie_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007B60
	 * 		Name   -> Function TheK24.K24WhipAttack.Server_ContaminatePlayer
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer)
	 * Parameters:
	 * 		class ACamperPlayer*                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              TargetLocationTimestamp                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24WhipAttack::Server_ContaminatePlayer(class ACamperPlayer* Target, float TargetLocationTimestamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24WhipAttack.Server_ContaminatePlayer"));
		
		UK24WhipAttack_Server_ContaminatePlayer_Params params {};
		params.Target = Target;
		params.TargetLocationTimestamp = TargetLocationTimestamp;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007650
	 * 		Name   -> Function TheK24.K24WhipAttack.Client_ContaminationResult
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsValid                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK24WhipAttack::Client_ContaminationResult(class ADBDPlayer* Target, bool IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.K24WhipAttack.Client_ContaminationResult"));
		
		UK24WhipAttack_Client_ContaminationResult_Params params {};
		params.Target = Target;
		params.IsValid = IsValid;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttackOpenSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttackOpenSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttackOpenSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttackHittingSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttackHittingSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttackHittingSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttackSuccessSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttackSuccessSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttackSuccessSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttackMissSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttackMissSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttackMissSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK24WhipAttackObstructSubstate.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK24WhipAttackObstructSubstate::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.K24WhipAttackObstructSubstate"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA210
	 * 		Name   -> Function TheK24.LethalPursuer.Server_ActivatePerk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void ULethalPursuer::Server_ActivatePerk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.LethalPursuer.Server_ActivatePerk"));
		
		ULethalPursuer_Server_ActivatePerk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050078D0
	 * 		Name   -> Function TheK24.LethalPursuer.Local_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ULethalPursuer::Local_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.LethalPursuer.Local_OnIntroCompleted"));
		
		ULethalPursuer_Local_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK24.LethalPursuer.GetSurvivorRevealDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ULethalPursuer::GetSurvivorRevealDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.LethalPursuer.GetSurvivorRevealDurationAtLevel"));
		
		ULethalPursuer_GetSurvivorRevealDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULethalPursuer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULethalPursuer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.LethalPursuer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResurgence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResurgence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.Resurgence"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007A90
	 * 		Name   -> Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URookieSpirit::OnRep_NumberOfGreatSkillChecksOnGeneratorRepair()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.RookieSpirit.OnRep_NumberOfGreatSkillChecksOnGeneratorRepair"));
		
		URookieSpirit_OnRep_NumberOfGreatSkillChecksOnGeneratorRepair_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050077A0
	 * 		Name   -> Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URookieSpirit::HandleGeneratorIsDamagedChanged(class AGenerator* Generator, class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.RookieSpirit.HandleGeneratorIsDamagedChanged"));
		
		URookieSpirit_HandleGeneratorIsDamagedChanged_Params params {};
		params.Generator = Generator;
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URookieSpirit.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URookieSpirit::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.RookieSpirit"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USerumOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USerumOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.SerumOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USupplyCrateOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USupplyCrateOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.SupplyCrateOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007A70
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorContaminationComponent::OnRep_IsContaminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.OnRep_IsContaminated"));
		
		USurvivorContaminationComponent_OnRep_IsContaminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007A50
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorContaminationComponent::OnRep_InjectSerumInteractions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.OnRep_InjectSerumInteractions"));
		
		USurvivorContaminationComponent_OnRep_InjectSerumInteractions_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void USurvivorContaminationComponent::OnContaminationCured_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.OnContaminationCured_Cosmetic"));
		
		USurvivorContaminationComponent_OnContaminationCured_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void USurvivorContaminationComponent::OnContaminated_SFX_Stinger_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.OnContaminated_SFX_Stinger_Cosmetic"));
		
		USurvivorContaminationComponent_OnContaminated_SFX_Stinger_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EContaminator                                      contaminator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorContaminationComponent::OnContaminated_Cosmetic(EContaminator contaminator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.OnContaminated_Cosmetic"));
		
		USurvivorContaminationComponent_OnContaminated_Cosmetic_Params params {};
		params.contaminator = contaminator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D3E190
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EContaminator                                      contaminator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorContaminationComponent::Multicast_OnContaminated_Cosmetic(EContaminator contaminator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.Multicast_OnContaminated_Cosmetic"));
		
		USurvivorContaminationComponent_Multicast_OnContaminated_Cosmetic_Params params {};
		params.contaminator = contaminator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007870
	 * 		Name   -> Function TheK24.SurvivorContaminationComponent.IsContaminated
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool USurvivorContaminationComponent::IsContaminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.SurvivorContaminationComponent.IsContaminated"));
		
		USurvivorContaminationComponent_IsContaminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorContaminationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorContaminationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.SurvivorContaminationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTheK24Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheK24Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.TheK24Utilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieAcquirePatrolAreaBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieAcquirePatrolAreaBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAcquirePatrolAreaBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieAcquireTargetBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieAcquireTargetBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAcquireTargetBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05007AD0
	 * 		Name   -> Function TheK24.ZombieAIController.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieAIController::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieAIController.OnSlasherSet"));
		
		AZombieAIController_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050074B0
	 * 		Name   -> Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FAIStimulus                                 Stimulus                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AZombieAIController::Authority_OnTargetPerceptionUpdated(class AActor* Actor, const struct FAIStimulus& Stimulus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieAIController.Authority_OnTargetPerceptionUpdated"));
		
		AZombieAIController_Authority_OnTargetPerceptionUpdated_Params params {};
		params.Actor = Actor;
		params.Stimulus = Stimulus;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZombieAIController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZombieAIController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAIController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieAttackSurvivorBTTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieAttackSurvivorBTTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAttackSurvivorBTTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AF80
	 * 		Name   -> Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZombieAttractedByGeneratorBTService::OnInRangeChanged(bool inRange, class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieAttractedByGeneratorBTService.OnInRangeChanged"));
		
		UZombieAttractedByGeneratorBTService_OnInRangeChanged_Params params {};
		params.inRange = inRange;
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieAttractedByGeneratorBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieAttractedByGeneratorBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieAttractedByGeneratorBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieBlindableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieBlindableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieBlindableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieBlindingFXComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieBlindingFXComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieBlindingFXComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::ZombieKilledByKiller_Cosmetic(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.ZombieKilledByKiller_Cosmetic"));
		
		AZombieCharacter_ZombieKilledByKiller_Cosmetic_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::SetCharacterActive_Cosmetic(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.SetCharacterActive_Cosmetic"));
		
		AZombieCharacter_SetCharacterActive_Cosmetic_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EZombieState                                       ZombieState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::OnZombieStateChanged_Cosmetic(EZombieState ZombieState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnZombieStateChanged_Cosmetic"));
		
		AZombieCharacter_OnZombieStateChanged_Cosmetic_Params params {};
		params.ZombieState = ZombieState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500B0F0
	 * 		Name   -> Function TheK24.ZombieCharacter.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnSlasherSet"));
		
		AZombieCharacter_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500B070
	 * 		Name   -> Function TheK24.ZombieCharacter.OnRep_ZombieState
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EZombieState                                       previousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::OnRep_ZombieState(EZombieState previousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnRep_ZombieState"));
		
		AZombieCharacter_OnRep_ZombieState_Params params {};
		params.previousState = previousState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500B050
	 * 		Name   -> Function TheK24.ZombieCharacter.OnRep_ZombieGender
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AZombieCharacter::OnRep_ZombieGender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnRep_ZombieGender"));
		
		AZombieCharacter_OnRep_ZombieGender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AZombieCharacter::OnFemaleGenderSet_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnFemaleGenderSet_Cosmetic"));
		
		AZombieCharacter_OnFemaleGenderSet_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AE20
	 * 		Name   -> Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::OnEndOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnEndOverlapZombieAttackDetector"));
		
		AZombieCharacter_OnEndOverlapZombieAttackDetector_Params params {};
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
	 * 		RVA    -> 0x0500AC00
	 * 		Name   -> Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::OnBeginOverlapZombieAttackDetector(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.OnBeginOverlapZombieAttackDetector"));
		
		AZombieCharacter_OnBeginOverlapZombieAttackDetector_Params params {};
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
	 * 		RVA    -> 0x0500AB80
	 * 		Name   -> Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		EAttackType                                        attackType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::Multicast_ZombieKilledByKillerCosmetic(EAttackType attackType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Multicast_ZombieKilledByKillerCosmetic"));
		
		AZombieCharacter_Multicast_ZombieKilledByKillerCosmetic_Params params {};
		params.attackType = attackType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AB50
	 * 		Name   -> Function TheK24.ZombieCharacter.GetZombieGender
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EZombieGender AZombieCharacter::GetZombieGender()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.GetZombieGender"));
		
		AZombieCharacter_GetZombieGender_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AB30
	 * 		Name   -> Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UOtherCharactersVerticalCollisionsHandler* AZombieCharacter::GetOtherCharactersVerticalCollisionsHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.GetOtherCharactersVerticalCollisionsHandler"));
		
		AZombieCharacter_GetOtherCharactersVerticalCollisionsHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AAF0
	 * 		Name   -> Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UAuthoritativeMovementComponent* AZombieCharacter::GetAuthoritativeMovementComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.GetAuthoritativeMovementComponent"));
		
		AZombieCharacter_GetAuthoritativeMovementComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500AA70
	 * 		Name   -> Function TheK24.ZombieCharacter.GetAudioSwitchState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class FString AZombieCharacter::GetAudioSwitchState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.GetAudioSwitchState"));
		
		AZombieCharacter_GetAudioSwitchState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A9F0
	 * 		Name   -> Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		EZombieState                                       ZombieState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::Authority_OnZombieStateChanged(EZombieState ZombieState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Authority_OnZombieStateChanged"));
		
		AZombieCharacter_Authority_OnZombieStateChanged_Params params {};
		params.ZombieState = ZombieState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A550
	 * 		Name   -> Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::Authority_OnFlashlightRemoved(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Authority_OnFlashlightRemoved"));
		
		AZombieCharacter_Authority_OnFlashlightRemoved_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A4C0
	 * 		Name   -> Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UFlashlightComponent*                        Flashlight                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::Authority_OnFlashlightAdded(class UFlashlightComponent* Flashlight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Authority_OnFlashlightAdded"));
		
		AZombieCharacter_Authority_OnFlashlightAdded_Params params {};
		params.Flashlight = Flashlight;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A420
	 * 		Name   -> Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FFirecrackerEffectData                      effectData                                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void AZombieCharacter::Authority_OnFirecrackerInRangeBegin(const struct FFirecrackerEffectData& effectData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Authority_OnFirecrackerInRangeBegin"));
		
		AZombieCharacter_Authority_OnFirecrackerInRangeBegin_Params params {};
		params.effectData = effectData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A400
	 * 		Name   -> Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AZombieCharacter::Authority_DeactivateZombieAndStartRespawnTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCharacter.Authority_DeactivateZombieAndStartRespawnTimer"));
		
		AZombieCharacter_Authority_DeactivateZombieAndStartRespawnTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZombieCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZombieCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieCharacter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieChaseStateBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieChaseStateBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieChaseStateBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieChaseSurvivorTargetBTTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieChaseSurvivorTargetBTTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieChaseSurvivorTargetBTTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04615570
	 * 		Name   -> Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZombieCustomizationComponent::Multicast_SetZombieCustomization(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieCustomizationComponent.Multicast_SetZombieCustomization"));
		
		UZombieCustomizationComponent_Multicast_SetZombieCustomization_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieCustomizationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieCustomizationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieCustomizationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZombieEscapeDoorPointsActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZombieEscapeDoorPointsActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieEscapeDoorPointsActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieEvaluateEnterChaseBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieEvaluateEnterChaseBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieEvaluateEnterChaseBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieEvaluteEnterAttackBTService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieEvaluteEnterAttackBTService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieEvaluteEnterAttackBTService"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A8E0
	 * 		Name   -> Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACharacter*                                  Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMovementMode                                      PrevMovementMode                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PreviousCustomMode                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZombieFallDetectorComponent::Authority_OnMovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieFallDetectorComponent.Authority_OnMovementModeChange"));
		
		UZombieFallDetectorComponent_Authority_OnMovementModeChange_Params params {};
		params.Character = Character;
		params.PrevMovementMode = PrevMovementMode;
		params.PreviousCustomMode = PreviousCustomMode;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieFallDetectorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieFallDetectorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieFallDetectorComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A600
	 * 		Name   -> Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		int32_t                                            powerlevel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZombieResurrector::Authority_OnKillerPowerLevelChanged(int32_t powerlevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombieResurrector.Authority_OnKillerPowerLevelChanged"));
		
		UZombieResurrector_Authority_OnKillerPowerLevelChanged_Params params {};
		params.powerlevel = powerlevel;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieResurrector.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieResurrector::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieResurrector"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieRotateTowardsTargetBTTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieRotateTowardsTargetBTTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieRotateTowardsTargetBTTask"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A690
	 * 		Name   -> Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered
	 * 		Flags  -> (Final, Native, Private, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		class AActor*                                      originator                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      instigatingActor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               shouldTrack                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              audibleRange                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isQuickAction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isDeceivingNoise                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UZombiesInterestEventManager::Authority_OnLoudNoiseTriggered(class AActor* originator, class AActor* instigatingActor, const struct FVector& Location, bool shouldTrack, float* audibleRange, bool isQuickAction, bool isDeceivingNoise)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombiesInterestEventManager.Authority_OnLoudNoiseTriggered"));
		
		UZombiesInterestEventManager_Authority_OnLoudNoiseTriggered_Params params {};
		params.originator = originator;
		params.instigatingActor = instigatingActor;
		params.Location = Location;
		params.shouldTrack = shouldTrack;
		params.isQuickAction = isQuickAction;
		params.isDeceivingNoise = isDeceivingNoise;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (audibleRange != nullptr)
			*audibleRange = params.audibleRange;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombiesInterestEventManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombiesInterestEventManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombiesInterestEventManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0500A5E0
	 * 		Name   -> Function TheK24.ZombiesManagement.Authority_OnIntroComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AZombiesManagement::Authority_OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK24.ZombiesManagement.Authority_OnIntroComplete"));
		
		AZombiesManagement_Authority_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AZombiesManagement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AZombiesManagement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombiesManagement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombiesPatrolAreaManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombiesPatrolAreaManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombiesPatrolAreaManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UZombieStunnableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UZombieStunnableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK24.ZombieStunnableComponent"));
		return ptr;
	}

}


