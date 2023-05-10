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
	 * 		Name   -> PredefinedFunction UActiveGasCloudTrackerComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActiveGasCloudTrackerComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.ActiveGasCloudTrackerComponent"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F18FF0
	 * 		Name   -> Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated
	 * 		Flags  -> (Final, Native, Protected)
	 */
	void UAISkill_InteractionTarget_ThrowAntidote::OnPathUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.AISkill_InteractionTarget_ThrowAntidote.OnPathUpdated"));
		
		UAISkill_InteractionTarget_ThrowAntidote_OnPathUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ThrowAntidote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ThrowAntidote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AISkill_InteractionTarget_ThrowAntidote"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_InteractionTarget_ThrowToxin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_InteractionTarget_ThrowToxin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AISkill_InteractionTarget_ThrowToxin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_ReloadClown.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_ReloadClown::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AISkill_Interaction_ReloadClown"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_SwapToAntidote.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_SwapToAntidote::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AISkill_Interaction_SwapToAntidote"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAISkill_Interaction_SwapToToxin.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAISkill_Interaction_SwapToToxin::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AISkill_Interaction_SwapToToxin"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A1E0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.SetIsDissipating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsDissipating                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::SetIsDissipating(bool IsDissipating)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.SetIsDissipating"));
		
		ABaseGasCloudProjectile_SetIsDissipating_Params params {};
		params.IsDissipating = IsDissipating;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A1C0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.SetIgnoredActors
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ABaseGasCloudProjectile::SetIgnoredActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.SetIgnoredActors"));
		
		ABaseGasCloudProjectile_SetIgnoredActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.SetGasAudioActive
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               activated                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::SetGasAudioActive(bool activated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.SetGasAudioActive"));
		
		ABaseGasCloudProjectile_SetGasAudioActive_Params params {};
		params.activated = activated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A060
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.OnOverlapEnd
	 * 		Flags  -> (Final, Native, Public)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         hitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::OnOverlapEnd(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.OnOverlapEnd"));
		
		ABaseGasCloudProjectile_OnOverlapEnd_Params params {};
		params.hitComp = hitComp;
		params.OtherActor = OtherActor;
		params.OtherComponent = OtherComponent;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19E40
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.OnOverlapBegin
	 * 		Flags  -> (Final, Native, Public, HasOutParms)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         hitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            OtherBodyIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bFromSweep                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::OnOverlapBegin(class UPrimitiveComponent* hitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComponent, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.OnOverlapBegin"));
		
		ABaseGasCloudProjectile_OnOverlapBegin_Params params {};
		params.hitComp = hitComp;
		params.OtherActor = OtherActor;
		params.OtherComponent = OtherComponent;
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
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::OnDelayedActivationStart(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.OnDelayedActivationStart"));
		
		ABaseGasCloudProjectile_OnDelayedActivationStart_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19DB0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		bool                                               acquired                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::OnAcquiredChanged(bool acquired)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.OnAcquiredChanged"));
		
		ABaseGasCloudProjectile_OnAcquiredChanged_Params params {};
		params.acquired = acquired;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DD2FC0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Public)
	 */
	void ABaseGasCloudProjectile::Multicast_DissipateGasCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.Multicast_DissipateGasCloud"));
		
		ABaseGasCloudProjectile_Multicast_DissipateGasCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19D80
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ABaseGasCloudProjectile::IsSurvivorDetectionEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.IsSurvivorDetectionEnabled"));
		
		ABaseGasCloudProjectile_IsSurvivorDetectionEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19D60
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.IsDissipating
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure)
	 */
	bool ABaseGasCloudProjectile::IsDissipating()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.IsDissipating"));
		
		ABaseGasCloudProjectile_IsDissipating_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19D40
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.GetGasType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	EBombType ABaseGasCloudProjectile::GetGasType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.GetGasType"));
		
		ABaseGasCloudProjectile_GetGasType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE2140
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.DissipateGasCloud
	 * 		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseGasCloudProjectile::DissipateGasCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.DissipateGasCloud"));
		
		ABaseGasCloudProjectile_DissipateGasCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19CC0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABaseGasCloudProjectile::Authority_SetCumulativeLifetime(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.Authority_SetCumulativeLifetime"));
		
		ABaseGasCloudProjectile_Authority_SetCumulativeLifetime_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F19C90
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float ABaseGasCloudProjectile::Authority_GetCumulativeLifetime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.Authority_GetCumulativeLifetime"));
		
		ABaseGasCloudProjectile_Authority_GetCumulativeLifetime_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseGasCloudProjectile::ActivateCosmetic_BP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BaseGasCloudProjectile.ActivateCosmetic_BP"));
		
		ABaseGasCloudProjectile_ActivateCosmetic_BP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseGasCloudProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseGasCloudProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.BaseGasCloudProjectile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAntidoteCloudProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAntidoteCloudProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.AntidoteCloudProjectile"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A730
	 * 		Name   -> Function TheClown.BoilOverPerk.GetGreatHeightsValue
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBoilOverPerk::GetGreatHeightsValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BoilOverPerk.GetGreatHeightsValue"));
		
		UBoilOverPerk_GetGreatHeightsValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A700
	 * 		Name   -> Function TheClown.BoilOverPerk.GetAdditionnalWigglingProgressAtLevel
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBoilOverPerk::GetAdditionnalWigglingProgressAtLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BoilOverPerk.GetAdditionnalWigglingProgressAtLevel"));
		
		UBoilOverPerk_GetAdditionnalWigglingProgressAtLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A6E0
	 * 		Name   -> Function TheClown.BoilOverPerk.Authority_OnWiggleEnd
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UBoilOverPerk::Authority_OnWiggleEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BoilOverPerk.Authority_OnWiggleEnd"));
		
		UBoilOverPerk_Authority_OnWiggleEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1A650
	 * 		Name   -> Function TheClown.BoilOverPerk.Authority_OnPlayerPickedUpEnd
	 * 		Flags  -> (Final, Native, Private)
	 * Parameters:
	 * 		class ADBDPlayer*                                  picker                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBoilOverPerk::Authority_OnPlayerPickedUpEnd(class ADBDPlayer* picker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BoilOverPerk.Authority_OnPlayerPickedUpEnd"));
		
		UBoilOverPerk_Authority_OnPlayerPickedUpEnd_Params params {};
		params.picker = picker;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBoilOverPerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBoilOverPerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.BoilOverPerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1ADB0
	 * 		Name   -> Function TheClown.BombLauncher.SetProjectileSpeedCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 newProjectileSpeedCurve                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBombLauncher::SetProjectileSpeedCurve(class UCurveFloat* newProjectileSpeedCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.SetProjectileSpeedCurve"));
		
		UBombLauncher_SetProjectileSpeedCurve_Params params {};
		params.newProjectileSpeedCurve = newProjectileSpeedCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1AD20
	 * 		Name   -> Function TheClown.BombLauncher.SetProjectilePitchCurve
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UCurveFloat*                                 newProjectilePitchCurve                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBombLauncher::SetProjectilePitchCurve(class UCurveFloat* newProjectilePitchCurve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.SetProjectilePitchCurve"));
		
		UBombLauncher_SetProjectilePitchCurve_Params params {};
		params.newProjectilePitchCurve = newProjectilePitchCurve;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1ACA0
	 * 		Name   -> Function TheClown.BombLauncher.SetPercentThrowStrength
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              throwStrength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBombLauncher::SetPercentThrowStrength(float throwStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.SetPercentThrowStrength"));
		
		UBombLauncher_SetPercentThrowStrength_Params params {};
		params.throwStrength = throwStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1AC50
	 * 		Name   -> Function TheClown.BombLauncher.Server_SwitchBombType
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable, NetValidate)
	 */
	void UBombLauncher::Server_SwitchBombType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.Server_SwitchBombType"));
		
		UBombLauncher_Server_SwitchBombType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1ABD0
	 * 		Name   -> Function TheClown.BombLauncher.LocalLaunch
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              percentThrowStrength                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBombLauncher::LocalLaunch(float percentThrowStrength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.LocalLaunch"));
		
		UBombLauncher_LocalLaunch_Params params {};
		params.percentThrowStrength = percentThrowStrength;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.BombLauncher.Local_SwitchBombType
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBombLauncher::Local_SwitchBombType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.Local_SwitchBombType"));
		
		UBombLauncher_Local_SwitchBombType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1ABA0
	 * 		Name   -> Function TheClown.BombLauncher.IsBombFullyCharged
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UBombLauncher::IsBombFullyCharged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.IsBombFullyCharged"));
		
		UBombLauncher_IsBombFullyCharged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1AB80
	 * 		Name   -> Function TheClown.BombLauncher.GetPercentThrowStrenght
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UBombLauncher::GetPercentThrowStrenght()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.GetPercentThrowStrenght"));
		
		UBombLauncher_GetPercentThrowStrenght_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1AB50
	 * 		Name   -> Function TheClown.BombLauncher.GetCurrentBombType
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	EBombType UBombLauncher::GetCurrentBombType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.BombLauncher.GetCurrentBombType"));
		
		UBombLauncher_GetCurrentBombType_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBombLauncher.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBombLauncher::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.BombLauncher"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UClownFingersAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UClownFingersAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.ClownFingersAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1B190
	 * 		Name   -> Function TheClown.DanceWithMePerk.Authority_OnPerkActivate
	 * 		Flags  -> (Final, Native, Private, HasOutParms)
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayTag                                                (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameEventData                              GameEventData                                              (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UDanceWithMePerk::Authority_OnPerkActivate(const struct FGameplayTag& GameplayTag, const struct FGameEventData& GameEventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.DanceWithMePerk.Authority_OnPerkActivate"));
		
		UDanceWithMePerk_Authority_OnPerkActivate_Params params {};
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
	 * 		Name   -> PredefinedFunction UDanceWithMePerk.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDanceWithMePerk::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.DanceWithMePerk"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1B4A0
	 * 		Name   -> Function TheClown.GasDizzyCosmeticEffect.SetWantsDizzyEffectActive
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGasDizzyCosmeticEffect::SetWantsDizzyEffectActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GasDizzyCosmeticEffect.SetWantsDizzyEffectActive"));
		
		AGasDizzyCosmeticEffect_SetWantsDizzyEffectActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GasDizzyCosmeticEffect.Cosmetic_SetDizzyEffectActive
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsActive                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AGasDizzyCosmeticEffect::Cosmetic_SetDizzyEffectActive(bool IsActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GasDizzyCosmeticEffect.Cosmetic_SetDizzyEffectActive"));
		
		AGasDizzyCosmeticEffect_Cosmetic_SetDizzyEffectActive_Params params {};
		params.IsActive = IsActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGasDizzyCosmeticEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGasDizzyCosmeticEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.GasDizzyCosmeticEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durationRemaining                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::UpdateAntidoteEffectVFX(float durationRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.UpdateAntidoteEffectVFX"));
		
		UGassedStatusEffect_UpdateAntidoteEffectVFX_Params params {};
		params.durationRemaining = durationRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C310
	 * 		Name   -> Function TheClown.GassedStatusEffect.SetRemainingDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::SetRemainingDuration(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.SetRemainingDuration"));
		
		UGassedStatusEffect_SetRemainingDuration_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C290
	 * 		Name   -> Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		float                                              value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::SetRemainingAntidoteDuration(float value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.SetRemainingAntidoteDuration"));
		
		UGassedStatusEffect_SetRemainingAntidoteDuration_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnToxinEffectEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durationSkipped                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::OnToxinEffectEnd(float durationSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnToxinEffectEnd"));
		
		UGassedStatusEffect_OnToxinEffectEnd_Params params {};
		params.durationSkipped = durationSkipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnToxinEffectBegin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              EffectDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::OnToxinEffectBegin(float EffectDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnToxinEffectBegin"));
		
		UGassedStatusEffect_OnToxinEffectBegin_Params params {};
		params.EffectDuration = EffectDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnToxinCured
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UGassedStatusEffect::OnToxinCured()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnToxinCured"));
		
		UGassedStatusEffect_OnToxinCured_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C270
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGassedStatusEffect::OnRep_TotalTimesEnteringToxicClouds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnRep_TotalTimesEnteringToxicClouds"));
		
		UGassedStatusEffect_OnRep_TotalTimesEnteringToxicClouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C250
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud
	 * 		Flags  -> (Final, Native, Private)
	 */
	void UGassedStatusEffect::OnRep_IsInAntidoteCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnRep_IsInAntidoteCloud"));
		
		UGassedStatusEffect_OnRep_IsInAntidoteCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnDirectBottleHit
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBombType                                          bottleType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::OnDirectBottleHit(EBombType bottleType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnDirectBottleHit"));
		
		UGassedStatusEffect_OnDirectBottleHit_Params params {};
		params.bottleType = bottleType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              durationSkipped                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::OnAntidoteEffectEnd(float durationSkipped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnAntidoteEffectEnd"));
		
		UGassedStatusEffect_OnAntidoteEffectEnd_Params params {};
		params.durationSkipped = durationSkipped;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x055BB3B0
	 * 		Name   -> Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		float                                              EffectDuration                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::OnAntidoteEffectBegin(float EffectDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.OnAntidoteEffectBegin"));
		
		UGassedStatusEffect_OnAntidoteEffectBegin_Params params {};
		params.EffectDuration = EffectDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C220
	 * 		Name   -> Function TheClown.GassedStatusEffect.IsInCloud
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGassedStatusEffect::IsInCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.IsInCloud"));
		
		UGassedStatusEffect_IsInCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DE2050
	 * 		Name   -> Function TheClown.GassedStatusEffect.IsInAntidoteCloud
	 * 		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UGassedStatusEffect::IsInAntidoteCloud()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.IsInAntidoteCloud"));
		
		UGassedStatusEffect_IsInAntidoteCloud_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C1F0
	 * 		Name   -> Function TheClown.GassedStatusEffect.GetRemainingDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGassedStatusEffect::GetRemainingDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.GetRemainingDuration"));
		
		UGassedStatusEffect_GetRemainingDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C1C0
	 * 		Name   -> Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGassedStatusEffect::GetRemainingAntidoteDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.GetRemainingAntidoteDuration"));
		
		UGassedStatusEffect_GetRemainingAntidoteDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C190
	 * 		Name   -> Function TheClown.GassedStatusEffect.GetCloudEffectDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGassedStatusEffect::GetCloudEffectDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.GetCloudEffectDuration"));
		
		UGassedStatusEffect_GetCloudEffectDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C160
	 * 		Name   -> Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	float UGassedStatusEffect::GetAntidoteCloudEffectDuration()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.GetAntidoteCloudEffectDuration"));
		
		UGassedStatusEffect_GetAntidoteCloudEffectDuration_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C0D0
	 * 		Name   -> Function TheClown.GassedStatusEffect.Authority_SetIsInCloud
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::Authority_SetIsInCloud(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.Authority_SetIsInCloud"));
		
		UGassedStatusEffect_Authority_SetIsInCloud_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1C040
	 * 		Name   -> Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               value                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::Authority_SetIsInAntidoteCloud(bool value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.Authority_SetIsInAntidoteCloud"));
		
		UGassedStatusEffect_Authority_SetIsInAntidoteCloud_Params params {};
		params.value = value;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1BFB0
	 * 		Name   -> Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseGasCloudProjectile*                     cloud                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::Authority_RemoveOverlappingCloud(class ABaseGasCloudProjectile* cloud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.Authority_RemoveOverlappingCloud"));
		
		UGassedStatusEffect_Authority_RemoveOverlappingCloud_Params params {};
		params.cloud = cloud;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1BF20
	 * 		Name   -> Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud
	 * 		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class ABaseGasCloudProjectile*                     cloud                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGassedStatusEffect::Authority_AddOverlappingCloud(class ABaseGasCloudProjectile* cloud)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.GassedStatusEffect.Authority_AddOverlappingCloud"));
		
		UGassedStatusEffect_Authority_AddOverlappingCloud_Params params {};
		params.cloud = cloud;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGassedStatusEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGassedStatusEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.GassedStatusEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGassedSurvivorSubAnimInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGassedSurvivorSubAnimInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.GassedSurvivorSubAnimInstance"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPopGoesTheWeasel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPopGoesTheWeasel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.PopGoesTheWeasel"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USurvivorGasCloudEffect.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USurvivorGasCloudEffect::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.SurvivorGasCloudEffect"));
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1CE20
	 * 		Name   -> Function TheClown.TheClownUtilities.IsGassed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheClownUtilities::STATIC_IsGassed(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.TheClownUtilities.IsGassed"));
		
		UTheClownUtilities_IsGassed_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1CD90
	 * 		Name   -> Function TheClown.TheClownUtilities.IsAffectedByAntidote
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheClownUtilities::STATIC_IsAffectedByAntidote(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.TheClownUtilities.IsAffectedByAntidote"));
		
		UTheClownUtilities_IsAffectedByAntidote_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1CD00
	 * 		Name   -> Function TheClown.TheClownUtilities.GetGassedStatusEffect
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGassedStatusEffect* UTheClownUtilities::STATIC_GetGassedStatusEffect(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.TheClownUtilities.GetGassedStatusEffect"));
		
		UTheClownUtilities_GetGassedStatusEffect_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1CC70
	 * 		Name   -> Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UActiveGasCloudTrackerComponent* UTheClownUtilities::STATIC_GetActiveGasCloudTrackerComponent(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.TheClownUtilities.GetActiveGasCloudTrackerComponent"));
		
		UTheClownUtilities_GetActiveGasCloudTrackerComponent_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04F1CBE0
	 * 		Name   -> Function TheClown.TheClownUtilities.CanBeGassed
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class ADBDPlayer*                                  Player                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UTheClownUtilities::STATIC_CanBeGassed(class ADBDPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>(xor("Function TheClown.TheClownUtilities.CanBeGassed"));
		
		UTheClownUtilities_CanBeGassed_Params params {};
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
	 * 		Name   -> PredefinedFunction UTheClownUtilities.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTheClownUtilities::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass(xor("Class TheClown.TheClownUtilities"));
		return ptr;
	}

}


