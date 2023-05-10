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
	 * 		RVA    -> 0x044041A0
	 * 		Name   -> Function Barrel2023.Barrel.SetDissolveStarted
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               isDissolveStarted                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABarrel::SetDissolveStarted(bool isDissolveStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.SetDissolveStarted"));
		
		ABarrel_SetDissolveStarted_Params params {};
		params.isDissolveStarted = isDissolveStarted;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404180
	 * 		Name   -> Function Barrel2023.Barrel.OnRep_OnLocationChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABarrel::OnRep_OnLocationChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.OnRep_OnLocationChanged"));
		
		ABarrel_OnRep_OnLocationChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404160
	 * 		Name   -> Function Barrel2023.Barrel.OnBarrelDespawnCosmeticsComplete
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void ABarrel::OnBarrelDespawnCosmeticsComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.OnBarrelDespawnCosmeticsComplete"));
		
		ABarrel_OnBarrelDespawnCosmeticsComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnStoppedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABarrel::Cosmetic_OnStoppedInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnStoppedInteracting"));
		
		ABarrel_Cosmetic_OnStoppedInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnStartedInteracting
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              interactionDuration                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABarrel::Cosmetic_OnStartedInteracting(class ADBDPlayer* interactingPlayer, float interactionDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnStartedInteracting"));
		
		ABarrel_Cosmetic_OnStartedInteracting_Params params {};
		params.interactingPlayer = interactingPlayer;
		params.interactionDuration = interactionDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnInteractionInterruptedByPlayer
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABarrel::Cosmetic_OnInteractionInterruptedByPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnInteractionInterruptedByPlayer"));
		
		ABarrel_Cosmetic_OnInteractionInterruptedByPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnInteractionCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interactingPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABarrel::Cosmetic_OnInteractionCompleted(class ADBDPlayer* interactingPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnInteractionCompleted"));
		
		ABarrel_Cosmetic_OnInteractionCompleted_Params params {};
		params.interactingPlayer = interactingPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnFirstBarrelSpawn
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABarrel::Cosmetic_OnFirstBarrelSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnFirstBarrelSpawn"));
		
		ABarrel_Cosmetic_OnFirstBarrelSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnBarrelRespawn
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABarrel::Cosmetic_OnBarrelRespawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnBarrelRespawn"));
		
		ABarrel_Cosmetic_OnBarrelRespawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.Barrel.Cosmetic_OnBarrelDespawn
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasInteractionCompleted                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABarrel::Cosmetic_OnBarrelDespawn(bool wasInteractionCompleted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.Barrel.Cosmetic_OnBarrelDespawn"));
		
		ABarrel_Cosmetic_OnBarrelDespawn_Params params {};
		params.wasInteractionCompleted = wasInteractionCompleted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABarrel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABarrel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Barrel2023.Barrel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044047F0
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnRedBarrel
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UBarrelEventComponent::DBD_BarrelSpawnRedBarrel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnRedBarrel"));
		
		UBarrelEventComponent_DBD_BarrelSpawnRedBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044047D0
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnGreenBarrel
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UBarrelEventComponent::DBD_BarrelSpawnGreenBarrel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnGreenBarrel"));
		
		UBarrelEventComponent_DBD_BarrelSpawnGreenBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044047B0
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnBlueBarrel
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UBarrelEventComponent::DBD_BarrelSpawnBlueBarrel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.DBD_BarrelSpawnBlueBarrel"));
		
		UBarrelEventComponent_DBD_BarrelSpawnBlueBarrel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404720
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers
	 * 		Flags  -> (Final, Exec, Native, Private)
	 * Parameters:
	 * 		bool                                               shouldPause                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelEventComponent::DBD_BarrelPauseAllTimers(bool shouldPause)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.DBD_BarrelPauseAllTimers"));
		
		UBarrelEventComponent_DBD_BarrelPauseAllTimers_Params params {};
		params.shouldPause = shouldPause;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044046A0
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions
	 * 		Flags  -> (Final, Exec, Native, Private, Const)
	 * Parameters:
	 * 		float                                              Duration                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelEventComponent::DBD_BarrelDebugBarrelSpawnPositions(float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.DBD_BarrelDebugBarrelSpawnPositions"));
		
		UBarrelEventComponent_DBD_BarrelDebugBarrelSpawnPositions_Params params {};
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404680
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.Authority_OnIntroComplete
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBarrelEventComponent::Authority_OnIntroComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.Authority_OnIntroComplete"));
		
		UBarrelEventComponent_Authority_OnIntroComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044045F0
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelEventComponent::Authority_OnBarrelTimerDone(class ARespawnableInteractable* RespawnableInteractable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.Authority_OnBarrelTimerDone"));
		
		UBarrelEventComponent_Authority_OnBarrelTimerDone_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404520
	 * 		Name   -> Function Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ARespawnableInteractable*                    RespawnableInteractable                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IsInteracting                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelEventComponent::Authority_OnBarrelInteractionChanged(class ARespawnableInteractable* RespawnableInteractable, bool IsInteracting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelEventComponent.Authority_OnBarrelInteractionChanged"));
		
		UBarrelEventComponent_Authority_OnBarrelInteractionChanged_Params params {};
		params.RespawnableInteractable = RespawnableInteractable;
		params.IsInteracting = IsInteracting;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelEventComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelEventComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Barrel2023.BarrelEventComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Barrel2023.BarrelInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404E60
	 * 		Name   -> Function Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isRedUnlocked                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isGreenUnlocked                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isBlueUnlocked                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelPlayerComponent::Server_SetCharmInfo(bool isRedUnlocked, bool isGreenUnlocked, bool isBlueUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelPlayerComponent.Server_SetCharmInfo"));
		
		UBarrelPlayerComponent_Server_SetCharmInfo_Params params {};
		params.isRedUnlocked = isRedUnlocked;
		params.isGreenUnlocked = isGreenUnlocked;
		params.isBlueUnlocked = isBlueUnlocked;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404DD0
	 * 		Name   -> Function Barrel2023.BarrelPlayerComponent.GetInteractedBarrels
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	TArray<EBarrelType> UBarrelPlayerComponent::GetInteractedBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelPlayerComponent.GetInteractedBarrels"));
		
		UBarrelPlayerComponent_GetInteractedBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04404DB0
	 * 		Name   -> Function Barrel2023.BarrelPlayerComponent.DBD_BarrelResetInteractedBarrels
	 * 		Flags  -> (Final, Exec, Native, Private)
	 */
	void UBarrelPlayerComponent::DBD_BarrelResetInteractedBarrels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelPlayerComponent.DBD_BarrelResetInteractedBarrels"));
		
		UBarrelPlayerComponent_DBD_BarrelResetInteractedBarrels_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBarrelType                                        BarrelType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBarrelPlayerComponent::Cosmetic_TriggerPlayerVignette(class ADBDPlayer* Player, EBarrelType BarrelType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function Barrel2023.BarrelPlayerComponent.Cosmetic_TriggerPlayerVignette"));
		
		UBarrelPlayerComponent_Cosmetic_TriggerPlayerVignette_Params params {};
		params.Player = Player;
		params.BarrelType = BarrelType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBarrelPlayerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBarrelPlayerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class Barrel2023.BarrelPlayerComponent"));
		return ptr;
	}

}


