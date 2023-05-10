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
	 * 		Name   -> PredefinedFunction UK31DroneBaseAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneBaseAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneBaseAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneChangeStateAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneChangeStateAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneChangeStateAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivateK31DroneAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivateK31DroneAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.ActivateK31DroneAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActiveDroneZoneLingeringEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveDroneZoneLingeringEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.ActiveDroneZoneLingeringEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K31Power_01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K31Power_02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K31Power_03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051781A0
	 * 		Name   -> Function TheK31.Addon_K31Power_19.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K31Power_19::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.Addon_K31Power_19.Authority_OnLevelReadyToPlay"));
		
		UAddon_K31Power_19_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K31Power_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_19"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K31Power_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_20"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178C40
	 * 		Name   -> Function TheK31.Addon_K31Power_21.OnRep_TargetDrone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K31Power_21::OnRep_TargetDrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.Addon_K31Power_21.OnRep_TargetDrone"));
		
		UAddon_K31Power_21_OnRep_TargetDrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178540
	 * 		Name   -> Function TheK31.Addon_K31Power_21.Authority_OnTerrorRadiusLifetimeTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K31Power_21::Authority_OnTerrorRadiusLifetimeTimerDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.Addon_K31Power_21.Authority_OnTerrorRadiusLifetimeTimerDone"));
		
		UAddon_K31Power_21_Authority_OnTerrorRadiusLifetimeTimerDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05177D10
	 * 		Name   -> Function TheK31.Addon_K31Power_21.Authority_OnGameEventReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UAddon_K31Power_21::Authority_OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.Addon_K31Power_21.Authority_OnGameEventReceived"));
		
		UAddon_K31Power_21_Authority_OnGameEventReceived_Params params {};
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
	 * 		Name   -> PredefinedFunction UAddon_K31Power_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K31Power_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.Addon_K31Power_21"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeployDroneInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeployDroneInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.DeployDroneInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDronePoolInitializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDronePoolInitializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.DronePoolInitializer"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178A60
	 * 		Name   -> Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneEndPlay
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EEndPlayReason                                     EndPlayReason                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDroneRestrictedPlacementAreaStrategy::OnDroneEndPlay(class AActor* Actor, EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneEndPlay"));
		
		UDroneRestrictedPlacementAreaStrategy_OnDroneEndPlay_Params params {};
		params.Actor = Actor;
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051789D0
	 * 		Name   -> Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneAcquiredChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDroneRestrictedPlacementAreaStrategy::OnDroneAcquiredChanged(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.DroneRestrictedPlacementAreaStrategy.OnDroneAcquiredChanged"));
		
		UDroneRestrictedPlacementAreaStrategy_OnDroneAcquiredChanged_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDroneRestrictedPlacementAreaStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDroneRestrictedPlacementAreaStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.DroneRestrictedPlacementAreaStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHackableDroneState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHackableDroneState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.HackableDroneState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHitPlayerInActiveZoneScoreEmitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitPlayerInActiveZoneScoreEmitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.HitPlayerInActiveZoneScoreEmitter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178D70
	 * 		Name   -> Function TheK31.InspectK31DroneInteraction.Server_SetIsPressingInput
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isPressing                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInspectK31DroneInteraction::Server_SetIsPressingInput(bool isPressing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.InspectK31DroneInteraction.Server_SetIsPressingInput"));
		
		UInspectK31DroneInteraction_Server_SetIsPressingInput_Params params {};
		params.isPressing = isPressing;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051788D0
	 * 		Name   -> Function TheK31.InspectK31DroneInteraction.OnChargeCompletedChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInspectK31DroneInteraction::OnChargeCompletedChanged(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.InspectK31DroneInteraction.OnChargeCompletedChanged"));
		
		UInspectK31DroneInteraction_OnChargeCompletedChanged_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInspectK31DroneInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInspectK31DroneInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.InspectK31DroneInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31AnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31AnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31AnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178CA0
	 * 		Name   -> Function TheK31.K31AnimInstance.ResetIsReceivingADronePassively
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31AnimInstance::ResetIsReceivingADronePassively()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.ResetIsReceivingADronePassively"));
		
		UK31AnimInstance_ResetIsReceivingADronePassively_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178C80
	 * 		Name   -> Function TheK31.K31AnimInstance.ResetIsRecallingADrone
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31AnimInstance::ResetIsRecallingADrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.ResetIsRecallingADrone"));
		
		UK31AnimInstance_ResetIsRecallingADrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178C60
	 * 		Name   -> Function TheK31.K31AnimInstance.ResetIsDeployingADrone
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31AnimInstance::ResetIsDeployingADrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.ResetIsDeployingADrone"));
		
		UK31AnimInstance_ResetIsDeployingADrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050EDD90
	 * 		Name   -> Function TheK31.K31AnimInstance.ResetIsActivatingADrone
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31AnimInstance::ResetIsActivatingADrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.ResetIsActivatingADrone"));
		
		UK31AnimInstance_ResetIsActivatingADrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178B30
	 * 		Name   -> Function TheK31.K31AnimInstance.OnGameEventReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31AnimInstance::OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.OnGameEventReceived"));
		
		UK31AnimInstance_OnGameEventReceived_Params params {};
		params.GameplayTag = GameplayTag;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31AnimInstance.OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31AnimInstance::OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.OnCustomizationAnimationMappingIDChanged"));
		
		UK31AnimInstance_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051786A0
	 * 		Name   -> Function TheK31.K31AnimInstance.GetCustomizationMappingID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK31AnimInstance::GetCustomizationMappingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.GetCustomizationMappingID"));
		
		UK31AnimInstance_GetCustomizationMappingID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178620
	 * 		Name   -> Function TheK31.K31AnimInstance.GetCustoAnimTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UK31AnimInstance::GetCustoAnimTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31AnimInstance.GetCustoAnimTags"));
		
		UK31AnimInstance_GetCustoAnimTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31AnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31AnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31AnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051788B0
	 * 		Name   -> Function TheK31.K31ClawTrap.OnAnimNotifyManuallyRemoveTrap
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AK31ClawTrap::OnAnimNotifyManuallyRemoveTrap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.OnAnimNotifyManuallyRemoveTrap"));
		
		AK31ClawTrap_OnAnimNotifyManuallyRemoveTrap_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31ClawTrap.Cosmetic_Spark
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK31ClawTrap::Cosmetic_Spark()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.Cosmetic_Spark"));
		
		AK31ClawTrap_Cosmetic_Spark_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31ClawTrap.Cosmetic_OnTrapRemoved
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasRemovedAutomatically                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31ClawTrap::Cosmetic_OnTrapRemoved(bool wasRemovedAutomatically)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.Cosmetic_OnTrapRemoved"));
		
		AK31ClawTrap_Cosmetic_OnTrapRemoved_Params params {};
		params.wasRemovedAutomatically = wasRemovedAutomatically;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31ClawTrap.Cosmetic_OnTrapAdded
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AK31ClawTrap::Cosmetic_OnTrapAdded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.Cosmetic_OnTrapAdded"));
		
		AK31ClawTrap_Cosmetic_OnTrapAdded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31ClawTrap.Cosmetic_OnIsBroadcastingChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBroadcasting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31ClawTrap::Cosmetic_OnIsBroadcastingChanged(bool isBroadcasting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.Cosmetic_OnIsBroadcastingChanged"));
		
		AK31ClawTrap_Cosmetic_OnIsBroadcastingChanged_Params params {};
		params.isBroadcasting = isBroadcasting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31ClawTrap.Cosmetic_OnBatteryChargeUpdated
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              newCharge                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31ClawTrap::Cosmetic_OnBatteryChargeUpdated(float newCharge)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31ClawTrap.Cosmetic_OnBatteryChargeUpdated"));
		
		AK31ClawTrap_Cosmetic_OnBatteryChargeUpdated_Params params {};
		params.newCharge = newCharge;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK31ClawTrap.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK31ClawTrap::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31ClawTrap"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178820
	 * 		Name   -> Function TheK31.K31Drone.OnAcquiredChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               acquired                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31Drone::OnAcquiredChanged(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Drone.OnAcquiredChanged"));
		
		AK31Drone_OnAcquiredChanged_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178800
	 * 		Name   -> Function TheK31.K31Drone.Native_OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK31Drone::Native_OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Drone.Native_OnLocallyObservedChanged"));
		
		AK31Drone_Native_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31Drone.Cosmetic_OnRevertToScoutingCurrentChargeChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              chargePercentage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31Drone::Cosmetic_OnRevertToScoutingCurrentChargeChanged(float chargePercentage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Drone.Cosmetic_OnRevertToScoutingCurrentChargeChanged"));
		
		AK31Drone_Cosmetic_OnRevertToScoutingCurrentChargeChanged_Params params {};
		params.chargePercentage = chargePercentage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31Drone.Cosmetic_OnLocallyObservedChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AK31Drone::Cosmetic_OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Drone.Cosmetic_OnLocallyObservedChanged"));
		
		AK31Drone_Cosmetic_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31Drone.Cosmetic_OnIsHackableStateChanged
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHackable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31Drone::Cosmetic_OnIsHackableStateChanged(bool IsHackable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Drone.Cosmetic_OnIsHackableStateChanged"));
		
		AK31Drone_Cosmetic_OnIsHackableStateChanged_Params params {};
		params.IsHackable = IsHackable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK31Drone.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK31Drone::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31Drone"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178CC0
	 * 		Name   -> Function TheK31.K31DroneActionProcessor.Server_RequestAction
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
	 * Parameters:
	 * 		struct FK31DroneActionRequest                      Request                                                    (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31DroneActionProcessor::Server_RequestAction(const struct FK31DroneActionRequest& Request)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneActionProcessor.Server_RequestAction"));
		
		UK31DroneActionProcessor_Server_RequestAction_Params params {};
		params.Request = Request;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178560
	 * 		Name   -> Function TheK31.K31DroneActionProcessor.Client_ReceiveActionResponse
	 * 		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		struct FK31DroneActionResponse                     Response                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31DroneActionProcessor::Client_ReceiveActionResponse(const struct FK31DroneActionResponse& Response)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneActionProcessor.Client_ReceiveActionResponse"));
		
		UK31DroneActionProcessor_Client_ReceiveActionResponse_Params params {};
		params.Response = Response;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneActionProcessor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneActionProcessor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneActionProcessor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178700
	 * 		Name   -> Function TheK31.K31DroneActiveState.GetRevertToScoutingMaxCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UK31DroneActiveState::GetRevertToScoutingMaxCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneActiveState.GetRevertToScoutingMaxCharge"));
		
		UK31DroneActiveState_GetRevertToScoutingMaxCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051786D0
	 * 		Name   -> Function TheK31.K31DroneActiveState.GetRevertToScoutingCurrentCharge
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	float UK31DroneActiveState::GetRevertToScoutingCurrentCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneActiveState.GetRevertToScoutingCurrentCharge"));
		
		UK31DroneActiveState_GetRevertToScoutingCurrentCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05177CF0
	 * 		Name   -> Function TheK31.K31DroneActiveState.Authority_OnChargeDepleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31DroneActiveState::Authority_OnChargeDepleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneActiveState.Authority_OnChargeDepleted"));
		
		UK31DroneActiveState_Authority_OnChargeDepleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneActiveState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneActiveState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneActiveState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneBeingDeployed.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneBeingDeployed::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneBeingDeployed"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneBeingHackedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneBeingHackedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneBeingHackedState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneDangerPredictionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneDangerPredictionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneDangerPredictionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneDebugComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneDebugComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneDebugComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneDestroyedState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneDestroyedState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneDestroyedState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneFlightController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneFlightController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneFlightController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05178730
	 * 		Name   -> Function TheK31.K31DroneHackableAvoidanceSensor.Init
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         killerPrimitive                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         survivorPrimitive                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneHackableAvoidanceSensor::Init(class UPrimitiveComponent* killerPrimitive, class UPrimitiveComponent* survivorPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableAvoidanceSensor.Init"));
		
		UK31DroneHackableAvoidanceSensor_Init_Params params {};
		params.killerPrimitive = killerPrimitive;
		params.survivorPrimitive = survivorPrimitive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051783E0
	 * 		Name   -> Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneHackableAvoidanceSensor::Authority_OnSurvivorCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionEnd"));
		
		UK31DroneHackableAvoidanceSensor_Authority_OnSurvivorCollisionEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
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
	 * 		RVA    -> 0x051781C0
	 * 		Name   -> Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UK31DroneHackableAvoidanceSensor::Authority_OnSurvivorCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnSurvivorCollisionBegin"));
		
		UK31DroneHackableAvoidanceSensor_Authority_OnSurvivorCollisionBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
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
	 * 		RVA    -> 0x05178040
	 * 		Name   -> Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneHackableAvoidanceSensor::Authority_OnKillerCollisionEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionEnd"));
		
		UK31DroneHackableAvoidanceSensor_Authority_OnKillerCollisionEnd_Params params {};
		params.OverlappedComponent = OverlappedComponent;
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
	 * 		RVA    -> 0x05177E20
	 * 		Name   -> Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionBegin
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UK31DroneHackableAvoidanceSensor::Authority_OnKillerCollisionBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableAvoidanceSensor.Authority_OnKillerCollisionBegin"));
		
		UK31DroneHackableAvoidanceSensor_Authority_OnKillerCollisionBegin_Params params {};
		params.OverlappedComponent = OverlappedComponent;
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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneHackableAvoidanceSensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneHackableAvoidanceSensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneHackableAvoidanceSensor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C380
	 * 		Name   -> Function TheK31.K31DroneHackableComponent.OnRep_IsHackable
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31DroneHackableComponent::OnRep_IsHackable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableComponent.OnRep_IsHackable"));
		
		UK31DroneHackableComponent_OnRep_IsHackable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0512B2F0
	 * 		Name   -> Function TheK31.K31DroneHackableComponent.IsHackable
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK31DroneHackableComponent::IsHackable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneHackableComponent.IsHackable"));
		
		UK31DroneHackableComponent_IsHackable_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneHackableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneHackableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneHackableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneInitializingState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneInitializingState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneInitializingState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneInStashState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneInStashState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneInStashState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C270
	 * 		Name   -> Function TheK31.K31DroneLaserController.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31DroneLaserController::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserController.OnLocallyObservedChanged"));
		
		UK31DroneLaserController_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneLaserController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneLaserController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneLaserController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C4D0
	 * 		Name   -> Function TheK31.K31DroneLaserScanActor.UpdateLaserScanMeshMaterial
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UMaterialInstance*                           newLaserScanMeshMaterial                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31DroneLaserScanActor::UpdateLaserScanMeshMaterial(class UMaterialInstance* newLaserScanMeshMaterial)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserScanActor.UpdateLaserScanMeshMaterial"));
		
		AK31DroneLaserScanActor_UpdateLaserScanMeshMaterial_Params params {};
		params.newLaserScanMeshMaterial = newLaserScanMeshMaterial;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C4B0
	 * 		Name   -> Function TheK31.K31DroneLaserScanActor.RequestStaticDepthCapturesUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AK31DroneLaserScanActor::RequestStaticDepthCapturesUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserScanActor.RequestStaticDepthCapturesUpdate"));
		
		AK31DroneLaserScanActor_RequestStaticDepthCapturesUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C0C0
	 * 		Name   -> Function TheK31.K31DroneLaserScanActor.InitDroneLaserScan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AK31DroneLaserScanActor::InitDroneLaserScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserScanActor.InitDroneLaserScan"));
		
		AK31DroneLaserScanActor_InitDroneLaserScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517BF00
	 * 		Name   -> Function TheK31.K31DroneLaserScanActor.DeactivateDroneLaserScan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AK31DroneLaserScanActor::DeactivateDroneLaserScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserScanActor.DeactivateDroneLaserScan"));
		
		AK31DroneLaserScanActor_DeactivateDroneLaserScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517BEE0
	 * 		Name   -> Function TheK31.K31DroneLaserScanActor.ActivateDroneLaserScan
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void AK31DroneLaserScanActor::ActivateDroneLaserScan()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneLaserScanActor.ActivateDroneLaserScan"));
		
		AK31DroneLaserScanActor_ActivateDroneLaserScan_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK31DroneLaserScanActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK31DroneLaserScanActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneLaserScanActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C3A0
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.OnRep_ReplicatedMovement
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FDroneRepMovement                           oldRepMovement                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31DroneMovementComponent::OnRep_ReplicatedMovement(const struct FDroneRepMovement& oldRepMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.OnRep_ReplicatedMovement"));
		
		UK31DroneMovementComponent_OnRep_ReplicatedMovement_Params params {};
		params.oldRepMovement = oldRepMovement;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C2B0
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.OnRep_DeployDatum
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FDroneDeployDatum                           oldDeployDatum                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31DroneMovementComponent::OnRep_DeployDatum(const struct FDroneDeployDatum& oldDeployDatum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.OnRep_DeployDatum"));
		
		UK31DroneMovementComponent_OnRep_DeployDatum_Params params {};
		params.oldDeployDatum = oldDeployDatum;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31DroneMovementComponent.OnDeployLocationChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UK31DroneMovementComponent::OnDeployLocationChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31DroneMovementComponent.OnDeployLocationChangedEvent__DelegateSignature"));
		
		UK31DroneMovementComponent_OnDeployLocationChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31DroneMovementComponent.OnAttachToCharacterForDeployChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UK31DroneMovementComponent::OnAttachToCharacterForDeployChangedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31DroneMovementComponent.OnAttachToCharacterForDeployChangedEvent__DelegateSignature"));
		
		UK31DroneMovementComponent_OnAttachToCharacterForDeployChangedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31DroneMovementComponent.OnAccelerationChangedEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms, HasDefaults)
	 * Parameters:
	 * 		struct FVector                                     Acceleration                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneMovementComponent::OnAccelerationChangedEvent__DelegateSignature(const struct FVector& Acceleration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31DroneMovementComponent.OnAccelerationChangedEvent__DelegateSignature"));
		
		UK31DroneMovementComponent_OnAccelerationChangedEvent__DelegateSignature_Params params {};
		params.Acceleration = Acceleration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31DroneMovementComponent.MovementBlueprintEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UK31DroneMovementComponent::MovementBlueprintEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31DroneMovementComponent.MovementBlueprintEvent__DelegateSignature"));
		
		UK31DroneMovementComponent_MovementBlueprintEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C0E0
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.IsMeshAttachedToCharacterForDeploy
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK31DroneMovementComponent::IsMeshAttachedToCharacterForDeploy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.IsMeshAttachedToCharacterForDeploy"));
		
		UK31DroneMovementComponent_IsMeshAttachedToCharacterForDeploy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C090
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.HasReachedDeployLocation
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UK31DroneMovementComponent::HasReachedDeployLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.HasReachedDeployLocation"));
		
		UK31DroneMovementComponent_HasReachedDeployLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C060
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.GetTargetFlightHeight
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EDroneFlyingHeight UK31DroneMovementComponent::GetTargetFlightHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.GetTargetFlightHeight"));
		
		UK31DroneMovementComponent_GetTargetFlightHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C030
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.GetMovementMode
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EK31DroneMovementMode UK31DroneMovementComponent::GetMovementMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.GetMovementMode"));
		
		UK31DroneMovementComponent_GetMovementMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C000
	 * 		Name   -> Function TheK31.K31DroneMovementComponent.GetDistanceToTarget
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31DroneMovementComponent::GetDistanceToTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneMovementComponent.GetDistanceToTarget"));
		
		UK31DroneMovementComponent_GetDistanceToTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneMovementComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneOwnershipComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneOwnershipComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneOwnershipComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DronePlacementRecaller.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DronePlacementRecaller::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DronePlacementRecaller"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DronePlacementStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DronePlacementStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DronePlacementStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneRecallingState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneRecallingState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneRecallingState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C1E0
	 * 		Name   -> Function TheK31.K31DroneScoutDetectionComponent.OnLaserDeactivate
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneScoutDetectionComponent::OnLaserDeactivate(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneScoutDetectionComponent.OnLaserDeactivate"));
		
		UK31DroneScoutDetectionComponent_OnLaserDeactivate_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C110
	 * 		Name   -> Function TheK31.K31DroneScoutDetectionComponent.OnLaserActive
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Reset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneScoutDetectionComponent::OnLaserActive(class UActorComponent* Component, bool Reset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneScoutDetectionComponent.OnLaserActive"));
		
		UK31DroneScoutDetectionComponent_OnLaserActive_Params params {};
		params.Component = Component;
		params.Reset = Reset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneScoutDetectionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneScoutDetectionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneScoutDetectionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneScoutingState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneScoutingState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneScoutingState"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31DroneStateController.OnStateChangedBlueprintEvent__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		EK31DroneStateID                                   oldState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EK31DroneStateID                                   NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31DroneStateController::OnStateChangedBlueprintEvent__DelegateSignature(EK31DroneStateID oldState, EK31DroneStateID NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31DroneStateController.OnStateChangedBlueprintEvent__DelegateSignature"));
		
		UK31DroneStateController_OnStateChangedBlueprintEvent__DelegateSignature_Params params {};
		params.oldState = oldState;
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C490
	 * 		Name   -> Function TheK31.K31DroneStateController.OnRep_States
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31DroneStateController::OnRep_States()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneStateController.OnRep_States"));
		
		UK31DroneStateController_OnRep_States_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517C290
	 * 		Name   -> Function TheK31.K31DroneStateController.OnRep_AuthorityRepCurrentState
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31DroneStateController::OnRep_AuthorityRepCurrentState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneStateController.OnRep_AuthorityRepCurrentState"));
		
		UK31DroneStateController_OnRep_AuthorityRepCurrentState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517BF20
	 * 		Name   -> Function TheK31.K31DroneStateController.GetCurrentStateID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EK31DroneStateID UK31DroneStateController::GetCurrentStateID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31DroneStateController.GetCurrentStateID"));
		
		UK31DroneStateController_GetCurrentStateID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneStateController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneStateController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneStateController"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneTargeter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneTargeter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneTargeter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31DroneZoneComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31DroneZoneComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31DroneZoneComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31HasteEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31HasteEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31HasteEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31InspectRadarScoreEmitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31InspectRadarScoreEmitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31InspectRadarScoreEmitter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31MenuAnimInstance.OnCustomizationAnimationMappingIDChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            animationMappingIndex                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31MenuAnimInstance::OnCustomizationAnimationMappingIDChanged(int32_t animationMappingIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31MenuAnimInstance.OnCustomizationAnimationMappingIDChanged"));
		
		UK31MenuAnimInstance_OnCustomizationAnimationMappingIDChanged_Params params {};
		params.animationMappingIndex = animationMappingIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517BFD0
	 * 		Name   -> Function TheK31.K31MenuAnimInstance.GetCustomizationMappingID
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UK31MenuAnimInstance::GetCustomizationMappingID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31MenuAnimInstance.GetCustomizationMappingID"));
		
		UK31MenuAnimInstance_GetCustomizationMappingID_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517BF50
	 * 		Name   -> Function TheK31.K31MenuAnimInstance.GetCustoAnimTags
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FName> UK31MenuAnimInstance::GetCustoAnimTags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31MenuAnimInstance.GetCustoAnimTags"));
		
		UK31MenuAnimInstance_GetCustoAnimTags_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31MenuAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31MenuAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31MenuAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050BF270
	 * 		Name   -> Function TheK31.K31P01.GetHasteEffectMovementSpeedIncrease
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P01::GetHasteEffectMovementSpeedIncrease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P01.GetHasteEffectMovementSpeedIncrease"));
		
		UK31P01_GetHasteEffectMovementSpeedIncrease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function TheK31.K31P01.GetHasteEffectDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P01::GetHasteEffectDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P01.GetHasteEffectDurationAtLevel"));
		
		UK31P01_GetHasteEffectDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90EB0
	 * 		Name   -> Function TheK31.K31P02.Multicast_RevealAndMakeSurvivorScream
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31P02::Multicast_RevealAndMakeSurvivorScream(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P02.Multicast_RevealAndMakeSurvivorScream"));
		
		UK31P02_Multicast_RevealAndMakeSurvivorScream_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function TheK31.K31P02.GetScreamDistance
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P02::GetScreamDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P02.GetScreamDistance"));
		
		UK31P02_GetScreamDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CD5E0
	 * 		Name   -> Function TheK31.K31P02.GetRevealAuraSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P02::GetRevealAuraSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P02.GetRevealAuraSeconds"));
		
		UK31P02_GetRevealAuraSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FFD0
	 * 		Name   -> Function TheK31.K31P02.GetActivePerkDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P02::GetActivePerkDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P02.GetActivePerkDurationAtLevel"));
		
		UK31P02_GetActivePerkDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31P02.BP_RevealAndMakeSurvivorScream
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               survivorPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31P02::BP_RevealAndMakeSurvivorScream(class ACamperPlayer* survivorPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P02.BP_RevealAndMakeSurvivorScream"));
		
		UK31P02_BP_RevealAndMakeSurvivorScream_Params params {};
		params.survivorPlayer = survivorPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA130
	 * 		Name   -> Function TheK31.K31P03.GetReduceHealingSpeedEffectSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P03::GetReduceHealingSpeedEffectSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P03.GetReduceHealingSpeedEffectSeconds"));
		
		UK31P03_GetReduceHealingSpeedEffectSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK31.K31P03.GetHealPenaltyAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK31P03::GetHealPenaltyAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31P03.GetHealPenaltyAtLevel"));
		
		UK31P03_GetHealPenaltyAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31PlayerZoneStatus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31PlayerZoneStatus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31PlayerZoneStatus"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180300
	 * 		Name   -> Function TheK31.K31Power.OnRepPowerState
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void AK31Power::OnRepPowerState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Power.OnRepPowerState"));
		
		AK31Power_OnRepPowerState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051802E0
	 * 		Name   -> Function TheK31.K31Power.OnRepPowerCooldownTimer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AK31Power::OnRepPowerCooldownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Power.OnRepPowerCooldownTimer"));
		
		AK31Power_OnRepPowerCooldownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FFB0
	 * 		Name   -> Function TheK31.K31Power.Authority_UpdateHasteBasedOnScannedSurvivors
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void AK31Power::Authority_UpdateHasteBasedOnScannedSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Power.Authority_UpdateHasteBasedOnScannedSurvivors"));
		
		AK31Power_Authority_UpdateHasteBasedOnScannedSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK31Power.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK31Power::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31Power"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31PowerChargePresentationItemProgressComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31PowerChargePresentationItemProgressComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31PowerChargePresentationItemProgressComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31PowerChargePresentationPowerFadeComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31PowerChargePresentationPowerFadeComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31PowerChargePresentationPowerFadeComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31PowerCosmeticHelper.Cosmetic_IsOnPowerCooldownUpdatedEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isPowerOnCooldown                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31PowerCosmeticHelper::Cosmetic_IsOnPowerCooldownUpdatedEvent(bool isPowerOnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31PowerCosmeticHelper.Cosmetic_IsOnPowerCooldownUpdatedEvent"));
		
		UK31PowerCosmeticHelper_Cosmetic_IsOnPowerCooldownUpdatedEvent_Params params {};
		params.isPowerOnCooldown = isPowerOnCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31PowerCosmeticHelper.Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               doesRadarDetectAnySurvivors                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31PowerCosmeticHelper::Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent(bool doesRadarDetectAnySurvivors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31PowerCosmeticHelper.Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent"));
		
		UK31PowerCosmeticHelper_Cosmetic_DoesRadarDetectAnySurvivorsUpdatedEvent_Params params {};
		params.doesRadarDetectAnySurvivors = doesRadarDetectAnySurvivors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31PowerCosmeticHelper.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31PowerCosmeticHelper::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31PowerCosmeticHelper"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31PowerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31PowerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31PowerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180500
	 * 		Name   -> Function TheK31.K31RadarAnimInstance.ResetIsRecallingADrone
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31RadarAnimInstance::ResetIsRecallingADrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31RadarAnimInstance.ResetIsRecallingADrone"));
		
		UK31RadarAnimInstance_ResetIsRecallingADrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051804E0
	 * 		Name   -> Function TheK31.K31RadarAnimInstance.ResetIsActivatingADrone
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UK31RadarAnimInstance::ResetIsActivatingADrone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31RadarAnimInstance.ResetIsActivatingADrone"));
		
		UK31RadarAnimInstance_ResetIsActivatingADrone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051801B0
	 * 		Name   -> Function TheK31.K31RadarAnimInstance.OnGameEventReceived
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31RadarAnimInstance::OnGameEventReceived(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31RadarAnimInstance.OnGameEventReceived"));
		
		UK31RadarAnimInstance_OnGameEventReceived_Params params {};
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
	 * 		Name   -> PredefinedFunction UK31RadarAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31RadarAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31RadarAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheK31.K31Scanner.OnScannerUpdated__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UK31Scanner::OnScannerUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheK31.K31Scanner.OnScannerUpdated__DelegateSignature"));
		
		UK31Scanner_OnScannerUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180000
	 * 		Name   -> Function TheK31.K31Scanner.GetEncodedPoints
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FLinearColor> UK31Scanner::GetEncodedPoints()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31Scanner.GetEncodedPoints"));
		
		UK31Scanner_GetEncodedPoints_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31Scanner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31Scanner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31Scanner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31SurvivorAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31SurvivorAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051804C0
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnRep_RemoveClawTrapInteraction
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorClawTrapComponent::OnRep_RemoveClawTrapInteraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnRep_RemoveClawTrapInteraction"));
		
		UK31SurvivorClawTrapComponent_OnRep_RemoveClawTrapInteraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051803A0
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnRep_OriginatingPower
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AK31Power*                                   oldPower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorClawTrapComponent::OnRep_OriginatingPower(class AK31Power* oldPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnRep_OriginatingPower"));
		
		UK31SurvivorClawTrapComponent_OnRep_OriginatingPower_Params params {};
		params.oldPower = oldPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180380
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsTrapped
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorClawTrapComponent::OnRep_IsTrapped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsTrapped"));
		
		UK31SurvivorClawTrapComponent_OnRep_IsTrapped_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180340
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsBroadcasting
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorClawTrapComponent::OnRep_IsBroadcasting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnRep_IsBroadcasting"));
		
		UK31SurvivorClawTrapComponent_OnRep_IsBroadcasting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051802C0
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorClawTrapComponent::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnIntroCompleted"));
		
		UK31SurvivorClawTrapComponent_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051800A0
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.OnCamperEscaped
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                gameEventType                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorClawTrapComponent::OnCamperEscaped(const struct FGameplayTag& gameEventType, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.OnCamperEscaped"));
		
		UK31SurvivorClawTrapComponent_OnCamperEscaped_Params params {};
		params.gameEventType = gameEventType;
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FCD0
	 * 		Name   -> Function TheK31.K31SurvivorClawTrapComponent.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorClawTrapComponent::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorClawTrapComponent.Authority_OnDamageStateChanged"));
		
		UK31SurvivorClawTrapComponent_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31SurvivorClawTrapComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31SurvivorClawTrapComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorClawTrapComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_UpdateLockOnProgress
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              currentProgressPercent                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsFullyLockedOn                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_UpdateLockOnProgress(float currentProgressPercent, bool IsFullyLockedOn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_UpdateLockOnProgress"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_UpdateLockOnProgress_Params params {};
		params.currentProgressPercent = currentProgressPercent;
		params.IsFullyLockedOn = IsFullyLockedOn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsTrappedByClawTrap
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsTrapped                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_OnIsTrappedByClawTrap(bool IsTrapped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsTrappedByClawTrap"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsTrappedByClawTrap_Params params {};
		params.IsTrapped = IsTrapped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isSurvivorDetectedAndVisibleOnScanner                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner(bool isSurvivorDetectedAndVisibleOnScanner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsSurvivorDetectedAndVisibleOnScanner_Params params {};
		params.isSurvivorDetectedAndVisibleOnScanner = isSurvivorDetectedAndVisibleOnScanner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsOverlappingActiveZoneChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isOverlappingActiveZone                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_OnIsOverlappingActiveZoneChanged(bool isOverlappingActiveZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsOverlappingActiveZoneChanged"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsOverlappingActiveZoneChanged_Params params {};
		params.isOverlappingActiveZone = isOverlappingActiveZone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsBroadcasting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isBroadcasting                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_OnIsBroadcasting(bool isBroadcasting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnIsBroadcasting"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_OnIsBroadcasting_Params params {};
		params.isBroadcasting = isBroadcasting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnDetectedByDrone
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AK31Drone*                                   Drone                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isOnCooldown                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AK31SurvivorCosmeticHelperActor::Cosmetic_OnDetectedByDrone(class AK31Drone* Drone, bool isOnCooldown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorCosmeticHelperActor.Cosmetic_OnDetectedByDrone"));
		
		AK31SurvivorCosmeticHelperActor_Cosmetic_OnDetectedByDrone_Params params {};
		params.Drone = Drone;
		params.isOnCooldown = isOnCooldown;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AK31SurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AK31SurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180430
	 * 		Name   -> Function TheK31.K31SurvivorDetection.OnRep_OriginatingPower
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AK31Power*                                   oldPower                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorDetection::OnRep_OriginatingPower(class AK31Power* oldPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorDetection.OnRep_OriginatingPower"));
		
		UK31SurvivorDetection_OnRep_OriginatingPower_Params params {};
		params.oldPower = oldPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180360
	 * 		Name   -> Function TheK31.K31SurvivorDetection.OnRep_IsFullyLockedOn
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorDetection::OnRep_IsFullyLockedOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorDetection.OnRep_IsFullyLockedOn"));
		
		UK31SurvivorDetection_OnRep_IsFullyLockedOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05180320
	 * 		Name   -> Function TheK31.K31SurvivorDetection.OnRep_ChargeableComponent
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31SurvivorDetection::OnRep_ChargeableComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorDetection.OnRep_ChargeableComponent"));
		
		UK31SurvivorDetection_OnRep_ChargeableComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FDA0
	 * 		Name   -> Function TheK31.K31SurvivorDetection.Authority_OnDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorDetection::Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorDetection.Authority_OnDamageStateChanged"));
		
		UK31SurvivorDetection_Authority_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FBD0
	 * 		Name   -> Function TheK31.K31SurvivorDetection.Authority_OnChargeCompleted
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UK31SurvivorDetection::Authority_OnChargeCompleted(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31SurvivorDetection.Authority_OnChargeCompleted"));
		
		UK31SurvivorDetection_Authority_OnChargeCompleted_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31SurvivorDetection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31SurvivorDetection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorDetection"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31SurvivorExposedEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31SurvivorExposedEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorExposedEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31SurvivorInActiveZoneCondition.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31SurvivorInActiveZoneCondition::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31SurvivorInActiveZoneCondition"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31TrapProximitySensor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31TrapProximitySensor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31TrapProximitySensor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31UndetectableEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31UndetectableEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31UndetectableEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31Utilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31Utilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31Utilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FF90
	 * 		Name   -> Function TheK31.K31WeakPointScoreEmitter.Authority_OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UK31WeakPointScoreEmitter::Authority_OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31WeakPointScoreEmitter.Authority_OnLevelReadyToPlay"));
		
		UK31WeakPointScoreEmitter_Authority_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FF00
	 * 		Name   -> Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31WeakPointScoreEmitter::Authority_OnDechargeEnd(class UChargeableComponent* ChargeableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeEnd"));
		
		UK31WeakPointScoreEmitter_Authority_OnDechargeEnd_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0517FE70
	 * 		Name   -> Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeBegin
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class UChargeableComponent*                        ChargeableComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK31WeakPointScoreEmitter::Authority_OnDechargeBegin(class UChargeableComponent* ChargeableComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.K31WeakPointScoreEmitter.Authority_OnDechargeBegin"));
		
		UK31WeakPointScoreEmitter_Authority_OnDechargeBegin_Params params {};
		params.ChargeableComponent = ChargeableComponent;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK31WeakPointScoreEmitter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK31WeakPointScoreEmitter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.K31WeakPointScoreEmitter"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerMakeUniqueSurvivorsScreamAchievement.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerMakeUniqueSurvivorsScreamAchievement::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.KillerMakeUniqueSurvivorsScreamAchievement"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URecallK31DroneAction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URecallK31DroneAction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.RecallK31DroneAction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK31.S35P01.GetFastVaultsTimeSecondsAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US35P01::GetFastVaultsTimeSecondsAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P01.GetFastVaultsTimeSecondsAtLevel"));
		
		US35P01_GetFastVaultsTimeSecondsAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA130
	 * 		Name   -> Function TheK31.S35P01.GetCooldownDurationSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US35P01::GetCooldownDurationSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P01.GetCooldownDurationSeconds"));
		
		US35P01_GetCooldownDurationSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US35P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US35P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S35P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK31.S35P02.GetHasteEffectDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US35P02::GetHasteEffectDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P02.GetHasteEffectDurationAtLevel"));
		
		US35P02_GetHasteEffectDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US35P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US35P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S35P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US35P02Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US35P02Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S35P02Effect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181F50
	 * 		Name   -> Function TheK31.S35P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US35P03::OnRep_IsStatusEffectActiveOnOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P03.OnRep_IsStatusEffectActiveOnOwningSurvivor"));
		
		US35P03_OnRep_IsStatusEffectActiveOnOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045CA0D0
	 * 		Name   -> Function TheK31.S35P03.GetPerkRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US35P03::GetPerkRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P03.GetPerkRange"));
		
		US35P03_GetPerkRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function TheK31.S35P03.GetCooldownDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US35P03::GetCooldownDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P03.GetCooldownDurationAtLevel"));
		
		US35P03_GetCooldownDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US35P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US35P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S35P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181F10
	 * 		Name   -> Function TheK31.S35P03Effect.OnRep_GiveBuffToPlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US35P03Effect::OnRep_GiveBuffToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S35P03Effect.OnRep_GiveBuffToPlayer"));
		
		US35P03Effect_OnRep_GiveBuffToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US35P03Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US35P03Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S35P03Effect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B88A0
	 * 		Name   -> Function TheK31.S36P01.GetHasteEffectMovementSpeedIncrease
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P01::GetHasteEffectMovementSpeedIncrease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P01.GetHasteEffectMovementSpeedIncrease"));
		
		US36P01_GetHasteEffectMovementSpeedIncrease_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050BF270
	 * 		Name   -> Function TheK31.S36P01.GetHasteEffectDurationSeconds
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P01::GetHasteEffectDurationSeconds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P01.GetHasteEffectDurationSeconds"));
		
		US36P01_GetHasteEffectDurationSeconds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05003B30
	 * 		Name   -> Function TheK31.S36P01.GetExhaustedEffectDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P01::GetExhaustedEffectDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P01.GetExhaustedEffectDurationAtLevel"));
		
		US36P01_GetExhaustedEffectDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181CB0
	 * 		Name   -> Function TheK31.S36P01.Authority_OnIsRunningAndMovingChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               isRunningAndMoving                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US36P01::Authority_OnIsRunningAndMovingChanged(bool isRunningAndMoving)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P01.Authority_OnIsRunningAndMovingChanged"));
		
		US36P01_Authority_OnIsRunningAndMovingChanged_Params params {};
		params.isRunningAndMoving = isRunningAndMoving;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US36P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US36P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S36P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.S36P02.OnRecoverAbilityButtonTriggeredCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               OwningSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US36P02::OnRecoverAbilityButtonTriggeredCosmetic(class ACamperPlayer* OwningSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P02.OnRecoverAbilityButtonTriggeredCosmetic"));
		
		US36P02_OnRecoverAbilityButtonTriggeredCosmetic_Params params {};
		params.OwningSurvivor = OwningSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheK31.S36P02.GetBrokenStatusDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P02::GetBrokenStatusDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P02.GetBrokenStatusDurationAtLevel"));
		
		US36P02_GetBrokenStatusDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US36P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US36P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S36P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheK31.S36P02Interaction.OnRecoverInteractionUsed_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void US36P02Interaction::OnRecoverInteractionUsed_Cosmetic(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P02Interaction.OnRecoverInteractionUsed_Cosmetic"));
		
		US36P02Interaction_OnRecoverInteractionUsed_Cosmetic_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US36P02Interaction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US36P02Interaction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S36P02Interaction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181F50
	 * 		Name   -> Function TheK31.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US36P03::OnRep_IsStatusEffectActiveOnOwningSurvivor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P03.OnRep_IsStatusEffectActiveOnOwningSurvivor"));
		
		US36P03_OnRep_IsStatusEffectActiveOnOwningSurvivor_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181EE0
	 * 		Name   -> Function TheK31.S36P03.GetPerkRange
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P03::GetPerkRange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P03.GetPerkRange"));
		
		US36P03_GetPerkRange_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8870
	 * 		Name   -> Function TheK31.S36P03.GetCooldownDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float US36P03::GetCooldownDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P03.GetCooldownDurationAtLevel"));
		
		US36P03_GetCooldownDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US36P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US36P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S36P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181F70
	 * 		Name   -> Function TheK31.S36P03Effect.ShouldGiveBuff
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool US36P03Effect::ShouldGiveBuff()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P03Effect.ShouldGiveBuff"));
		
		US36P03Effect_ShouldGiveBuff_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181F30
	 * 		Name   -> Function TheK31.S36P03Effect.OnRep_GiveBuffToPlayer
	 * 		Flags  -> (Final, Native, Private)
	 */
	void US36P03Effect::OnRep_GiveBuffToPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.S36P03Effect.OnRep_GiveBuffToPlayer"));
		
		US36P03Effect_OnRep_GiveBuffToPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US36P03Effect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US36P03Effect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.S36P03Effect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181D40
	 * 		Name   -> Function TheK31.SurvivorHackDroneInteraction.Authority_OnMinigameEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDirectionalMinigameResult                         Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorHackDroneInteraction::Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.SurvivorHackDroneInteraction.Authority_OnMinigameEnd"));
		
		USurvivorHackDroneInteraction_Authority_OnMinigameEnd_Params params {};
		params.Survivor = Survivor;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorHackDroneInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorHackDroneInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.SurvivorHackDroneInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05181E10
	 * 		Name   -> Function TheK31.SurvivorRemoveClawTrapInteraction.Authority_OnMinigameEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EDirectionalMinigameResult                         Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorRemoveClawTrapInteraction::Authority_OnMinigameEnd(class ACamperPlayer* Survivor, EDirectionalMinigameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheK31.SurvivorRemoveClawTrapInteraction.Authority_OnMinigameEnd"));
		
		USurvivorRemoveClawTrapInteraction_Authority_OnMinigameEnd_Params params {};
		params.Survivor = Survivor;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorRemoveClawTrapInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorRemoveClawTrapInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheK31.SurvivorRemoveClawTrapInteraction"));
		return ptr;
	}

}


