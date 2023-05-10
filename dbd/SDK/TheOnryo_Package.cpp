﻿/**
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
	 * 		Name   -> PredefinedFunction UAddon_K27Power_13.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_13::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_13"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K27Power_17.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_17::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_17"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K27Power_18.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_18::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_18"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEEA0
	 * 		Name   -> Function TheOnryo.Addon_K27Power_19.Authority_OnIntroCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UAddon_K27Power_19::Authority_OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.Addon_K27Power_19.Authority_OnIntroCompleted"));
		
		UAddon_K27Power_19_Authority_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K27Power_19.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_19::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_19"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K27Power_20.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_20::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_20"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.Addon_K27Power_21.Cosmetic_OnAddonTriggered
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               televisionsWerePowered                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ASlasherPlayer*                              killer                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAddon_K27Power_21::Cosmetic_OnAddonTriggered(bool televisionsWerePowered, class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.Addon_K27Power_21.Cosmetic_OnAddonTriggered"));
		
		UAddon_K27Power_21_Cosmetic_OnAddonTriggered_Params params {};
		params.televisionsWerePowered = televisionsWerePowered;
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEFD0
	 * 		Name   -> Function TheOnryo.Addon_K27Power_21.Client_OnAddonTriggered
	 * 		Flags  -> (Net, Native, Event, Protected, NetClient)
	 * Parameters:
	 * 		bool                                               televisionsWerePowered                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UAddon_K27Power_21::Client_OnAddonTriggered(bool televisionsWerePowered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.Addon_K27Power_21.Client_OnAddonTriggered"));
		
		UAddon_K27Power_21_Client_OnAddonTriggered_Params params {};
		params.televisionsWerePowered = televisionsWerePowered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAddon_K27Power_21.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAddon_K27Power_21::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.Addon_K27Power_21"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionSucceeded
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  onryo                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseManifestInteraction::Cosmetic_OnInteractionSucceeded(class ADBDPlayer* onryo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionSucceeded"));
		
		UBaseManifestInteraction_Cosmetic_OnInteractionSucceeded_Params params {};
		params.onryo = onryo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  onryo                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseManifestInteraction::Cosmetic_OnInteractionStarted(class ADBDPlayer* onryo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionStarted"));
		
		UBaseManifestInteraction_Cosmetic_OnInteractionStarted_Params params {};
		params.onryo = onryo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  onryo                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBaseManifestInteraction::Cosmetic_OnInteractionCancelled(class ADBDPlayer* onryo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.BaseManifestInteraction.Cosmetic_OnInteractionCancelled"));
		
		UBaseManifestInteraction_Cosmetic_OnInteractionCancelled_Params params {};
		params.onryo = onryo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseManifestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseManifestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.BaseManifestInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF670
	 * 		Name   -> Function TheOnryo.CondemnedComponent.OnRep_HoldingVHS
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UCondemnedComponent::OnRep_HoldingVHS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.OnRep_HoldingVHS"));
		
		UCondemnedComponent_OnRep_HoldingVHS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF5F0
	 * 		Name   -> Function TheOnryo.CondemnedComponent.OnRep_CondemnedLevel
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		float                                              previousValue                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCondemnedComponent::OnRep_CondemnedLevel(float previousValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.OnRep_CondemnedLevel"));
		
		UCondemnedComponent_OnRep_CondemnedLevel_Params params {};
		params.previousValue = previousValue;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF4E0
	 * 		Name   -> Function TheOnryo.CondemnedComponent.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCondemnedComponent::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.OnKillerSet"));
		
		UCondemnedComponent_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF240
	 * 		Name   -> Function TheOnryo.CondemnedComponent.IsHoldingVHS
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCondemnedComponent::IsHoldingVHS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.IsHoldingVHS"));
		
		UCondemnedComponent_IsHoldingVHS_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF210
	 * 		Name   -> Function TheOnryo.CondemnedComponent.IsFullyCondemned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCondemnedComponent::IsFullyCondemned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.IsFullyCondemned"));
		
		UCondemnedComponent_IsFullyCondemned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF1E0
	 * 		Name   -> Function TheOnryo.CondemnedComponent.IsCondemned
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UCondemnedComponent::IsCondemned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.IsCondemned"));
		
		UCondemnedComponent_IsCondemned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF0C0
	 * 		Name   -> Function TheOnryo.CondemnedComponent.GetCondemnedPercent
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCondemnedComponent::GetCondemnedPercent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.GetCondemnedPercent"));
		
		UCondemnedComponent_GetCondemnedPercent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF090
	 * 		Name   -> Function TheOnryo.CondemnedComponent.GetCondemnedLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UCondemnedComponent::GetCondemnedLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.GetCondemnedLevel"));
		
		UCondemnedComponent_GetCondemnedLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0398A920
	 * 		Name   -> Function TheOnryo.CondemnedComponent.DBD_SetCondemnMoriableAndDownAllSurvivors
	 * 		Flags  -> (Final, Exec, Native, Public)
	 */
	void UCondemnedComponent::DBD_SetCondemnMoriableAndDownAllSurvivors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.DBD_SetCondemnMoriableAndDownAllSurvivors"));
		
		UCondemnedComponent_DBD_SetCondemnMoriableAndDownAllSurvivors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03FE2F00
	 * 		Name   -> Function TheOnryo.CondemnedComponent.DBD_SetCondemnedLevel
	 * 		Flags  -> (Final, Exec, Native, Public)
	 * Parameters:
	 * 		float                                              Level                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCondemnedComponent::DBD_SetCondemnedLevel(float Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.CondemnedComponent.DBD_SetCondemnedLevel"));
		
		UCondemnedComponent_DBD_SetCondemnedLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCondemnedComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCondemnedComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.CondemnedComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCondemnMoriInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCondemnMoriInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.CondemnMoriInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorTelevisionInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorTelevisionInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.SurvivorTelevisionInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInsertVHS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInsertVHS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.InsertVHS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05124BC0
	 * 		Name   -> Function TheOnryo.K27Addon_16_ScreamRevealComponent.Server_ConfirmKillerIsInViewValidation
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		bool                                               isKillerInView                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27Addon_16_ScreamRevealComponent::Server_ConfirmKillerIsInViewValidation(bool isKillerInView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27Addon_16_ScreamRevealComponent.Server_ConfirmKillerIsInViewValidation"));
		
		UK27Addon_16_ScreamRevealComponent_Server_ConfirmKillerIsInViewValidation_Params params {};
		params.isKillerInView = isKillerInView;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04CFC060
	 * 		Name   -> Function TheOnryo.K27Addon_16_ScreamRevealComponent.Multicast_RevealAndMakeSurvivorScream
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		float                                              screamRevealDuration                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27Addon_16_ScreamRevealComponent::Multicast_RevealAndMakeSurvivorScream(float screamRevealDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27Addon_16_ScreamRevealComponent.Multicast_RevealAndMakeSurvivorScream"));
		
		UK27Addon_16_ScreamRevealComponent_Multicast_RevealAndMakeSurvivorScream_Params params {};
		params.screamRevealDuration = screamRevealDuration;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA720
	 * 		Name   -> Function TheOnryo.K27Addon_16_ScreamRevealComponent.Client_QueryIsKillerInSurvivorView
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
	 */
	void UK27Addon_16_ScreamRevealComponent::Client_QueryIsKillerInSurvivorView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27Addon_16_ScreamRevealComponent.Client_QueryIsKillerInSurvivorView"));
		
		UK27Addon_16_ScreamRevealComponent_Client_QueryIsKillerInSurvivorView_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.K27Addon_16_ScreamRevealComponent.BP_RevealAndMakeSurvivorScream
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  survivorPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              screamRevealDuration                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27Addon_16_ScreamRevealComponent::BP_RevealAndMakeSurvivorScream(class ADBDPlayer* survivorPlayer, float screamRevealDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27Addon_16_ScreamRevealComponent.BP_RevealAndMakeSurvivorScream"));
		
		UK27Addon_16_ScreamRevealComponent_BP_RevealAndMakeSurvivorScream_Params params {};
		params.survivorPlayer = survivorPlayer;
		params.screamRevealDuration = screamRevealDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK27Addon_16_ScreamRevealComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK27Addon_16_ScreamRevealComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.K27Addon_16_ScreamRevealComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045C44B0
	 * 		Name   -> Function TheOnryo.K27P01.GetAuraRevealDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK27P01::GetAuraRevealDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P01.GetAuraRevealDuration"));
		
		UK27P01_GetAuraRevealDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEF00
	 * 		Name   -> Function TheOnryo.K27P01.Authority_OnSurvivorUnhookedOffScourgeHook
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UK27P01::Authority_OnSurvivorUnhookedOffScourgeHook(const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P01.Authority_OnSurvivorUnhookedOffScourgeHook"));
		
		UK27P01_Authority_OnSurvivorUnhookedOffScourgeHook_Params params {};
		params.GameEventData = GameEventData;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK27P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK27P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.K27P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90EB0
	 * 		Name   -> Function TheOnryo.K27P02.Multicast_ShowBubbleNotification
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AGenerator*                                  triggeringGenerator                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27P02::Multicast_ShowBubbleNotification(class AGenerator* triggeringGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P02.Multicast_ShowBubbleNotification"));
		
		UK27P02_Multicast_ShowBubbleNotification_Params params {};
		params.triggeringGenerator = triggeringGenerator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90E20
	 * 		Name   -> Function TheOnryo.K27P02.Multicast_AddGeneratorAura
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27P02::Multicast_AddGeneratorAura(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P02.Multicast_AddGeneratorAura"));
		
		UK27P02_Multicast_AddGeneratorAura_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function TheOnryo.K27P02.GetRegressionModifierAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK27P02::GetRegressionModifierAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P02.GetRegressionModifierAtLevel"));
		
		UK27P02_GetRegressionModifierAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B8840
	 * 		Name   -> Function TheOnryo.K27P02.GetActivationTimeAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UK27P02::GetActivationTimeAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P02.GetActivationTimeAtLevel"));
		
		UK27P02_GetActivationTimeAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.K27P02.Cosmetic_ShowBubbleNotification
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AGenerator*                                  triggeringGenerator                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27P02::Cosmetic_ShowBubbleNotification(class AGenerator* triggeringGenerator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P02.Cosmetic_ShowBubbleNotification"));
		
		UK27P02_Cosmetic_ShowBubbleNotification_Params params {};
		params.triggeringGenerator = triggeringGenerator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK27P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK27P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.K27P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D90EB0
	 * 		Name   -> Function TheOnryo.K27P03.Multicast_HighlightBlockedGeneratorForKiller
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class AGenerator*                                  Generator                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UK27P03::Multicast_HighlightBlockedGeneratorForKiller(class AGenerator* Generator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.K27P03.Multicast_HighlightBlockedGeneratorForKiller"));
		
		UK27P03_Multicast_HighlightBlockedGeneratorForKiller_Params params {};
		params.Generator = Generator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UK27P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UK27P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.K27P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF760
	 * 		Name   -> Function TheOnryo.ManifestationComponent.OnRep_LingeringUndetectableEndTimeStamp
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UManifestationComponent::OnRep_LingeringUndetectableEndTimeStamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.OnRep_LingeringUndetectableEndTimeStamp"));
		
		UManifestationComponent_OnRep_LingeringUndetectableEndTimeStamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF6B0
	 * 		Name   -> Function TheOnryo.ManifestationComponent.OnRep_IsManifested
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UManifestationComponent::OnRep_IsManifested()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.OnRep_IsManifested"));
		
		UManifestationComponent_OnRep_IsManifested_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF590
	 * 		Name   -> Function TheOnryo.ManifestationComponent.OnLingeringUndetectableTimerCompleted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UManifestationComponent::OnLingeringUndetectableTimerCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.OnLingeringUndetectableTimerCompleted"));
		
		UManifestationComponent_OnLingeringUndetectableTimerCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043FA700
	 * 		Name   -> Function TheOnryo.ManifestationComponent.Multicast_OnManifestationTransitionComplete
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 */
	void UManifestationComponent::Multicast_OnManifestationTransitionComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.Multicast_OnManifestationTransitionComplete"));
		
		UManifestationComponent_Multicast_OnManifestationTransitionComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF2A0
	 * 		Name   -> Function TheOnryo.ManifestationComponent.Multicast_OnManifestationChanged
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		bool                                               isManifested                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isImmediateManifest                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UManifestationComponent::Multicast_OnManifestationChanged(bool isManifested, bool isImmediateManifest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.Multicast_OnManifestationChanged"));
		
		UManifestationComponent_Multicast_OnManifestationChanged_Params params {};
		params.isManifested = isManifested;
		params.isImmediateManifest = isImmediateManifest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEEC0
	 * 		Name   -> Function TheOnryo.ManifestationComponent.Authority_OnMoriStarted
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UManifestationComponent::Authority_OnMoriStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.ManifestationComponent.Authority_OnMoriStarted"));
		
		UManifestationComponent_Authority_OnMoriStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManifestationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManifestationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.ManifestationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UManifestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UManifestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.ManifestInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF570
	 * 		Name   -> Function TheOnryo.NearPoweredTelevisionWithLingerTime.OnLevelReadyToPlay
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UNearPoweredTelevisionWithLingerTime::OnLevelReadyToPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.NearPoweredTelevisionWithLingerTime.OnLevelReadyToPlay"));
		
		UNearPoweredTelevisionWithLingerTime_OnLevelReadyToPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF150
	 * 		Name   -> Function TheOnryo.NearPoweredTelevisionWithLingerTime.GetPercentRemainingDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UNearPoweredTelevisionWithLingerTime::GetPercentRemainingDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.NearPoweredTelevisionWithLingerTime.GetPercentRemainingDuration"));
		
		UNearPoweredTelevisionWithLingerTime_GetPercentRemainingDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNearPoweredTelevisionWithLingerTime.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNearPoweredTelevisionWithLingerTime::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.NearPoweredTelevisionWithLingerTime"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImageChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               shouldBeVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoAfterImageComponent::ShouldShowAfterImageChanged(bool shouldBeVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImageChanged"));
		
		UOnryoAfterImageComponent_ShouldShowAfterImageChanged_Params params {};
		params.shouldBeVisible = shouldBeVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF8E0
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImage
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnryoAfterImageComponent::ShouldShowAfterImage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.ShouldShowAfterImage"));
		
		UOnryoAfterImageComponent_ShouldShowAfterImage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF270
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.IsOnryoInvisible
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnryoAfterImageComponent::IsOnryoInvisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.IsOnryoInvisible"));
		
		UOnryoAfterImageComponent_IsOnryoInvisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0461D800
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.IsInteracting
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnryoAfterImageComponent::IsInteracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.IsInteracting"));
		
		UOnryoAfterImageComponent_IsInteracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D08C30
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.IsAttacking
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UOnryoAfterImageComponent::IsAttacking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.IsAttacking"));
		
		UOnryoAfterImageComponent_IsAttacking_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF0F0
	 * 		Name   -> Function TheOnryo.OnryoAfterImageComponent.GetKiller
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* UOnryoAfterImageComponent::GetKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoAfterImageComponent.GetKiller"));
		
		UOnryoAfterImageComponent_GetKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoAfterImageComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoAfterImageComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoAfterImageComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnTeleportSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportSuccess"));
		
		UOnryoFXInterface_Cosmetic_OnTeleportSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnTeleportStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportStart"));
		
		UOnryoFXInterface_Cosmetic_OnTeleportStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportFinished
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnTeleportFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportFinished"));
		
		UOnryoFXInterface_Cosmetic_OnTeleportFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnTeleportCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnTeleportCancelled"));
		
		UOnryoFXInterface_Cosmetic_OnTeleportCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnManifestStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isManifested                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isImmediateManifest                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoFXInterface::Cosmetic_OnManifestStateChanged(bool isManifested, bool isImmediateManifest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnManifestStateChanged"));
		
		UOnryoFXInterface_Cosmetic_OnManifestStateChanged_Params params {};
		params.isManifested = isManifested;
		params.isImmediateManifest = isImmediateManifest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnKillerVisibilityChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isFlickering                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isManifested                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isInvisibleDueToOutOfVisibiltyRange                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoFXInterface::Cosmetic_OnKillerVisibilityChanged(bool IsVisible, bool isFlickering, bool isManifested, bool isInvisibleDueToOutOfVisibiltyRange, bool force)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnKillerVisibilityChanged"));
		
		UOnryoFXInterface_Cosmetic_OnKillerVisibilityChanged_Params params {};
		params.IsVisible = IsVisible;
		params.isFlickering = isFlickering;
		params.isManifested = isManifested;
		params.isInvisibleDueToOutOfVisibiltyRange = isInvisibleDueToOutOfVisibiltyRange;
		params.force = force;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeUnmanifestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestSuccess"));
		
		UOnryoFXInterface_Cosmetic_OnChargeUnmanifestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeUnmanifestStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestStart"));
		
		UOnryoFXInterface_Cosmetic_OnChargeUnmanifestStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeUnmanifestCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeUnmanifestCancelled"));
		
		UOnryoFXInterface_Cosmetic_OnChargeUnmanifestCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestSuccess
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeManifestSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestSuccess"));
		
		UOnryoFXInterface_Cosmetic_OnChargeManifestSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeManifestStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestStart"));
		
		UOnryoFXInterface_Cosmetic_OnChargeManifestStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UOnryoFXInterface::Cosmetic_OnChargeManifestCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoFXInterface.Cosmetic_OnChargeManifestCancelled"));
		
		UOnryoFXInterface_Cosmetic_OnChargeManifestCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoFXInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoFXInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoFXInterface"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoPower.PowerCooldownEnd_Cosmetic
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void AOnryoPower::PowerCooldownEnd_Cosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoPower.PowerCooldownEnd_Cosmetic"));
		
		AOnryoPower_PowerCooldownEnd_Cosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnryoPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnryoPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoPower"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoPowerPresentationComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoPowerPresentationComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoPowerPresentationComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF120
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetObjectState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UGameplayTagContainerComponent* AOnryoSurvivorCosmeticHelperActor::GetObjectState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetObjectState"));
		
		AOnryoSurvivorCosmeticHelperActor_GetObjectState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF060
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetCondemnedComponent
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class UCondemnedComponent* AOnryoSurvivorCosmeticHelperActor::GetCondemnedComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.GetCondemnedComponent"));
		
		AOnryoSurvivorCosmeticHelperActor_GetCondemnedComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnReceiveTape
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnReceiveTape(class ACamperPlayer* camper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnReceiveTape"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnReceiveTape_Params params {};
		params.camper = camper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseTape
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnLoseTape(class ACamperPlayer* camper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseTape"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnLoseTape_Params params {};
		params.camper = camper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseCondemnStack
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentStacks                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnLoseCondemnStack(class ACamperPlayer* camper, float currentStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLoseCondemnStack"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnLoseCondemnStack_Params params {};
		params.camper = camper;
		params.currentStacks = currentStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLightingSet
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseSky*                                    lighting                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnLightingSet(class ABaseSky* lighting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnLightingSet"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnLightingSet_Params params {};
		params.lighting = lighting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnHookedChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnHookedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnHookedChanged"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnHookedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnGainCondemnStack
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              currentStacks                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnGainCondemnStack(class ACamperPlayer* camper, float currentStacks)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnGainCondemnStack"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnGainCondemnStack_Params params {};
		params.camper = camper;
		params.currentStacks = currentStacks;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnDamageStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ECamperDamageState                                 oldDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECamperDamageState                                 newDamageState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnDamageStateChanged"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnDamageStateChanged_Params params {};
		params.oldDamageState = oldDamageState;
		params.newDamageState = newDamageState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnCarryStart(class ACamperPlayer* camper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryStart"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnCarryStart_Params params {};
		params.camper = camper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryEnd
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ACamperPlayer*                               camper                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoSurvivorCosmeticHelperActor::Cosmetic_OnCarryEnd(class ACamperPlayer* camper)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoSurvivorCosmeticHelperActor.Cosmetic_OnCarryEnd"));
		
		AOnryoSurvivorCosmeticHelperActor_Cosmetic_OnCarryEnd_Params params {};
		params.camper = camper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnryoSurvivorCosmeticHelperActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnryoSurvivorCosmeticHelperActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoSurvivorCosmeticHelperActor"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoTeleportInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoTeleportInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoTeleportInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF780
	 * 		Name   -> Function TheOnryo.OnryoTelevision.OnRep_SurvivorsThatCanInsertTape
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AOnryoTelevision::OnRep_SurvivorsThatCanInsertTape()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.OnRep_SurvivorsThatCanInsertTape"));
		
		AOnryoTelevision_OnRep_SurvivorsThatCanInsertTape_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF6D0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.OnRep_IsPowered
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               previousIsPowered                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::OnRep_IsPowered(bool previousIsPowered)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.OnRep_IsPowered"));
		
		AOnryoTelevision_OnRep_IsPowered_Params params {};
		params.previousIsPowered = previousIsPowered;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF5B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AOnryoTelevision::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.OnLocallyObservedChanged"));
		
		AOnryoTelevision_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF450
	 * 		Name   -> Function TheOnryo.OnryoTelevision.OnKillerSet
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::OnKillerSet(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.OnKillerSet"));
		
		AOnryoTelevision_OnKillerSet_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF380
	 * 		Name   -> Function TheOnryo.OnryoTelevision.OnCosmeticTransitionStateFinished
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable)
	 */
	void AOnryoTelevision::OnCosmeticTransitionStateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.OnCosmeticTransitionStateFinished"));
		
		AOnryoTelevision_OnCosmeticTransitionStateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF1B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.IsAnySurvivorWithoutTapeNearby
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool AOnryoTelevision::IsAnySurvivorWithoutTapeNearby()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.IsAnySurvivorWithoutTapeNearby"));
		
		AOnryoTelevision_IsAnySurvivorWithoutTapeNearby_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF180
	 * 		Name   -> Function TheOnryo.OnryoTelevision.GetTelevisionCosmeticState
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	ETelevisionCosmeticState AOnryoTelevision::GetTelevisionCosmeticState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.GetTelevisionCosmeticState"));
		
		AOnryoTelevision_GetTelevisionCosmeticState_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_SetIsTeleportTarget
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::Cosmetic_SetIsTeleportTarget(bool Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_SetIsTeleportTarget"));
		
		AOnryoTelevision_Cosmetic_SetIsTeleportTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnTVSelectedByLocalSurvivor
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::Cosmetic_OnTVSelectedByLocalSurvivor(class ADBDPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnTVSelectedByLocalSurvivor"));
		
		AOnryoTelevision_Cosmetic_OnTVSelectedByLocalSurvivor_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnTelevisionCosmeticStateChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		ETelevisionCosmeticState                           NextState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETelevisionCosmeticState                           previousState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::Cosmetic_OnTelevisionCosmeticStateChanged(ETelevisionCosmeticState NextState, ETelevisionCosmeticState previousState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnTelevisionCosmeticStateChanged"));
		
		AOnryoTelevision_Cosmetic_OnTelevisionCosmeticStateChanged_Params params {};
		params.NextState = NextState;
		params.previousState = previousState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportStarted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AOnryoTelevision::Cosmetic_OnTeleportStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportStarted"));
		
		AOnryoTelevision_Cosmetic_OnTeleportStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCompleted
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AOnryoTelevision::Cosmetic_OnTeleportCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCompleted"));
		
		AOnryoTelevision_Cosmetic_OnTeleportCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void AOnryoTelevision::Cosmetic_OnTeleportCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnTeleportCancelled"));
		
		AOnryoTelevision_Cosmetic_OnTeleportCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnStatusEffectZoneVFXActiveChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Active                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::Cosmetic_OnStatusEffectZoneVFXActiveChanged(bool Active)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnStatusEffectZoneVFXActiveChanged"));
		
		AOnryoTelevision_Cosmetic_OnStatusEffectZoneVFXActiveChanged_Params params {};
		params.Active = Active;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Cosmetic_OnCamperCanInsertTapeChanged
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               canInsertTape                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AOnryoTelevision::Cosmetic_OnCamperCanInsertTapeChanged(bool canInsertTape)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Cosmetic_OnCamperCanInsertTapeChanged"));
		
		AOnryoTelevision_Cosmetic_OnCamperCanInsertTapeChanged_Params params {};
		params.canInsertTape = canInsertTape;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEEE0
	 * 		Name   -> Function TheOnryo.OnryoTelevision.Authority_OnRepowerTimerDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void AOnryoTelevision::Authority_OnRepowerTimerDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTelevision.Authority_OnRepowerTimerDone"));
		
		AOnryoTelevision_Authority_OnRepowerTimerDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOnryoTelevision.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOnryoTelevision::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoTelevision"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoTVAutoPowerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoTVAutoPowerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoTVAutoPowerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF690
	 * 		Name   -> Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnRep_IsDone
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnryoTVInitialCooldownStateComponent::OnRep_IsDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnRep_IsDone"));
		
		UOnryoTVInitialCooldownStateComponent_OnRep_IsDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnCooldownDone
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void UOnryoTVInitialCooldownStateComponent::OnCooldownDone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTVInitialCooldownStateComponent.OnCooldownDone"));
		
		UOnryoTVInitialCooldownStateComponent_OnCooldownDone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EEFB0
	 * 		Name   -> Function TheOnryo.OnryoTVInitialCooldownStateComponent.Authority_TryStartCooldown
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnryoTVInitialCooldownStateComponent::Authority_TryStartCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTVInitialCooldownStateComponent.Authority_TryStartCooldown"));
		
		UOnryoTVInitialCooldownStateComponent_Authority_TryStartCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoTVInitialCooldownStateComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoTVInitialCooldownStateComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoTVInitialCooldownStateComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF7C0
	 * 		Name   -> Function TheOnryo.OnryoUnmanifestCooldownInteraction.SetOnryoPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOnryoPower*                                 OnryoPower                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoUnmanifestCooldownInteraction::SetOnryoPower(class AOnryoPower* OnryoPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoUnmanifestCooldownInteraction.SetOnryoPower"));
		
		UOnryoUnmanifestCooldownInteraction_SetOnryoPower_Params params {};
		params.OnryoPower = OnryoPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoUnmanifestCooldownInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoUnmanifestCooldownInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoUnmanifestCooldownInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF5D0
	 * 		Name   -> Function TheOnryo.OnryoVisibilityComponent.OnLocallyObservedChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnryoVisibilityComponent::OnLocallyObservedChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoVisibilityComponent.OnLocallyObservedChanged"));
		
		UOnryoVisibilityComponent_OnLocallyObservedChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF3C0
	 * 		Name   -> Function TheOnryo.OnryoVisibilityComponent.OnKillerInSurvivorSightRangeChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               inRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoVisibilityComponent::OnKillerInSurvivorSightRangeChanged(bool inRange)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoVisibilityComponent.OnKillerInSurvivorSightRangeChanged"));
		
		UOnryoVisibilityComponent_OnKillerInSurvivorSightRangeChanged_Params params {};
		params.inRange = inRange;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF3A0
	 * 		Name   -> Function TheOnryo.OnryoVisibilityComponent.OnIntroCompleted
	 * 		Flags  -> (Final, Native, Public)
	 */
	void UOnryoVisibilityComponent::OnIntroCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoVisibilityComponent.OnIntroCompleted"));
		
		UOnryoVisibilityComponent_OnIntroCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x043F5180
	 * 		Name   -> Function TheOnryo.OnryoVisibilityComponent.Multicast_OnManifestationStateChanged
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 * Parameters:
	 * 		bool                                               isManifested                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               isImmediateManifest                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoVisibilityComponent::Multicast_OnManifestationStateChanged(bool isManifested, bool isImmediateManifest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoVisibilityComponent.Multicast_OnManifestationStateChanged"));
		
		UOnryoVisibilityComponent_Multicast_OnManifestationStateChanged_Params params {};
		params.isManifested = isManifested;
		params.isImmediateManifest = isImmediateManifest;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoVisibilityComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoVisibilityComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoVisibilityComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URetrieveVHS.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URetrieveVHS::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.RetrieveVHS"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US30P01.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US30P01::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.S30P01"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x045B87B0
	 * 		Name   -> Function TheOnryo.S30P02.GetHealingOthersBonus
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float US30P02::GetHealingOthersBonus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.S30P02.GetHealingOthersBonus"));
		
		US30P02_GetHealingOthersBonus_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US30P02.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US30P02::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.S30P02"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction US30P03.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* US30P03::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.S30P03"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelevisionIterativeWeightAdjustmentStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelevisionIterativeWeightAdjustmentStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.TelevisionIterativeWeightAdjustmentStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTelevisionOutlineUpdateStrategy.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTelevisionOutlineUpdateStrategy::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.TelevisionOutlineUpdateStrategy"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE7780
	 * 		Name   -> Function TheOnryo.OnryoTeleportTargeterComponent.Server_SetTeleportTarget
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer)
	 * Parameters:
	 * 		class AOnryoTelevision*                            TV                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOnryoTeleportTargeterComponent::Server_SetTeleportTarget(class AOnryoTelevision* TV)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTeleportTargeterComponent.Server_SetTeleportTarget"));
		
		UOnryoTeleportTargeterComponent_Server_SetTeleportTarget_Params params {};
		params.TV = TV;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF7A0
	 * 		Name   -> Function TheOnryo.OnryoTeleportTargeterComponent.OnRep_TargetTelevision
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UOnryoTeleportTargeterComponent::OnRep_TargetTelevision()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.OnryoTeleportTargeterComponent.OnRep_TargetTelevision"));
		
		UOnryoTeleportTargeterComponent_OnRep_TargetTelevision_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOnryoTeleportTargeterComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOnryoTeleportTargeterComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.OnryoTeleportTargeterComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTurnOffTV.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTurnOffTV::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.TurnOffTV"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x051EF850
	 * 		Name   -> Function TheOnryo.UnmanifestInteraction.SetOnryoPower
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AOnryoPower*                                 OnryoPower                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUnmanifestInteraction::SetOnryoPower(class AOnryoPower* OnryoPower)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheOnryo.UnmanifestInteraction.SetOnryoPower"));
		
		UUnmanifestInteraction_SetOnryoPower_Params params {};
		params.OnryoPower = OnryoPower;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUnmanifestInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUnmanifestInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheOnryo.UnmanifestInteraction"));
		return ptr;
	}

}


