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
	 * 		RVA    -> 0x045BD8E0
	 * 		Name   -> Function TheHuntress.DeadHard.GetExhaustedDuration
	 * 		Flags  -> (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
	 */
	float UDeadHard::GetExhaustedDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.DeadHard.GetExhaustedDuration"));
		
		UDeadHard_GetExhaustedDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadHard.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHard::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.DeadHard"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadHardEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHardEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.DeadHardEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDeadHardInteraction.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDeadHardInteraction::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.DeadHardInteraction"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHatchetCooldown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetCooldown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HatchetCooldown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBBA80
	 * 		Name   -> Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UHatchetLauncher::IsLaunchedHatchetFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.HatchetLauncher.IsLaunchedHatchetFullyCharged"));
		
		UHatchetLauncher_IsLaunchedHatchetFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHatchetLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HatchetLauncher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHatchetProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHatchetProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HatchetProjectile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.HatchetRack.SetMovableHatchetVisibility
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AHatchetRack::SetMovableHatchetVisibility(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.HatchetRack.SetMovableHatchetVisibility"));
		
		AHatchetRack_SetMovableHatchetVisibility_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHatchetRack.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHatchetRack::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HatchetRack"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBC040
	 * 		Name   -> Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	class ATheHuntressPower* UHatchetThrow::GetOwningHatchetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.HatchetThrow.GetOwningHatchetSpawner"));
		
		UHatchetThrow_GetOwningHatchetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHatchetThrow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHatchetThrow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HatchetThrow"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexHuntressLullabyEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexHuntressLullabyEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HexHuntressLullabyEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHexHuntressLullabyPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHexHuntressLullabyPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HexHuntressLullabyPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHuntressPowerSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHuntressPowerSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.HuntressPowerSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBC730
	 * 		Name   -> Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UReloadHatchet::IsInteractionPossible_Shared(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.ReloadHatchet.IsInteractionPossible_Shared"));
		
		UReloadHatchet_IsInteractionPossible_Shared_Params params {};
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
	 * 		Name   -> PredefinedFunction UReloadHatchet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReloadHatchet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.ReloadHatchet"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04D78080
	 * 		Name   -> Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic
	 * 		Flags  -> (BlueprintCosmetic, Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATheHuntressPower::StartHatchetShineCosmetic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.StartHatchetShineCosmetic"));
		
		ATheHuntressPower_StartHatchetShineCosmetic_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBCE80
	 * 		Name   -> Function TheHuntress.TheHuntressPower.SetPercentThrowStrength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              percentStrength                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATheHuntressPower::SetPercentThrowStrength(float percentStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.SetPercentThrowStrength"));
		
		ATheHuntressPower_SetPercentThrowStrength_Params params {};
		params.percentStrength = percentStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBCDF0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.SetHatchetVisible
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               visible                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATheHuntressPower::SetHatchetVisible(bool visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.SetHatchetVisible"));
		
		ATheHuntressPower_SetHatchetVisible_Params params {};
		params.visible = visible;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::PrintDebugThrowInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.PrintDebugThrowInfo"));
		
		ATheHuntressPower_PrintDebugThrowInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBCDC0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATheHuntressPower::IsHatchetThrowFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.IsHatchetThrowFullyCharged"));
		
		ATheHuntressPower_IsHatchetThrowFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBCD90
	 * 		Name   -> Function TheHuntress.TheHuntressPower.HasHatchet
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ATheHuntressPower::HasHatchet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.HasHatchet"));
		
		ATheHuntressPower_HasHatchet_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04FBCD60
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetOwningKiller
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	class ASlasherPlayer* ATheHuntressPower::GetOwningKiller()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.GetOwningKiller"));
		
		ATheHuntressPower_GetOwningKiller_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UBaseProjectileLauncher* ATheHuntressPower::GetHatchetProjectileLauncher()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.GetHatchetProjectileLauncher"));
		
		ATheHuntressPower_GetHatchetProjectileLauncher_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetHatchetCooldown
	 * 		Flags  -> (Event, Public, BlueprintEvent, Const)
	 */
	class UHatchetCooldown* ATheHuntressPower::GetHatchetCooldown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.GetHatchetCooldown"));
		
		ATheHuntressPower_GetHatchetCooldown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class UAkComponent* ATheHuntressPower::GetAkAudioHatchetSpawner()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.GetAkAudioHatchetSpawner"));
		
		ATheHuntressPower_GetAkAudioHatchetSpawner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::Cosmetic_OnThrowInteractionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionStart"));
		
		ATheHuntressPower_Cosmetic_OnThrowInteractionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void ATheHuntressPower::Cosmetic_OnThrowInteractionCancelled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheHuntress.TheHuntressPower.Cosmetic_OnThrowInteractionCancelled"));
		
		ATheHuntressPower_Cosmetic_OnThrowInteractionCancelled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATheHuntressPower.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATheHuntressPower::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheHuntress.TheHuntressPower"));
		return ptr;
	}

}


