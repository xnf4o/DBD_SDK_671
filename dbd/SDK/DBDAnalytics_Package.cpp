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
	 * 		Name   -> PredefinedFunction UAnalyticsDelegates.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalyticsDelegates::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.AnalyticsDelegates"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044799D0
	 * 		Name   -> Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 */
	void UAnalyticsFunctionLibrary::STATIC_IncrementHookSpawned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.AnalyticsFunctionLibrary.IncrementHookSpawned"));
		
		UAnalyticsFunctionLibrary_IncrementHookSpawned_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalyticsFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalyticsFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.AnalyticsFunctionLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnalyticsManager.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnalyticsManager::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.AnalyticsManager"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04479A70
	 * 		Name   -> Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClosetAnalytics::STATIC_RecordClosetSearchSuccess(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchSuccess"));
		
		UClosetAnalytics_RecordClosetSearchSuccess_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044799F0
	 * 		Name   -> Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClosetAnalytics::STATIC_RecordClosetSearchFail(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.ClosetAnalytics.RecordClosetSearchFail"));
		
		UClosetAnalytics_RecordClosetSearchFail_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04479950
	 * 		Name   -> Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UClosetAnalytics::STATIC_IncrementClosetEnter(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.ClosetAnalytics.IncrementClosetEnter"));
		
		UClosetAnalytics_IncrementClosetEnter_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClosetAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClosetAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.ClosetAnalytics"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04479AF0
	 * 		Name   -> Function DBDAnalytics.DBDAnalytics.RecordGameProgress
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      InProgressType                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDBDAnalytics::STATIC_RecordGameProgress(const class FString& InProgressType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.DBDAnalytics.RecordGameProgress"));
		
		UDBDAnalytics_RecordGameProgress_Params params {};
		params.InProgressType = InProgressType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDBDAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDBDAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.DBDAnalytics"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmblemAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmblemAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.EmblemAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInteractionAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInteractionAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.InteractionAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044879D0
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  interruptedPlayer                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableInterruptAnalytics(class ADBDPlayer* interruptedPlayer, class ADBDPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableInterruptAnalytics"));
		
		UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Params params {};
		params.interruptedPlayer = interruptedPlayer;
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487910
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  hitPlayer                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendTinkererUndetectableHitNearGeneratorAnalytics(class ADBDPlayer* hitPlayer, class ADBDPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendTinkererUndetectableHitNearGeneratorAnalytics"));
		
		UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Params params {};
		params.hitPlayer = hitPlayer;
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487850
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  revealedPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendLightbornAuraRevealedAnalytics(class ADBDPlayer* revealedPlayer, class ADBDPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendLightbornAuraRevealedAnalytics"));
		
		UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Params params {};
		params.revealedPlayer = revealedPlayer;
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487790
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  findingSurvivor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  foundSurvivor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendKnockoutSurvivorFoundAnalytics(class ADBDPlayer* findingSurvivor, class ADBDPlayer* foundSurvivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendKnockoutSurvivorFoundAnalytics"));
		
		UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Params params {};
		params.findingSurvivor = findingSurvivor;
		params.foundSurvivor = foundSurvivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044876D0
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  hitSurvivor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ADBDPlayer*                                  Slasher                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendFranklinsHitSurvivorNearDroppedItemAnalytics(class ADBDPlayer* hitSurvivor, class ADBDPlayer* Slasher)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsHitSurvivorNearDroppedItemAnalytics"));
		
		UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Params params {};
		params.hitSurvivor = hitSurvivor;
		params.Slasher = Slasher;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487650
	 * 		Name   -> Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ADBDPlayer*                                  previousOwner                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPerkAnalyticsLibrary::STATIC_SendFranklinsConsumeItemAnalytics(class ADBDPlayer* previousOwner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PerkAnalyticsLibrary.SendFranklinsConsumeItemAnalytics"));
		
		UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Params params {};
		params.previousOwner = previousOwner;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPerkAnalyticsLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPerkAnalyticsLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.PerkAnalyticsLibrary"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487590
	 * 		Name   -> Function DBDAnalytics.PigAnalytics.RecordRBTSearch
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               searchingPlayer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPigAnalytics::STATIC_RecordRBTSearch(class ACamperPlayer* searchingPlayer, bool success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PigAnalytics.RecordRBTSearch"));
		
		UPigAnalytics_RecordRBTSearch_Params params {};
		params.searchingPlayer = searchingPlayer;
		params.success = success;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x044874D0
	 * 		Name   -> Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASlasherPlayer*                              attacher                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACamperPlayer*                               attachee                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPigAnalytics::STATIC_OnRBTAttached_Analytics(class ASlasherPlayer* attacher, class ACamperPlayer* attachee)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PigAnalytics.OnRBTAttached_Analytics"));
		
		UPigAnalytics_OnRBTAttached_Analytics_Params params {};
		params.attacher = attacher;
		params.attachee = attachee;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487450
	 * 		Name   -> Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               attachedPlayer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPigAnalytics::STATIC_IncrementRBTTimerActived(class ACamperPlayer* attachedPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PigAnalytics.IncrementRBTTimerActived"));
		
		UPigAnalytics_IncrementRBTTimerActived_Params params {};
		params.attachedPlayer = attachedPlayer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487390
	 * 		Name   -> Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               playerKilled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               killedByExecutionZone                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPigAnalytics::STATIC_IncrementRBTKilledCount(class ACamperPlayer* playerKilled, bool killedByExecutionZone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PigAnalytics.IncrementRBTKilledCount"));
		
		UPigAnalytics_IncrementRBTKilledCount_Params params {};
		params.playerKilled = playerKilled;
		params.killedByExecutionZone = killedByExecutionZone;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPigAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPigAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.PigAnalytics"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHookAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHookAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.PlayerHookAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487310
	 * 		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPulldownAnalytics::STATIC_IncrementPalletStun(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PulldownAnalytics.IncrementPalletStun"));
		
		UPulldownAnalytics_IncrementPalletStun_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487290
	 * 		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPulldownAnalytics::STATIC_IncrementPalletSpawned(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PulldownAnalytics.IncrementPalletSpawned"));
		
		UPulldownAnalytics_IncrementPalletSpawned_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487210
	 * 		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPulldownAnalytics::STATIC_IncrementPalletDrop(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDrop"));
		
		UPulldownAnalytics_IncrementPalletDrop_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04487190
	 * 		Name   -> Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ASlasherPlayer*                              killer                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPulldownAnalytics::STATIC_IncrementPalletDestroy(class ASlasherPlayer* killer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.PulldownAnalytics.IncrementPalletDestroy"));
		
		UPulldownAnalytics_IncrementPalletDestroy_Params params {};
		params.killer = killer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPulldownAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPulldownAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.PulldownAnalytics"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorAnalyticsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorAnalyticsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.SurvivorAnalyticsComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0448B600
	 * 		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorInteractionAnalytics::STATIC_RecordHealSuccess(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHealSuccess"));
		
		USurvivorInteractionAnalytics_RecordHealSuccess_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0448B580
	 * 		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorInteractionAnalytics::STATIC_RecordHatchEscape(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.SurvivorInteractionAnalytics.RecordHatchEscape"));
		
		USurvivorInteractionAnalytics_RecordHatchEscape_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0448B500
	 * 		Name   -> Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ACamperPlayer*                               Survivor                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USurvivorInteractionAnalytics::STATIC_IncrementHealCount(class ACamperPlayer* Survivor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function DBDAnalytics.SurvivorInteractionAnalytics.IncrementHealCount"));
		
		USurvivorInteractionAnalytics_IncrementHealCount_Params params {};
		params.Survivor = Survivor;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorInteractionAnalytics.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorInteractionAnalytics::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class DBDAnalytics.SurvivorInteractionAnalytics"));
		return ptr;
	}

}


