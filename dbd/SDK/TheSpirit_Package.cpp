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
	 * 		RVA    -> 0x05208470
	 * 		Name   -> Function TheSpirit.ActivePhaseWalkInteraction.OnPowerCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::OnPowerCollected(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.ActivePhaseWalkInteraction.OnPowerCollected"));
		
		UActivePhaseWalkInteraction_OnPowerCollected_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x052083E0
	 * 		Name   -> Function TheSpirit.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::OnPlayerLocallyObservedChanged(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.ActivePhaseWalkInteraction.OnPlayerLocallyObservedChanged"));
		
		UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x052083B0
	 * 		Name   -> Function TheSpirit.ActivePhaseWalkInteraction.GetChargeTime
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	float UActivePhaseWalkInteraction::GetChargeTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.ActivePhaseWalkInteraction.GetChargeTime"));
		
		UActivePhaseWalkInteraction_GetChargeTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheSpirit.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UActivePhaseWalkInteraction::Cosmetic_ResetChargeVFX(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.ActivePhaseWalkInteraction.Cosmetic_ResetChargeVFX"));
		
		UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActivePhaseWalkInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActivePhaseWalkInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.ActivePhaseWalkInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAutodidact.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAutodidact::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.Autodidact"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeliverance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeliverance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.Deliverance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05208990
	 * 		Name   -> Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperImmobilizeState                             oldImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperImmobilizeState                             newImmobilizeState                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiversion::Authority_OnOwningSurvivorImmobilizedStateChanged(ECamperImmobilizeState oldImmobilizeState, ECamperImmobilizeState newImmobilizeState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.Diversion.Authority_OnOwningSurvivorImmobilizedStateChanged"));
		
		UDiversion_Authority_OnOwningSurvivorImmobilizedStateChanged_Params params {};
		params.oldImmobilizeState = oldImmobilizeState;
		params.newImmobilizeState = newImmobilizeState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x052088C0
	 * 		Name   -> Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 CurrentDamageState                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDiversion::Authority_OnOwningSurvivorDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState CurrentDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.Diversion.Authority_OnOwningSurvivorDamageStateChanged"));
		
		UDiversion_Authority_OnOwningSurvivorDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.CurrentDamageState = CurrentDamageState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDiversion.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDiversion::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.Diversion"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDriedCherryBlossom.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDriedCherryBlossom::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.DriedCherryBlossom"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKatsumoriTalisman.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKatsumoriTalisman::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.KatsumoriTalisman"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMotherDaughterRing.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMotherDaughterRing::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.MotherDaughterRing"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x052090C0
	 * 		Name   -> Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOwningPlayerInSpiritHuskRange::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.OwningPlayerInSpiritHuskRange.OnKillerSet"));
		
		UOwningPlayerInSpiritHuskRange_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOwningPlayerInSpiritHuskRange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOwningPlayerInSpiritHuskRange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.OwningPlayerInSpiritHuskRange"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520A100
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.UpdateSurvivorVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::UpdateSurvivorVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.UpdateSurvivorVisibility"));
		
		UPhaseWalkingComponent_UpdateSurvivorVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520A0E0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.UpdateKillerVisibility
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPhaseWalkingComponent::UpdateKillerVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.UpdateKillerVisibility"));
		
		UPhaseWalkingComponent_UpdateKillerVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.SpawnPassivePhaseWalkHusks
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UPhaseWalkingComponent::SpawnPassivePhaseWalkHusks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.SpawnPassivePhaseWalkHusks"));
		
		UPhaseWalkingComponent_SpawnPassivePhaseWalkHusks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520A020
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.Server_Broadcast_PhaseWalk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		struct FPhaseWalkInfo                              PhaseWalkInfo                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::Server_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.Server_Broadcast_PhaseWalk"));
		
		UPhaseWalkingComponent_Server_Broadcast_PhaseWalk_Params params {};
		params.PhaseWalkInfo = PhaseWalkInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520A000
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.RefillActivePhaseWalkCharges
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void UPhaseWalkingComponent::RefillActivePhaseWalkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.RefillActivePhaseWalkCharges"));
		
		UPhaseWalkingComponent_RefillActivePhaseWalkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209FE0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UPhaseWalkingComponent::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.OnLevelReadyToPlay"));
		
		UPhaseWalkingComponent_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209F20
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.Multicast_Broadcast_PhaseWalk
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private, NetValidate)
	 * Parameters:
	 * 		struct FPhaseWalkInfo                              PhaseWalkInfo                                              (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::Multicast_Broadcast_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.Multicast_Broadcast_PhaseWalk"));
		
		UPhaseWalkingComponent_Multicast_Broadcast_PhaseWalk_Params params {};
		params.PhaseWalkInfo = PhaseWalkInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209EA0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.ModifyActivePhaseWalkCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::ModifyActivePhaseWalkCharges(float Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.ModifyActivePhaseWalkCharges"));
		
		UPhaseWalkingComponent_ModifyActivePhaseWalkCharges_Params params {};
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.MakePassivePhaseWalkHusksVisible
	 * 		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FTransform                                  huskTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		float                                              opacityValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              speedValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::MakePassivePhaseWalkHusksVisible(const struct FTransform& huskTransform, float opacityValue, float speedValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.MakePassivePhaseWalkHusksVisible"));
		
		UPhaseWalkingComponent_MakePassivePhaseWalkHusksVisible_Params params {};
		params.huskTransform = huskTransform;
		params.opacityValue = opacityValue;
		params.speedValue = speedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209E00
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.Local_PhaseWalk
	 * 		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPhaseWalkInfo                              PhaseWalkInfo                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::Local_PhaseWalk(const struct FPhaseWalkInfo& PhaseWalkInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.Local_PhaseWalk"));
		
		UPhaseWalkingComponent_Local_PhaseWalk_Params params {};
		params.PhaseWalkInfo = PhaseWalkInfo;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209DE0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.Local_EndPhaseWalks
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UPhaseWalkingComponent::Local_EndPhaseWalks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.Local_EndPhaseWalks"));
		
		UPhaseWalkingComponent_Local_EndPhaseWalks_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209DB0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.IsPhaseWalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPhaseWalkingComponent::IsPhaseWalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.IsPhaseWalking"));
		
		UPhaseWalkingComponent_IsPhaseWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209D80
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.IsPassivePhaseWalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPhaseWalkingComponent::IsPassivePhaseWalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.IsPassivePhaseWalking"));
		
		UPhaseWalkingComponent_IsPassivePhaseWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209D50
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.IsDecoyActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPhaseWalkingComponent::IsDecoyActive()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.IsDecoyActive"));
		
		UPhaseWalkingComponent_IsDecoyActive_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209D10
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.IsActivePhaseWalking
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPhaseWalkingComponent::IsActivePhaseWalking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.IsActivePhaseWalking"));
		
		UPhaseWalkingComponent_IsActivePhaseWalking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209CE0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetSpiritPassivePhaseWalkHusksCountToSpawn
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UPhaseWalkingComponent::GetSpiritPassivePhaseWalkHusksCountToSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetSpiritPassivePhaseWalkHusksCountToSpawn"));
		
		UPhaseWalkingComponent_GetSpiritPassivePhaseWalkHusksCountToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209C80
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetPassivePhaseWalkTimer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FDBDTimer UPhaseWalkingComponent::GetPassivePhaseWalkTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetPassivePhaseWalkTimer"));
		
		UPhaseWalkingComponent_GetPassivePhaseWalkTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209C50
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetHusk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UPhaseWalkingComponent::GetHusk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetHusk"));
		
		UPhaseWalkingComponent_GetHusk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209C20
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetDecoySlasherComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class UDecoySlasherComponent* UPhaseWalkingComponent::GetDecoySlasherComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetDecoySlasherComponent"));
		
		UPhaseWalkingComponent_GetDecoySlasherComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209BF0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkCharges
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPhaseWalkingComponent::GetActivePhaseWalkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkCharges"));
		
		UPhaseWalkingComponent_GetActivePhaseWalkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209BB0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkChargePercentage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UPhaseWalkingComponent::GetActivePhaseWalkChargePercentage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.GetActivePhaseWalkChargePercentage"));
		
		UPhaseWalkingComponent_GetActivePhaseWalkChargePercentage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.DBD_RefillActivePhaseWalkCharges
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UPhaseWalkingComponent::DBD_RefillActivePhaseWalkCharges()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.DBD_RefillActivePhaseWalkCharges"));
		
		UPhaseWalkingComponent_DBD_RefillActivePhaseWalkCharges_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209B70
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.CanStartActivePhaseWalk
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UPhaseWalkingComponent::CanStartActivePhaseWalk()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.CanStartActivePhaseWalk"));
		
		UPhaseWalkingComponent_CanStartActivePhaseWalk_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05209AE0
	 * 		Name   -> Function TheSpirit.PhaseWalkingComponent.Authority_SetIsInPostActivePhaseWalk
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPhaseWalkingComponent::Authority_SetIsInPostActivePhaseWalk(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.PhaseWalkingComponent.Authority_SetIsInPostActivePhaseWalk"));
		
		UPhaseWalkingComponent_Authority_SetIsInPostActivePhaseWalk_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPhaseWalkingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPhaseWalkingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.PhaseWalkingComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URancor::SpawnBubbleAtSurvivorsLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.Rancor.SpawnBubbleAtSurvivorsLocation"));
		
		URancor_SpawnBubbleAtSurvivorsLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x050BF270
	 * 		Name   -> Function TheSpirit.Rancor.GetSurvivorRevealDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float URancor::GetSurvivorRevealDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.Rancor.GetSurvivorRevealDuration"));
		
		URancor_GetSurvivorRevealDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URancor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URancor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.Rancor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520A540
	 * 		Name   -> Function TheSpirit.SpiritFury.GetPalletToBreakCountAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t USpiritFury::GetPalletToBreakCountAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.SpiritFury.GetPalletToBreakCountAtLevel"));
		
		USpiritFury_GetPalletToBreakCountAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpiritFury.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritFury::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.SpiritFury"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpiritHuskAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.SpiritHuskAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpiritHuskActivePhaseWalkAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskActivePhaseWalkAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.SpiritHuskActivePhaseWalkAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0520AA00
	 * 		Name   -> Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USpiritHuskOutlineUpdateStrategy::OnSlasherSet(class ASlasherPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheSpirit.SpiritHuskOutlineUpdateStrategy.OnSlasherSet"));
		
		USpiritHuskOutlineUpdateStrategy_OnSlasherSet_Params params {};
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpiritHuskOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpiritHuskOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.SpiritHuskOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThrowRockInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThrowRockInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheSpirit.ThrowRockInteraction"));
		return ptr;
	}

}


