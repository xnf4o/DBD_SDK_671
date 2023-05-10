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
	 * 		RVA    -> 0x04F9BB50
	 * 		Name   -> Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsColliding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChainPlayerMovementStatusEffect::OnIsChainCollidingChanged(bool IsColliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ChainPlayerMovementStatusEffect.OnIsChainCollidingChanged"));
		
		UChainPlayerMovementStatusEffect_OnIsChainCollidingChanged_Params params {};
		params.IsColliding = IsColliding;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChainPlayerMovementStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainPlayerMovementStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ChainPlayerMovementStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChainKillerMovementStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainKillerMovementStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ChainKillerMovementStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChainLinkableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChainLinkableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ChainLinkableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BD90
	 * 		Name   -> Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UDeadMansSwitch::OnRep_BlockedGenerators()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.DeadMansSwitch.OnRep_BlockedGenerators"));
		
		UDeadMansSwitch_OnRep_BlockedGenerators_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadMansSwitch.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadMansSwitch::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.DeadMansSwitch"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9C120
	 * 		Name   -> Function TheGunslinger.FireHarpoonRifleInteraction.Server_SetAimingSubstate
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		EFireHarpoonRifleAimingInteractionSubState         NewState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UFireHarpoonRifleInteraction::Server_SetAimingSubstate(EFireHarpoonRifleAimingInteractionSubState NewState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.FireHarpoonRifleInteraction.Server_SetAimingSubstate"));
		
		UFireHarpoonRifleInteraction_Server_SetAimingSubstate_Params params {};
		params.NewState = NewState;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BFA0
	 * 		Name   -> Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		TArray<class ADBDPlayer*>                          nearMissedPlayers                                          (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFireHarpoonRifleInteraction::Server_HandleMissShotScores(TArray<class ADBDPlayer*> nearMissedPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.FireHarpoonRifleInteraction.Server_HandleMissShotScores"));
		
		UFireHarpoonRifleInteraction_Server_HandleMissShotScores_Params params {};
		params.nearMissedPlayers = nearMissedPlayers;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFireHarpoonRifleInteraction::OnHitPlayer__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnHitPlayer__DelegateSignature"));
		
		UFireHarpoonRifleInteraction_OnHitPlayer__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UFireHarpoonRifleInteraction::OnFireHarpoon__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.FireHarpoonRifleInteraction.OnFireHarpoon__DelegateSignature"));
		
		UFireHarpoonRifleInteraction_OnFireHarpoon__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFireHarpoonRifleInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFireHarpoonRifleInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.FireHarpoonRifleInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DAABC0
	 * 		Name   -> Function TheGunslinger.ForThePeople.Server_OnActionInputPressed
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 */
	void UForThePeople::Server_OnActionInputPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ForThePeople.Server_OnActionInputPressed"));
		
		UForThePeople_Server_OnActionInputPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BE60
	 * 		Name   -> Function TheGunslinger.ForThePeople.OnRep_SetIsHealStartedOnServer
	 * 		Flags  -> (Final, Native, Private, Const)
	 */
	void UForThePeople::OnRep_SetIsHealStartedOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ForThePeople.OnRep_SetIsHealStartedOnServer"));
		
		UForThePeople_OnRep_SetIsHealStartedOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.ForThePeople.OnHealingAbilityUsed
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               healingSurvivor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               healedSurvivor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UForThePeople::OnHealingAbilityUsed(class ACamperPlayer* healingSurvivor, class ACamperPlayer* healedSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ForThePeople.OnHealingAbilityUsed"));
		
		UForThePeople_OnHealingAbilityUsed_Params params {};
		params.healingSurvivor = healingSurvivor;
		params.healedSurvivor = healedSurvivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B970
	 * 		Name   -> Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               healer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               healTarget                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              amountHealed                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UForThePeople::Multicast_OnHealAbilityUsed(class ACamperPlayer* healer, class ACamperPlayer* healTarget, float amountHealed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ForThePeople.Multicast_OnHealAbilityUsed"));
		
		UForThePeople_Multicast_OnHealAbilityUsed_Params params {};
		params.healer = healer;
		params.healTarget = healTarget;
		params.amountHealed = amountHealed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E21A80
	 * 		Name   -> Function TheGunslinger.ForThePeople.Client_OnActionInputPressedEnded
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UForThePeople::Client_OnActionInputPressedEnded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.ForThePeople.Client_OnActionInputPressedEnded"));
		
		UForThePeople_Client_OnActionInputPressedEnded_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UForThePeople.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UForThePeople::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ForThePeople"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B540
	 * 		Name   -> Function TheGunslinger.Gearhead.Authority_OnCamperRemoved
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ACamperPlayer*                               removedPlayer                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGearhead::Authority_OnCamperRemoved(class ACamperPlayer* removedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.Gearhead.Authority_OnCamperRemoved"));
		
		UGearhead_Authority_OnCamperRemoved_Params params {};
		params.removedPlayer = removedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B470
	 * 		Name   -> Function TheGunslinger.Gearhead.Authority_OnCamperHealthStateChange
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGearhead::Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.Gearhead.Authority_OnCamperHealthStateChange"));
		
		UGearhead_Authority_OnCamperHealthStateChange_Params params {};
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
	 * 		Name   -> PredefinedFunction UGearhead.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGearhead::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.Gearhead"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunslingerAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunslingerAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.GunslingerAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunslingerCameraTargetingStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunslingerCameraTargetingStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.GunslingerCameraTargetingStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 */
	void UGunslingerEffectsComponent::PlayOutOfAmmoSound__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.GunslingerEffectsComponent.PlayOutOfAmmoSound__DelegateSignature"));
		
		UGunslingerEffectsComponent_PlayOutOfAmmoSound__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BBE0
	 * 		Name   -> Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               IsPressed                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGunslingerEffectsComponent::OnItemUsedStateChanged(bool IsPressed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.GunslingerEffectsComponent.OnItemUsedStateChanged"));
		
		UGunslingerEffectsComponent_OnItemUsedStateChanged_Params params {};
		params.IsPressed = IsPressed;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               isAiming                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGunslingerEffectsComponent::OnIsAimingChanged__DelegateSignature(bool isAiming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.GunslingerEffectsComponent.OnIsAimingChanged__DelegateSignature"));
		
		UGunslingerEffectsComponent_OnIsAimingChanged__DelegateSignature_Params params {};
		params.isAiming = isAiming;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound
	 * 		Flags  -> (Final, Net, Native, Event, NetMulticast, Private)
	 */
	void UGunslingerEffectsComponent::Multicast_PlayOutOfAmmoSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.GunslingerEffectsComponent.Multicast_PlayOutOfAmmoSound"));
		
		UGunslingerEffectsComponent_Multicast_PlayOutOfAmmoSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunslingerEffectsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunslingerEffectsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.GunslingerEffectsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B7B0
	 * 		Name   -> Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AHarpoonRifle* UGunslingerUtilities::STATIC_GetHarpoonRifle(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.GunslingerUtilities.GetHarpoonRifle"));
		
		UGunslingerUtilities_GetHarpoonRifle_Params params {};
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
	 * 		Name   -> PredefinedFunction UGunslingerUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunslingerUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.GunslingerUtilities"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BD00
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  collector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHarpoonChainPositioner::OnOwnerCollected(class ADBDPlayer* collector)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.OnOwnerCollected"));
		
		UHarpoonChainPositioner_OnOwnerCollected_Params params {};
		params.collector = collector;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isTravelling                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHarpoonChainPositioner::OnHarpoonTravelingChanged(bool isTravelling)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.OnHarpoonTravelingChanged"));
		
		UHarpoonChainPositioner_OnHarpoonTravelingChanged_Params params {};
		params.isTravelling = isTravelling;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHarpoonChainPositioner::OnHarpoonLoadedOnRifle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.OnHarpoonLoadedOnRifle"));
		
		UHarpoonChainPositioner_OnHarpoonLoadedOnRifle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      currentHarpoon                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UHarpoonChainPositioner::OnCurrentHarpoonChanged(class AActor* currentHarpoon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.OnCurrentHarpoonChanged"));
		
		UHarpoonChainPositioner_OnCurrentHarpoonChanged_Params params {};
		params.currentHarpoon = currentHarpoon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B780
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AHarpoonProp* UHarpoonChainPositioner::GetHarpoonProp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.GetHarpoonProp"));
		
		UHarpoonChainPositioner_GetHarpoonProp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B6D0
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class AActor* UHarpoonChainPositioner::GetCurrentHarpoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.GetCurrentHarpoon"));
		
		UHarpoonChainPositioner_GetCurrentHarpoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B450
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.AttachToRifle
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHarpoonChainPositioner::AttachToRifle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.AttachToRifle"));
		
		UHarpoonChainPositioner_AttachToRifle_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B430
	 * 		Name   -> Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UHarpoonChainPositioner::AttachToAnimSocket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonChainPositioner.AttachToAnimSocket"));
		
		UHarpoonChainPositioner_AttachToAnimSocket_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonChainPositioner.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonChainPositioner::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonChainPositioner"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonedSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonedSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonedSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonLauncher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BA80
	 * 		Name   -> Function TheGunslinger.HarpoonProjectile.OnHarpoonStop
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AHarpoonProjectile::OnHarpoonStop(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonProjectile.OnHarpoonStop"));
		
		AHarpoonProjectile_OnHarpoonStop_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHarpoonProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHarpoonProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonProjectile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonProjectileMovementComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonProjectileMovementComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonProjectileMovementComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHarpoonProp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHarpoonProp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonProp"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonProviderComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonProviderComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonProviderComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B5F0
	 * 		Name   -> Function TheGunslinger.HarpoonRifle.GetChain
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ARifleChain* AHarpoonRifle::GetChain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonRifle.GetChain"));
		
		AHarpoonRifle_GetChain_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B5D0
	 * 		Name   -> Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AHarpoonRifle::Authority_OnFireHarpoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.HarpoonRifle.Authority_OnFireHarpoon"));
		
		AHarpoonRifle_Authority_OnFireHarpoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHarpoonRifle.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHarpoonRifle::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonRifle"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHarpoonRifleAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHarpoonRifleAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HarpoonRifleAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHellshireIronAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHellshireIronAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HellshireIronAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexRetribution.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexRetribution::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HexRetribution"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHoneyLocustThornsAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHoneyLocustThornsAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.HoneyLocustThornsAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGunslingerHarpoon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGunslingerHarpoon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.GunslingerHarpoon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIridescentCoinAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIridescentCoinAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.IridescentCoinAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKillerChainLinkableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKillerChainLinkableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.KillerChainLinkableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheGunslinger.OffTheRecord.GetActivationDurationAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UOffTheRecord::GetActivationDurationAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.OffTheRecord.GetActivationDurationAtLevel"));
		
		UOffTheRecord_GetActivationDurationAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOffTheRecord.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOffTheRecord::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.OffTheRecord"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerReelInputAccelerationConstraintStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerReelInputAccelerationConstraintStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.PlayerReelInputAccelerationConstraintStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPrisonChainAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPrisonChainAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.PrisonChainAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BDD0
	 * 		Name   -> Function TheGunslinger.RedHerring.OnRep_MarkedGenerator
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class AGenerator*                                  oldMarkedGenerator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URedHerring::OnRep_MarkedGenerator(class AGenerator* oldMarkedGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RedHerring.OnRep_MarkedGenerator"));
		
		URedHerring_OnRep_MarkedGenerator_Params params {};
		params.oldMarkedGenerator = oldMarkedGenerator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.RedHerring.OnLoudNoiseTriggered
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void URedHerring::OnLoudNoiseTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RedHerring.OnLoudNoiseTriggered"));
		
		URedHerring_OnLoudNoiseTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URedHerring.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URedHerring::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.RedHerring"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReelChainInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReelChainInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ReelChainInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReloadHarpoonRifleInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReloadHarpoonRifleInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.ReloadHarpoonRifleInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9C3F0
	 * 		Name   -> Function TheGunslinger.RifleChain.UpdateChainMesh
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UInstancedStaticMeshComponent*               Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              alpha                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARifleChain::UpdateChainMesh(class UInstancedStaticMeshComponent* Mesh, class USplineComponent* spline, float alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.UpdateChainMesh"));
		
		ARifleChain_UpdateChainMesh_Params params {};
		params.Mesh = Mesh;
		params.spline = spline;
		params.alpha = alpha;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9C1A0
	 * 		Name   -> Function TheGunslinger.RifleChain.SpawnChainPoints
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Stop                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCurveFloat*                                 influenceCurve                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              pointYPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              pointZPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               useOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USplineComponent*                            spline                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t ARifleChain::SpawnChainPoints(const struct FVector& Start, const struct FVector& Stop, class UCurveFloat* influenceCurve, float pointYPosition, float pointZPosition, bool useOffset, class USplineComponent* spline)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.SpawnChainPoints"));
		
		ARifleChain_SpawnChainPoints_Params params {};
		params.Start = Start;
		params.Stop = Stop;
		params.influenceCurve = influenceCurve;
		params.pointYPosition = pointYPosition;
		params.pointZPosition = pointZPosition;
		params.useOffset = useOffset;
		params.spline = spline;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.RifleChain.OnUnattachFromPlayer
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARifleChain::OnUnattachFromPlayer(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.OnUnattachFromPlayer"));
		
		ARifleChain_OnUnattachFromPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.RifleChain.OnReelBackToRifle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ARifleChain::OnReelBackToRifle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.OnReelBackToRifle"));
		
		ARifleChain_OnReelBackToRifle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class AActor*                                      Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARifleChain::OnProjectileSet__DelegateSignature(class AActor* Projectile)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.RifleChain.OnProjectileSet__DelegateSignature"));
		
		ARifleChain_OnProjectileSet__DelegateSignature_Params params {};
		params.Projectile = Projectile;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.RifleChain.OnLaunch
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ARifleChain::OnLaunch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.OnLaunch"));
		
		ARifleChain_OnLaunch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsColliding                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARifleChain::OnIsCollidingChanged__DelegateSignature(bool IsColliding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.RifleChain.OnIsCollidingChanged__DelegateSignature"));
		
		ARifleChain_OnIsCollidingChanged__DelegateSignature_Params params {};
		params.IsColliding = IsColliding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheGunslinger.RifleChain.OnAttachToPlayer
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ARifleChain::OnAttachToPlayer(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.OnAttachToPlayer"));
		
		ARifleChain_OnAttachToPlayer_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B940
	 * 		Name   -> Function TheGunslinger.RifleChain.IsColliding
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ARifleChain::IsColliding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.IsColliding"));
		
		ARifleChain_IsColliding_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B910
	 * 		Name   -> Function TheGunslinger.RifleChain.GetUnwindingSpeed
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ARifleChain::GetUnwindingSpeed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetUnwindingSpeed"));
		
		ARifleChain_GetUnwindingSpeed_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B8E0
	 * 		Name   -> Function TheGunslinger.RifleChain.GetRiflePlayerLinker
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class URiflePlayerLinker* ARifleChain::GetRiflePlayerLinker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetRiflePlayerLinker"));
		
		ARifleChain_GetRiflePlayerLinker_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B700
	 * 		Name   -> Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<struct FHitResult> ARifleChain::GetFirstAndLastCollisionHits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetFirstAndLastCollisionHits"));
		
		ARifleChain_GetFirstAndLastCollisionHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B6A0
	 * 		Name   -> Function TheGunslinger.RifleChain.GetChainTensionComponent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class URifleChainTensionComponent* ARifleChain::GetChainTensionComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetChainTensionComponent"));
		
		ARifleChain_GetChainTensionComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B660
	 * 		Name   -> Function TheGunslinger.RifleChain.GetChainStart
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ARifleChain::GetChainStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetChainStart"));
		
		ARifleChain_GetChainStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B620
	 * 		Name   -> Function TheGunslinger.RifleChain.GetChainEnd
	 * 		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 */
	struct FVector ARifleChain::GetChainEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChain.GetChainEnd"));
		
		ARifleChain_GetChainEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ARifleChain.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ARifleChain::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.RifleChain"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BEA0
	 * 		Name   -> Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		bool                                               COMPLETED                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              instigatorsForCompletion                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void URifleChainTensionComponent::OnTensionChargeableCompletionChanged(bool COMPLETED, TArray<class AActor*> instigatorsForCompletion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChainTensionComponent.OnTensionChargeableCompletionChanged"));
		
		URifleChainTensionComponent_OnTensionChargeableCompletionChanged_Params params {};
		params.COMPLETED = COMPLETED;
		params.instigatorsForCompletion = instigatorsForCompletion;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BDB0
	 * 		Name   -> Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension
	 * 		Flags  -> (Final, Native, Private)
	 */
	void URifleChainTensionComponent::OnRep_IsBuildingTension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChainTensionComponent.OnRep_IsBuildingTension"));
		
		URifleChainTensionComponent_OnRep_IsBuildingTension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		bool                                               IsBuildingTension                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URifleChainTensionComponent::OnIsBuildingTensionChanged__DelegateSignature(bool IsBuildingTension)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.RifleChainTensionComponent.OnIsBuildingTensionChanged__DelegateSignature"));
		
		URifleChainTensionComponent_OnIsBuildingTensionChanged__DelegateSignature_Params params {};
		params.IsBuildingTension = IsBuildingTension;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D08BA0
	 * 		Name   -> Function TheGunslinger.RifleChainTensionComponent.IsBuildingTension
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool URifleChainTensionComponent::IsBuildingTension()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChainTensionComponent.IsBuildingTension"));
		
		URifleChainTensionComponent_IsBuildingTension_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B8A0
	 * 		Name   -> Function TheGunslinger.RifleChainTensionComponent.GetProgress
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float URifleChainTensionComponent::GetProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RifleChainTensionComponent.GetProgress"));
		
		URifleChainTensionComponent_GetProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URifleChainTensionComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URifleChainTensionComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.RifleChainTensionComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9C060
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URiflePlayerLinker::Server_OnClientConfirmTensionBreakChain(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.Server_OnClientConfirmTensionBreakChain"));
		
		URiflePlayerLinker_Server_OnClientConfirmTensionBreakChain_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature
	 * 		Flags  -> (MulticastDelegate, Public, Delegate)
	 * Parameters:
	 * 		class ADBDPlayer*                                  linkedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URiflePlayerLinker::OnLinkedPlayerSet__DelegateSignature(class ADBDPlayer* linkedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("DelegateFunction TheGunslinger.RiflePlayerLinker.OnLinkedPlayerSet__DelegateSignature"));
		
		URiflePlayerLinker_OnLinkedPlayerSet__DelegateSignature_Params params {};
		params.linkedPlayer = linkedPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA6E0
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void URiflePlayerLinker::Multicast_Unlink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.Multicast_Unlink"));
		
		URiflePlayerLinker_Multicast_Unlink_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D278D0
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.Multicast_Link
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		class ADBDPlayer*                                  linkedPlayer                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URiflePlayerLinker::Multicast_Link(class ADBDPlayer* linkedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.Multicast_Link"));
		
		URiflePlayerLinker_Multicast_Link_Params params {};
		params.linkedPlayer = linkedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B840
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.GetLinkOwner
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* URiflePlayerLinker::GetLinkOwner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.GetLinkOwner"));
		
		URiflePlayerLinker_GetLinkOwner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9B870
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ADBDPlayer* URiflePlayerLinker::GetLinkedPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.GetLinkedPlayer"));
		
		URiflePlayerLinker_GetLinkedPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D10300
	 * 		Name   -> Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void URiflePlayerLinker::Client_OnAuthorityTensionBreakChain(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.RiflePlayerLinker.Client_OnAuthorityTensionBreakChain"));
		
		URiflePlayerLinker_Client_OnAuthorityTensionBreakChain_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URiflePlayerLinker.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URiflePlayerLinker::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.RiflePlayerLinker"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URustedSpikeAddon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URustedSpikeAddon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.RustedSpikeAddon"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BE80
	 * 		Name   -> Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy
	 * 		Flags  -> (Final, Native, Private)
	 */
	void USurvivorChainLinkableComponent::OnRep_VelocityAdditiveStrategy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.SurvivorChainLinkableComponent.OnRep_VelocityAdditiveStrategy"));
		
		USurvivorChainLinkableComponent_OnRep_VelocityAdditiveStrategy_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorChainLinkableComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorChainLinkableComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.SurvivorChainLinkableComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F9BC70
	 * 		Name   -> Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorReelVelocityAdditiveStrategy::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheGunslinger.SurvivorReelVelocityAdditiveStrategy.OnKillerSet"));
		
		USurvivorReelVelocityAdditiveStrategy_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorReelVelocityAdditiveStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorReelVelocityAdditiveStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.SurvivorReelVelocityAdditiveStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTestOffTheRecord.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTestOffTheRecord::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheGunslinger.TestOffTheRecord"));
		return ptr;
	}

}


